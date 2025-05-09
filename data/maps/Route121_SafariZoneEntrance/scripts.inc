# 1 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 2 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_MapScripts:: @ 822BBBB
# 3 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route121_SafariZoneEntrance_OnFrame
# 4 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.byte 0
# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 6 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_OnFrame: @ 822BBC1
# 7 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	map_script_2 VAR_SAFARI_ZONE_STATE, 1, Route121_SafariZoneEntrance_EventScript_ExitSafariZone
# 8 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.2byte 0
# 9 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 10 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_ExitSafariZone:: @ 822BBCB
# 11 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lockall
# 12 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route121_SafariZoneEntrance_Movement_ExitSafariZone
# 13 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 14 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 15 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	releaseall
# 16 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 17 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 18 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_ExitSafariZone: @ 822BBDD
# 19 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_up
# 20 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 21 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 22 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 23 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 24 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 25 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 26 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 27 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 28 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 29 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_WelcomeAttendant:: @ 822BBE6
# 30 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WelcomeToSafariZone, MSGBOX_NPC
# 31 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 32 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 33 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_InfoAttendant:: @ 822BBEF
# 34 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lock
# 35 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	faceplayer
# 36 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WelcomeFirstTime, MSGBOX_YESNO
# 37 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, YES
# 38 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_FirstTimeInfo
# 39 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ComeInAndEnjoy, MSGBOX_DEFAULT
# 40 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
# 41 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 42 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 43 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_FirstTimeInfo:: @ 822BC0E
# 44 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_FirstTimeInfo, MSGBOX_DEFAULT
# 45 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
# 46 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 47 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 48 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_HasSafariPass:: @ 822BC18
# 49 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_set FLAG_SHOWN_SAFARI_PASS Route121_SafariZoneEntrance_EventScript_End
# 50 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 51 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_HasSafariPass, MSGBOX_DEFAULT
# 53 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 54 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setflag FLAG_SHOWN_SAFARI_PASS
# 55 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 56 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 57 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_End:: @ 822BC18
# 58 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 59 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 60 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TalkToEntranceAttendant:: @ 822BC18
# 61 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lockall
# 62 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 63 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	showmoneybox 0, 0, 0
# 65 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
# 66 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, YES
# 67 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
# 69 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 70 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 71 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 72 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon:: @ 822BCE9
# 73 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	return
# 74 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 75 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_NoPokeblockCase:: @ 822BCEA
# 76 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase, MSGBOX_DEFAULT
# 77 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 78 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 79 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 80 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_NotEnoughMoney:: @ 822BCF8
# 81 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 82 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 83 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 84 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 85 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter:: @ 822BD06
# 86 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 87 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	hidemoneybox
# 88 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	checkitem ITEM_SAFARI_PASS, 1
# 89 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, 1
# 90 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter2
# 91 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route121_SafariZoneEntrance_Movement_BackAwayFromCounter
# 92 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	releaseall
# 94 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 95 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	
# 96 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter2:: @ 822BD06
# 97 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	releaseall
# 99 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 100 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 101 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_BackAwayFromCounter: @ 822BD16
# 102 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 103 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 104 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 105 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_EnterSafariZone: @ 822BD18
# 106 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 107 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 108 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 109 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 110 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 111 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 112 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_down
# 113 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	delay_16
# 114 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 115 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 116 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TrainerTipSign:: @ 822BD21
# 117 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_TrainerTip, MSGBOX_SIGN
# 118 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end

Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger::
# 122 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lockall
# 123 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	checkitem ITEM_SAFARI_PASS, 1
# 124 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_2
# 134 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 135 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	showmoneybox 0, 0, 0
# 137 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
# 138 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_5
# 142 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
# 143 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_1:
	end

Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_2:
# 125 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setflag FLAG_HIDE_SAFARI_ZONE_WORKER_WITHOUT_PASS
# 126 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_set FLAG_SHOWN_SAFARI_PASS Route121_SafariZoneEntrance_EventScript_End
# 127 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 128 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_HasSafariPass, MSGBOX_DEFAULT
# 130 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 131 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setflag FLAG_SHOWN_SAFARI_PASS
	goto Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_1

Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_5:
# 139 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone
	goto Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_1


Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone::
# 150 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE, 1
# 151 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_2
# 167 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	checkmoney 500, 0
# 168 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_5
# 190 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_NotEnoughMoney
Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_1:
	end

Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_2:
# 152 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	hidemoneybox
# 153 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_Text_0, MSGBOX_DEFAULT
# 158 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	giveitem ITEM_POKEBLOCK_CASE
# 159 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setflag FLAG_RECEIVED_POKEBLOCK_CASE
# 160 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitfanfare
# 161 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_Text_1, MSGBOX_DEFAULT
# 162 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	showmoneybox 0, 0, 0
# 163 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone
	goto Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_1

Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_5:
# 169 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	playse SE_SHOP
# 170 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ThatWillBe500Please, MSGBOX_DEFAULT
# 171 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	removemoney 500, 0
# 172 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	updatemoneybox 0, 0
# 173 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls, MSGBOX_DEFAULT
# 174 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 175 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	message Route121_SafariZoneEntrance_Text_Received30SafariBalls
# 176 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitfanfare
# 177 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 178 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special HideFollower
# 179 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 180 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	hidemoneybox
# 181 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route121_SafariZoneEntrance_Movement_EnterSafariZone
# 182 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 183 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special EnterSafariMode
# 184 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 2
# 185 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	clearflag FLAG_GOOD_LUCK_SAFARI_ZONE
# 186 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	warp MAP_SAFARI_ZONE_SOUTH, 255, 32, 33
# 187 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
	goto Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_1


Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon::
# 197 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	getpartysize
# 198 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 199 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_ne Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon
# 200 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
# 201 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, 1
# 202 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon
# 203 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull, MSGBOX_DEFAULT
# 204 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end


Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_Text_0:
# 153 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.string "Excuse me!\n"
	.string "You seem to be without a {POKEBLOCK} Case.\p"
	.string "Your Safari Game will be much more\n"
	.string "fruitful if you use {POKEBLOCK}s.\p"
	.string "Luckily I have some laying around so let\n"
	.string "me give you one!$"

Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_Text_1:
# 161 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.string "Okay, now that we've cleared that up…$"
