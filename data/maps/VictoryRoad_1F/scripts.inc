# 1 "data/maps/VictoryRoad_1F/scripts.pory"

# 2 "data/maps/VictoryRoad_1F/scripts.pory"
.set LOCALID_WALLY_ENTRANCE, 4
# 3 "data/maps/VictoryRoad_1F/scripts.pory"

# 4 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_MapScripts:: @ 8235D7A
# 5 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
# 6 "data/maps/VictoryRoad_1F/scripts.pory"
	.byte 0
# 7 "data/maps/VictoryRoad_1F/scripts.pory"

# 8 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition: @ 8235D80
# 9 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_VICTORY_ROAD_1F_STATE, 1
# 10 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_eq VictoryRoad_1F_EventScript_SetEntranceWallyPos1
# 11 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_VICTORY_ROAD_1F_STATE, 2
# 12 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_eq VictoryRoad_1F_EventScript_SetEntranceWallyPos2
# 13 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 14 "data/maps/VictoryRoad_1F/scripts.pory"

# 15 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos1:: @ 8235D97
# 16 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_WALLY_ENTRANCE, 2, 24
# 17 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_WALLY_ENTRANCE, MOVEMENT_TYPE_FACE_DOWN
# 18 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 19 "data/maps/VictoryRoad_1F/scripts.pory"

# 20 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos2:: @ 8235DA3
# 21 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_WALLY_ENTRANCE, 3, 24
# 22 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_WALLY_ENTRANCE, MOVEMENT_TYPE_FACE_DOWN
# 23 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 24 "data/maps/VictoryRoad_1F/scripts.pory"

# 25 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger1:: @ 8235DAF
# 26 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 27 "data/maps/VictoryRoad_1F/scripts.pory"
	special HideFollower
# 28 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_WALLY_ENTRANCE
# 30 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer1
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 32 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 33 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 34 "data/maps/VictoryRoad_1F/scripts.pory"

# 35 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger2:: @ 8235DC8
# 36 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 37 "data/maps/VictoryRoad_1F/scripts.pory"
	special HideFollower
# 38 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 39 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_WALLY_ENTRANCE
# 40 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer2
# 41 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 42 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 43 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 44 "data/maps/VictoryRoad_1F/scripts.pory"

# 45 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyEntranceBattle:: @ 8235DE1
# 46 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 47 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 48 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
# 49 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat
# 50 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
# 51 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
# 52 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_WALLY_ENTRANCE
# 53 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 54 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
# 55 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 56 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 57 "data/maps/VictoryRoad_1F/scripts.pory"

# 58 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer1: @ 8235E15
# 59 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 60 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 61 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 62 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 63 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 64 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 65 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 66 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 67 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 70 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 71 "data/maps/VictoryRoad_1F/scripts.pory"

# 72 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer2: @ 8235E21
# 73 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 74 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 75 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 76 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 77 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 78 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 79 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 80 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 81 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 82 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 83 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 84 "data/maps/VictoryRoad_1F/scripts.pory"

# 85 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
# 86 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_EntranceWally:: @ 8235E2C
# 87 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
# 88 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 89 "data/maps/VictoryRoad_1F/scripts.pory"

# 90 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears and remains at the exit after the Hall of Fame is entered 
# 91 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_ExitWally:: @ 8235E35
# 92 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 93 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 94 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 95 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VictoryRoad_1F_EventScript_RematchWally
# 96 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 98 "data/maps/VictoryRoad_1F/scripts.pory"

# 99 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_RematchWally:: @ 8235E5C
# 100 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 101 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 103 "data/maps/VictoryRoad_1F/scripts.pory"

# 104 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Edgar:: @ 8235E73
# 105 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
# 106 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 108 "data/maps/VictoryRoad_1F/scripts.pory"

# 109 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Albert:: @ 8235E8A
# 110 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
# 111 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 113 "data/maps/VictoryRoad_1F/scripts.pory"

# 114 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Hope:: @ 8235EA1
# 115 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
# 116 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 118 "data/maps/VictoryRoad_1F/scripts.pory"

# 119 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Quincy:: @ 8235EB8
# 120 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
# 121 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 123 "data/maps/VictoryRoad_1F/scripts.pory"

# 124 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Katelynn:: @ 8235ECF
# 125 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
# 126 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 128 "data/maps/VictoryRoad_1F/scripts.pory"

# 129 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore: @ 8235EE6
# 130 "data/maps/VictoryRoad_1F/scripts.pory"
    .string "My name is Wally. I'm here to train\n"
# 131 "data/maps/VictoryRoad_1F/scripts.pory"
    .string "with my Pokémon. You seem strong,\p"
