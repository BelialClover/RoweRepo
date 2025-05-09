# 1 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 2 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_MapScripts:: @ 8270A28
# 3 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_DivingTreasureHuntersHouse_OnTransition
# 4 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 6 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_OnTransition: @ 8270A2E
# 7 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setflag FLAG_LANDMARK_HUNTERS_HOUSE
# 8 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 9 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 10 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter:: @ 8270A32
# 11 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	lock
# 12 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_set FLAG_MET_DIVING_TREASURE_HUNTER, Route124_DivingTreasureHuntersHouse_EventScript_SkipGreeting
# 14 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_Greeting, MSGBOX_DEFAULT
# 15 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setflag FLAG_MET_DIVING_TREASURE_HUNTER
# 16 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard
# 17 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 18 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 19 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_SkipGreeting:: @ 8270A4E
# 20 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_HaveYouSeenAnyShards, MSGBOX_DEFAULT
# 21 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard
# 22 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 23 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 24 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard:: @ 8270A5C
# 25 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards
# 26 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_TEMP_1, 0
# 27 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_NoShards
# 28 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_HasShard
# 29 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 30 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 31 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards:: @ 8270A72
# 32 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_TEMP_1, 0
# 33 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_RED_SHARD, 1
# 34 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 35 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call_if_eq Route124_DivingTreasureHuntersHouse_EventScript_HasRedShard
# 36 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 37 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 38 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call_if_eq Route124_DivingTreasureHuntersHouse_EventScript_HasYellowShard
# 39 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_BLUE_SHARD, 1
# 40 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 41 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call_if_eq Route124_DivingTreasureHuntersHouse_EventScript_HasBlueShard
# 42 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_GREEN_SHARD, 1
# 43 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 44 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call_if_eq Route124_DivingTreasureHuntersHouse_EventScript_HasGreenShard
# 45 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 46 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 47 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasRedShard:: @ 8270AB8
# 48 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 1
# 49 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 50 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 51 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasYellowShard:: @ 8270ABE
# 52 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 2
# 53 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 54 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 55 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasBlueShard:: @ 8270AC4
# 56 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 4
# 57 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 58 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 59 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasGreenShard:: @ 8270ACA
# 60 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 8
# 61 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 62 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 63 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasShard:: @ 8270AD0
# 64 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ThatsAShardIllTradeYou, MSGBOX_DEFAULT
# 65 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions
# 66 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 67 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 68 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions:: @ 8270ADE
# 69 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	message Route124_DivingTreasureHuntersHouse_Text_WhatDoYouWantToTrade
# 70 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	waitmessage
# 71 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_TEMP_1
# 72 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR
# 73 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY
# 74 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY
# 75 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 4,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB
# 76 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 5,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB
# 77 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 6,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB
# 78 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 7,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB
# 79 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 8,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG
# 80 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 9,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG
# 81 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 10, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG
# 82 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 11, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG
# 83 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 12, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG
# 84 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 13, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG
# 85 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 14, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG
# 86 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 15, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG
# 87 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 88 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 89 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR:: @ 8270B8F
# 90 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_R, 0
# 91 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 92 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 93 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 94 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 95 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 96 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 97 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY:: @ 8270BB5
# 98 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_Y, 0
# 99 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 101 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 102 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 103 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 104 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 105 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY:: @ 8270BDB
# 106 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RY, 0
# 107 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 108 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 109 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 110 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 111 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 112 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 113 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 114 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB:: @ 8270C0C
# 115 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_B, 0
# 116 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 117 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 118 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 119 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 120 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 121 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 122 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB:: @ 8270C32
# 123 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RB, 0
# 124 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 125 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 126 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 127 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 128 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 129 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 130 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 131 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB:: @ 8270C63
# 132 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_YB, 0
# 133 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 134 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 135 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 136 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 137 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 138 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 139 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 140 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB:: @ 8270C94
# 141 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RYB, 0
# 142 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 143 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 144 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 145 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 146 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 147 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 148 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 149 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 150 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG:: @ 8270CD0
# 151 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_G, 0
# 152 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 153 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 154 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 155 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 156 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 157 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 158 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG:: @ 8270CF6
# 159 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RG, 0
# 160 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 161 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 162 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 163 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 164 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 165 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 166 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 167 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG:: @ 8270D27
# 168 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_YG, 0
# 169 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 170 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 171 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 172 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 173 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 174 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 175 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 176 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG:: @ 8270D58
# 177 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RYG, 0
# 178 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 179 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 180 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 181 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 182 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 183 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 184 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 185 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 186 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG:: @ 8270D94
# 187 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_BG, 0
# 188 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 189 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 190 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 191 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 192 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 193 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 194 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 195 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG:: @ 8270DC5
# 196 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RBG, 0
# 197 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 198 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 199 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 200 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 201 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 202 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 203 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 204 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 205 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG:: @ 8270E01
# 206 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_YBG, 0
# 207 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 209 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 210 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 211 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 212 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 213 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 214 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 215 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG:: @ 8270E3D
# 216 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RYBG, 0
# 217 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 218 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 219 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 220 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 221 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 222 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 4, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 223 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 224 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 225 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 226 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard:: @ 8270E84
# 227 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_RED_SHARD
# 228 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_FIRE_STONE
# 229 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 230 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 231 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard:: @ 8270E93
# 232 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_YELLOW_SHARD
# 233 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_THUNDER_STONE
# 234 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 235 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 236 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard:: @ 8270EA2
# 237 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_BLUE_SHARD
# 238 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_WATER_STONE
# 239 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 240 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 241 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard:: @ 8270EB1
# 242 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_GREEN_SHARD
# 243 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_LEAF_STONE
# 244 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 245 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 246 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard:: @ 8270EC0
# 247 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	bufferitemname 0, VAR_0x8008
# 248 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	bufferitemname 1, VAR_0x8009
# 249 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_YoullTradeShardForStone, MSGBOX_YESNO
# 250 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, NO
# 251 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 252 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitemspace VAR_0x8009, 1
# 253 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 254 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TradeShard
# 255 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem VAR_0x8008, 2
# 256 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 257 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TradeShard
# 258 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_BagFull
# 259 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 260 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 261 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeShard:: @ 8270F01
# 262 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	removeitem VAR_0x8008
# 263 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	giveitem VAR_0x8009
# 264 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ItsADeal, MSGBOX_DEFAULT
# 265 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards
# 266 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_TEMP_1, 0
# 267 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_EndTrade
# 268 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_TradeSomethingElse, MSGBOX_YESNO
# 269 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, YES
# 270 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions
# 271 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 272 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 273 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 274 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_BagFull:: @ 8270F43
# 275 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_BagFull, MSGBOX_DEFAULT
# 276 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 277 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 278 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 279 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade:: @ 8270F4D
# 280 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ComeBackIfYouChangeMind, MSGBOX_DEFAULT
# 281 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 282 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 283 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 284 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_NoShards:: @ 8270F57
# 285 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_YouHaventGotAnyShards, MSGBOX_DEFAULT
# 286 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 287 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 288 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 289 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_EndTrade:: @ 8270F61
# 290 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 291 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 292 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 293 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardTradeBoard:: @ 8270F63
# 294 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard, MSGBOX_SIGN
# 295 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 296 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 297 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_Greeting: @ 8270F6C
# 298 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "I'm the Diving Treasure Hunter!\p"
# 299 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "I'm the awesome dude who makes\n"
# 300 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "deep-sea dives to gather treasures\l"
# 301 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "resting at the bottom.$"
# 302 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 303 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_HaveYouSeenAnyShards: @ 8270FE5
# 304 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Tell me, have you seen any Shards of\n"
# 305 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "tools made in ancient times?$"
# 306 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 307 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_YouHaventGotAnyShards: @ 8271027
# 308 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "You haven't got any treasures\n"
# 309 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "for me…\p"
# 310 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "If you see any Shards, like the Red\n"
# 311 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Shard, you've got to trade it with me!$"
# 312 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 313 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ThatsAShardIllTradeYou: @ 8271098
# 314 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Oh, hey! That…\n"
# 315 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "That's a Shard! I'm looking for those!\p"
# 316 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Oh, man, you've got to trade that\n"
# 317 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "with me! I'll give you something good!$"
# 318 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 319 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_WhatDoYouWantToTrade: @ 8271117
# 320 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "What do you want to trade?$"
# 321 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 322 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_YoullTradeShardForStone: @ 8271132
# 323 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "You'll trade your {STR_VAR_1} for\n"
# 324 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "my {STR_VAR_2}, then?$"
# 325 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 326 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ItsADeal: @ 8271158
# 327 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "It's a done deal!\n"
# 328 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Use that wisely!$"
# 329 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 330 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_TradeSomethingElse: @ 827117B
# 331 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Do you want to trade something else?$"
# 332 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 333 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_BagFull: @ 82711A0
# 334 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Whoops, your Bag's full.\n"
# 335 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Get rid of some items, friend!$"
# 336 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 337 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ComeBackIfYouChangeMind: @ 82711D8
# 338 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "No? That's a downer.\n"
# 339 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Well, if you change your mind, come back.$"
# 340 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 341 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard: @ 8271217
# 342 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 343 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0f}Red Shard{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x7b}Fire Stone{CLEAR_TO 0xc8}\p"
# 344 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 345 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x06}Yellow Shard{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x73}Thunderstone{CLEAR_TO 0xc8}\p"
# 346 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 347 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0c}Blue Shard{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x79}Water Stone{CLEAR_TO 0xc8}\p"
# 348 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 349 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x08}Green Shard{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x7b}Leaf Stone$"
