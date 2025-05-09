# 1 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 2 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
.set LOCALID_MOVE_DELETER, 1
# 3 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 4 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_MapScripts:: @ 821EA0A
# 5 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 7 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter:: @ 821EA0B
# 8 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	lockall
# 9 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	applymovement LOCALID_MOVE_DELETER, Common_Movement_FacePlayer
# 10 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitmovement 0
# 11 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
# 12 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
# 14 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 15 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 16 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 17 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
		
# 18 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_Come_Again::
# 19 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 20 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	release
# 21 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 22 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	
# 23 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_Decline::
# 24 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_Starter_Declined, MSGBOX_DEFAULT
# 25 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	release
# 26 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 27 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
		
# 28 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget:: @ 821EA3B
# 29 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget, MSGBOX_DEFAULT
# 30 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special ChoosePartyMon
# 31 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitstate
# 32 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_0x8004, 255
# 33 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 34 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special IsSelectedMonEgg
# 35 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 36 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves
# 37 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special GetNumMovesSelectedMonHas
# 38 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_RESULT, 1
# 39 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove
# 40 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
# 41 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 42 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special MoveDeleterChooseMoveToForget
# 43 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 44 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_0x8005, MAX_MON_MOVES
# 45 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
# 46 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 47 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
# 48 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	switch VAR_RESULT
# 49 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove
# 50 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 51 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 52 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 53 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 54 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove:: @ 821EAB0
# 55 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special IsLastMonThatKnowsSurf
# 56 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 57 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf
# 58 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special MoveDeleterForgetMove
# 59 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 60 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitfanfare
# 61 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove, MSGBOX_DEFAULT
# 62 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 63 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 64 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 65 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove:: @ 821EACF
# 66 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 67 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
# 68 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 69 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 70 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 71 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves:: @ 821EADC
# 72 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves, MSGBOX_DEFAULT
# 73 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 74 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 75 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 76 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain:: @ 821EAE6
# 77 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ComeAgain, MSGBOX_DEFAULT
# 78 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 79 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 80 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 81 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf:: @ 821EAF0
# 82 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 83 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf, MSGBOX_DEFAULT
# 84 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 85 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 86 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 87 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove: @ 821EAFD
# 88 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Uh…\n"
# 89 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Oh, yes, I'm the Move Deleter.\p"
# 90 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "I can make Pokémon forget their moves.\p"
# 91 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Would you like me to do that?$"
# 92 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	
# 93 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ThreeShards:
# 94 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "If you have 2 Blue Shards I can\n"
# 95 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "give you a good Pokémon.$"
# 96 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	
# 97 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_Question:
# 98 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Are those Blue Shards?\p"
# 99 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Do you want to trade them\n"
# 100 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "for one of my Pokémon?$"
# 101 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	
# 102 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_Chose_Well:
# 103 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Please chose one of my Pokémon.$"
# 104 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	
# 105 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_Starter_Declined:
# 106 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Oh well, come again if you change\n"
# 107 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "your mind.$"
# 108 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	
# 109 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ComeAgain_Starter:
# 110 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Come again if you want another\n"
# 111 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "one.$"
# 112 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 113 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget: @ 821EB65
# 114 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Which Pokémon should forget a move?$"
# 115 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 116 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten: @ 821EB89
# 117 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Which move should be forgotten?$"
# 118 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 119 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove: @ 821EBA9
# 120 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_1} knows only one move\n"
# 121 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "so it can't be forgotten…$"
# 122 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 123 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten: @ 821EBDA
# 124 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
# 125 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "That move should be forgotten?$"
# 126 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 127 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove: @ 821EC06
# 128 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "It worked to perfection!\p"
# 129 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_1} has forgotten\n"
# 130 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_2} completely.$"
# 131 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 132 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ComeAgain: @ 821EC3F
# 133 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Come again if there are moves that\n"
# 134 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "need to be forgotten.$"
# 135 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 136 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves: @ 821EC78
# 137 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "What?\n"
# 138 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "No Egg should know any moves.$"
# 139 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 140 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf: @ 821EC9C
# 141 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Hm!\p"
# 142 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Your {STR_VAR_1} doesn't seem willing\n"
# 143 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "to forget Surf.$"

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter::
# 147 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	lock
# 148 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	faceplayer
# 149 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ThreeShards, MSGBOX_DEFAULT
# 150 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	checkitem ITEM_BLUE_SHARD, 2
# 151 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_2
LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_1:
# 224 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	release
	end

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_2:
# 152 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	playse SE_PIN
# 153 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 154 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitmovement 0
# 155 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 156 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitmovement 0
# 157 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_Question, MSGBOX_YESNO
# 158 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_5
LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_4:
# 161 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	getpartysize
# 162 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_8
LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_7:
# 165 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	removeitem ITEM_BLUE_SHARD, 2
# 166 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 167 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitfanfare
# 168 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	random 9
# 169 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	switch VAR_RESULT
# 170 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case 0, LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_12
# 180 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case 1, LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_13
# 184 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case 2, LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_14
# 195 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case 3, LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_15
# 199 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case 4, LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_16
# 203 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case 5, LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_17
# 207 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case 6, LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_18
# 211 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case 7, LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_19
# 215 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case 8, LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_20
LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_10:
# 220 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	message LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_Text_0
# 221 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitmessage
# 222 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ComeAgain_Starter, MSGBOX_DEFAULT
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_1

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_5:
# 159 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_Decline
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_4

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_8:
# 163 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_No_Space
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_7

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_12:
# 171 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	bufferspeciesname 1, SPECIES_SQUIRTLE
# 172 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_set FLAG_GOT_BLASTOISE_MEGA_STONE, LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_22
# 172 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_11, LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_22
# 176 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	givemon SPECIES_SQUIRTLE, 30, ITEM_BLASTOISINITE
# 177 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	setflag FLAG_GOT_BLASTOISE_MEGA_STONE
LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_21:
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_10

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_13:
# 181 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	bufferspeciesname 1, SPECIES_TOTODILE
# 182 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	givemon SPECIES_TOTODILE, 10, ITEM_NONE
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_10

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_14:
# 185 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	bufferspeciesname 1, SPECIES_MUDKIP
# 186 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_set FLAG_GOT_SWAMPERT_MEGA_STONE, LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_28
# 186 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_11, LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_28
# 191 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	givemon SPECIES_MUDKIP, 30, ITEM_SWAMPERTITE
# 192 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	setflag FLAG_GOT_SWAMPERT_MEGA_STONE
LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_27:
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_10

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_15:
# 196 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	bufferspeciesname 1, SPECIES_PIPLUP
# 197 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	givemon SPECIES_PIPLUP, 10, ITEM_NONE
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_10

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_16:
# 200 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	bufferspeciesname 1, SPECIES_OSHAWOTT
# 201 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	givemon SPECIES_OSHAWOTT, 10, ITEM_NONE
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_10

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_17:
# 204 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	bufferspeciesname 1, SPECIES_FROAKIE
# 205 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	givemon SPECIES_FROAKIE, 10, ITEM_NONE
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_10

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_18:
# 208 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	bufferspeciesname 1, SPECIES_POPPLIO
# 209 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	givemon SPECIES_POPPLIO, 10, ITEM_NONE
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_10

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_19:
# 212 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	bufferspeciesname 1, SPECIES_SOBBLE
# 213 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	givemon SPECIES_SOBBLE, 10, ITEM_NONE
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_10

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_20:
# 216 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	bufferspeciesname 1, SPECIES_QUAXLY
# 217 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	givemon SPECIES_QUAXLY, 10, ITEM_NONE
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_10

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_22:
# 173 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	givemon SPECIES_SQUIRTLE, 10, ITEM_NONE
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_21

LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_28:
# 188 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	givemon SPECIES_MUDKIP, 10, ITEM_NONE
	goto LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_27


LilycoveCity_MoveDeletersHouse_EventScript_WaterStarter_Text_0:
# 220 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2}\n"
	.string "from the Old Man.{PAUSE_UNTIL_PRESS}$"