# 132 "data/maps/VictoryRoad_1F/scripts.pory"
    .string "so please let me test the courage\n"
# 133 "data/maps/VictoryRoad_1F/scripts.pory"
    .string "and strength I've gained from them!\p"
# 134 "data/maps/VictoryRoad_1F/scripts.pory"
    .string "Okay… Here I come!$"
# 135 "data/maps/VictoryRoad_1F/scripts.pory"

# 136 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyEntranceDefeat: @ 8235FFC
# 137 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 138 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You are strong, after all!$"
# 139 "data/maps/VictoryRoad_1F/scripts.pory"

# 140 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostEntranceBattle: @ 8236020
# 141 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wally: I couldn't beat you, but\n"
# 142 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'll keep training and catch up to you!$"
# 143 "data/maps/VictoryRoad_1F/scripts.pory"

# 144 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyIntro: @ 8236073
# 145 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wally: Hi! {PLAYER}!\p"
# 146 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've gotten stronger since that last\n"
# 147 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "time! I wanted to show you, {PLAYER}!\p"
# 148 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 149 "data/maps/VictoryRoad_1F/scripts.pory"

# 150 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyDefeat: @ 82360DA
# 151 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 152 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 153 "data/maps/VictoryRoad_1F/scripts.pory"

# 154 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostBattle: @ 82360FE
# 155 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wally: I couldn't beat you this time,\n"
# 156 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "too… But one of these days, {PLAYER},\l"
# 157 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to catch up to you…\p"
# 158 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "And beat the Pokémon League!$"
# 159 "data/maps/VictoryRoad_1F/scripts.pory"

# 160 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarIntro: @ 8236184
# 161 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've made it this far a couple times,\n"
# 162 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "but the last stretch is so long…$"
# 163 "data/maps/VictoryRoad_1F/scripts.pory"

# 164 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarDefeat: @ 82361CB
# 165 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "My dream ends here again…$"
# 166 "data/maps/VictoryRoad_1F/scripts.pory"

# 167 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarPostBattle: @ 82361E5
# 168 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You've made it this far. Keep the\n"
# 169 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "momentum going and become the\l"
# 170 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Champion! If anyone can, it's you!$"
# 171 "data/maps/VictoryRoad_1F/scripts.pory"

# 172 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertIntro: @ 8236248
# 173 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I didn't come all this way to lose now.\n"
# 174 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That possibility doesn't exist!$"
# 175 "data/maps/VictoryRoad_1F/scripts.pory"

# 176 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertDefeat: @ 8236290
# 177 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Impossible…\n"
# 178 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost?$"
# 179 "data/maps/VictoryRoad_1F/scripts.pory"

# 180 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertPostBattle: @ 82362A4
# 181 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost here…\p"
# 182 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That means I lack the qualifications\n"
# 183 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the Champion…$"
# 184 "data/maps/VictoryRoad_1F/scripts.pory"

# 185 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeIntro: @ 82362EE
# 186 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This seemingly infinite and harsh road\n"
# 187 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "lives up to its name of Victory.$"
# 188 "data/maps/VictoryRoad_1F/scripts.pory"

# 189 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeDefeat: @ 8236336
# 190 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Your battle style is fantastic…$"
# 191 "data/maps/VictoryRoad_1F/scripts.pory"

# 192 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopePostBattle: @ 8236356
# 193 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You seem to have the potential for\n"
# 194 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "becoming the Champion.$"
# 195 "data/maps/VictoryRoad_1F/scripts.pory"

# 196 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyIntro: @ 8236390
# 197 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "What is the Victory Road?\n"
# 198 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'll tell you if you win!$"
# 199 "data/maps/VictoryRoad_1F/scripts.pory"

# 200 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyDefeat: @ 82363C4
# 201 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay!\n"
# 202 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Well done!$"
# 203 "data/maps/VictoryRoad_1F/scripts.pory"

# 204 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyPostBattle: @ 82363D5
# 205 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Getting through here safely--that's\n"
# 206 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "the final test for any Trainer aiming\l"
# 207 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the Pokémon Champion.\p"
# 208 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That's why it's called the Victory\n"
# 209 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Road.$"
# 210 "data/maps/VictoryRoad_1F/scripts.pory"

# 211 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnIntro: @ 8236468
# 212 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I have nothing to say to anyone\n"
# 213 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "that's come this far. Come on!$"
# 214 "data/maps/VictoryRoad_1F/scripts.pory"

# 215 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnDefeat: @ 82364A7
# 216 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This is a disgrace…$"
# 217 "data/maps/VictoryRoad_1F/scripts.pory"

# 218 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnPostBattle: @ 82364BB
# 219 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Humph, go right on ahead.\n"
# 220 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "See if I care.$"
