# 1 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 2 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_MapScripts:: @ 820FBB8
# 3 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 5 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    @ Game Corner prices
# 6 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM32_COINS,  1500
# 7 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM29_COINS,  3500
# 8 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM35_COINS,  4000
# 9 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM24_COINS,  4000
# 10 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM13_COINS,  4000
# 11 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set DOLL_COINS,  1000
# 12 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 13 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_50,  1000
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_500, 10000
# 15 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 16 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CoinsClerk:: @ 820FBB9
# 17 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 18 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 19 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 20 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 21 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 22 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NeedCoinCase
# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 24 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0, 0
# 26 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 27 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50
# 28 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 29 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50:: @ 820FBE5
# 30 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, 0
# 31 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 33 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 36 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 38 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500:: @ 820FC0C
# 39 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, 0
# 40 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 41 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 42 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 43 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 44 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy50Coins:: @ 820FC33
# 47 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 48 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_1, (MAX_COINS + 1 - 50)
# 49 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 50 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_50, 0
# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 52 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 53 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 50
# 54 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_50, 0
# 55 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox 0, 0
# 56 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 57 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 58 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 59 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 60 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 61 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 62 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 63 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 64 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy500Coins:: @ 820FC75
# 65 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 66 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_1, (MAX_COINS + 1 - 500)
# 67 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 68 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_500, 0
# 69 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 70 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 71 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 500
# 72 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_500, 0
# 73 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox 0, 0
# 74 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 75 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 76 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 77 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 78 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 79 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 80 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 81 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 82 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NeedCoinCase:: @ 820FCB7
# 83 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
# 84 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 85 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 86 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 87 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughMoney:: @ 820FCC1
# 88 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
# 89 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 92 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 93 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 94 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelBuyCoins:: @ 820FCD1
# 95 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 96 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 97 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 98 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 100 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForCoins:: @ 820FCE1
# 102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
# 103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 107 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls:: @ 820FCF1
# 109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage:: @ 820FD0D
# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize:: @ 820FD20
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 129 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize:: @ 820FD2B
# 131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_DOLLS, 0
# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TreeckoDoll
# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TorchicDoll
# 135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_MudkipDoll
# 136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TreeckoDoll:: @ 820FD67
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname 0, DECOR_TREECKO_DOLL
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TorchicDoll:: @ 820FD75
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname 0, DECOR_TORCHIC_DOLL
# 148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 149 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_MudkipDoll:: @ 820FD83
# 151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname 0, DECOR_MUDKIP_DOLL
# 153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize:: @ 820FD91
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
# 157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
# 158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll
# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTorchicDoll
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyMudkipDoll
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 164 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll:: @ 820FDCB
# 166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, DOLL_COINS
# 168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname 1, DECOR_TREECKO_DOLL
# 170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TREECKO_DOLL
# 175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll:: @ 820FE05
# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, DOLL_COINS
# 184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname 1, DECOR_TORCHIC_DOLL
# 186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TORCHIC_DOLL
# 191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 196 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll:: @ 820FE3F
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, DOLL_COINS
# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname 1, DECOR_MUDKIP_DOLL
# 202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_MUDKIP_DOLL
# 207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 212 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll:: @ 820FE79
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 217 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForDoll:: @ 820FE87
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 222 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelDollSelect:: @ 820FE92
# 224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 228 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs:: @ 820FE9F
# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 238 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage:: @ 820FEBB
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize:: @ 820FECE
# 247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 250 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize:: @ 820FED9
# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_TMS, 0
# 253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TM32
# 255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TM29
# 256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_TM35
# 257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_TM24
# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_TM13
# 259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 262 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM32:: @ 820FF2B
# 264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname 0, ITEM_TM32
# 266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM32
# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM29:: @ 820FF3E
# 270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname 0, ITEM_TM29
# 272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM29
# 273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 274 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM35:: @ 820FF51
# 276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname 0, ITEM_TM35
# 278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM35
# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM24:: @ 820FF64
# 282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname 0, ITEM_TM24
# 284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM24
# 285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 286 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM13:: @ 820FF77
# 288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname 0, ITEM_TM13
# 290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM13
# 291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 292 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize:: @ 820FF8A
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTM32
# 300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTM29
# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyTM35
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyTM24
# 303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyTM13
# 304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 305 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM32:: @ 820FFDD
# 307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM32_COINS
# 309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM32, 1
# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM32_COINS
# 314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM32
# 315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM29:: @ 8210017
# 322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM29_COINS
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM29, 1
# 326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM29_COINS
# 329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM29
# 330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 335 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM35:: @ 8210051
# 337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM35_COINS
# 339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM35, 1
# 341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM35_COINS
# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM35
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM24:: @ 821008B
# 352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM24_COINS
# 354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM24, 1
# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM24_COINS
# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM24
# 360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 365 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM13:: @ 82100C5
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM13_COINS
# 369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM13, 1
# 371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM13_COINS
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM13
# 375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 380 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM:: @ 82100FF
# 382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForTM:: @ 821010D
# 387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 390 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelTMSelect:: @ 8210118
# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 396 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman2:: @ 8210125
# 398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
# 399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 400 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gentleman:: @ 821012E
# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 404 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl:: @ 8210137
# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
# 411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
# 412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_STARTER_MON
# 413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll
# 414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_GiveTorchicDoll
# 415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_GiveMudkipDoll
# 416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 417 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll:: @ 821017C
# 419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname 1, DECOR_TREECKO_DOLL
# 420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TREECKO_DOLL
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 428 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTorchicDoll:: @ 82101A6
# 430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname 1, DECOR_TORCHIC_DOLL
# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TORCHIC_DOLL
# 436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveMudkipDoll:: @ 82101D0
# 441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname 1, DECOR_MUDKIP_DOLL
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_MUDKIP_DOLL
# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll:: @ 82101FA
# 452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
# 454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DeclineStarterDoll:: @ 8210209
# 458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
# 459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 461 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll:: @ 8210213
# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
# 464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 466 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanM:: @ 821021D
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_TryGive20Coins
# 473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
# 474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 476 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TryGive20Coins:: @ 821023D
# 478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_1, 1  @ Only give 20 coins if player has no coins
# 481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 488 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanMNormal:: @ 821026B
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 493 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_OldMan:: @ 8210279
# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 500 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Cook:: @ 8210289
# 502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 507 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Man:: @ 8210299
# 509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 514 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NPCReturnToSlots:: @ 82102A9
# 516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Maniac:: @ 82102B6
# 523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 528 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman:: @ 82102C6
# 530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 535 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine0:: @ 82102D6
# 537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoCoinCase
# 541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine1:: @ 82102F6
# 548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoCoinCase
# 552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 557 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine2:: @ 8210316
# 559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoCoinCase
# 563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 568 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine3:: @ 8210336
# 570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoCoinCase
# 574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 579 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine4:: @ 8210356
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoCoinCase
# 585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 590 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine5:: @ 8210376
# 592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoCoinCase
# 596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 601 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine6:: @ 8210396
# 603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoCoinCase
# 607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 612 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine7:: @ 82103B6
# 614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoCoinCase
# 618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 623 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine8:: @ 82103D6
# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoCoinCase
# 629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 634 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine9:: @ 82103F6
# 636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoCoinCase
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 645 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine10:: @ 8210416
# 647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoCoinCase
# 651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 656 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine11:: @ 8210436
# 658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_NoCoinCase
# 662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 667 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase:: @ 8210456
# 669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
# 670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gachamon_PC:
# 674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Gachamon_PC, MSGBOX_DEFAULT
# 675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Gachamon_2
# 676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 677 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Gachamon_Introduction:
# 679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Do you want to trade 500 coins\n"
# 680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "for a random Pokémon?$"
# 681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Gachamon_PC:
# 683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The Pokémon was sent to\n"
# 684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "your PC$"
# 685 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner: @ 8210460
# 687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is Mauville Game Corner.$"
# 688 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins: @ 821047E
# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, you wanted some Coins for\n"
# 691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the games?\p"
# 692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But you don't have a Coin Case for\n"
# 693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "stowing the Coins.$"
# 694 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WereYouLookingForCoins: @ 82104DF
# 696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for Coins?\p"
# 697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ¥1000 for 50 Coins.\n"
# 698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like some?$"
# 699 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins: @ 8210529
# 701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
# 702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here are your Coins!$"
# 703 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontHaveEnoughMoney: @ 8210553
# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Um… You don't appear to have\n"
# 706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "enough money…$"
# 707 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinCaseIsFull: @ 821057E
# 709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
# 710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Your Coin Case is full.$"
# 711 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontNeedCoinsThen: @ 821059A
# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need Coins, then?\n"
# 714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Good luck on your adventure!$"
# 715 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes: @ 82105D7
# 717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can exchange your Coins for\n"
# 719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "prizes here.$"
# 720 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WhichPrize: @ 821060D
# 722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"
# 723 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX: @ 8210629
# 725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
# 726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the {STR_VAR_1} {STR_VAR_2}?$"
# 727 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SendToYourHomePC: @ 8210646
# 729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\n"
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We'll send it to your PC at home.$"
# 731 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NotEnoughCoins: @ 8210673
# 733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough Coins.$"
# 734 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor: @ 8210690
# 737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
# 738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "placing {STR_VAR_1}.$"
# 739 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_OhIsThatSo: @ 82106BF
# 741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
# 742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to save some Coins before\l"
# 743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "coming back here.$"
# 744 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsX: @ 8210705
# 746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"
# 747 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo: @ 821071B
# 749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 750 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantCarryAnyMore: @ 8210728
# 753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"
# 754 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne: @ 8210750
# 756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I made a mistake and got two of\n"
# 757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the same Dolls.\p"
# 758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like one of them?$"
# 759 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo2: @ 821079C
# 761 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 762 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_YouWantItButNotNow: @ 82107A9
# 764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh?\n"
# 765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want it, but not right now?$"
# 766 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontBeNegative: @ 82107CE
# 768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, don't be so negative!\n"
# 769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can have this!$"
# 770 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantWinJackpot: @ 82107FB
# 772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There's a prize I want, but I can't win\n"
# 773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the jackpot.$"
# 774 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor: @ 8210830
# 776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
# 777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "you need a Coin Case.\p"
# 778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I think the young lady next door\n"
# 779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "had one. Go see her!$"
# 780 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins: @ 82108A0
# 782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "My luck can only last so long.\n"
# 783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is too much for me.\l"
# 784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here, take some Coins!$"
# 785 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 786 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone: @ 82108EF
# 787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mauville has something for\n"
# 788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "everyone.\p"
# 789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "For me, it's the Game Corner.$"
# 790 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates: @ 8210932
# 792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The Roulette tables have different\n"
# 793 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rates.\p"
# 794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Check your Coins if you're going to\n"
# 795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick a table.$"
# 796 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime: @ 821098E
# 798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
# 799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I should get back to work.$"
# 800 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 801 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay: @ 82109D3
# 802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Coins are needed to play here\n"
# 803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in the Game Corner.$"
# 804 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteOnlyLuck: @ 8210A05
# 806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This Roulette thing…\n"
# 807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's rather demanding.\p"
# 808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Win or lose, it's only by luck.$"
# 809 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 810 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed: @ 8210A51
# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three Coins can be used to play\n"
# 812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the Slots.$"
# 813 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DifficultToStopOn7: @ 8210A82
# 815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
# 816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "right on “7.”\p"
# 817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "If it stops on “7” during the Reel Time\n"
# 818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonus game, you'll receive extra Coins.$"
# 819 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo: @ 8210B04
# 821 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here's some information for you\n"
# 822 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "about the Slots.\p"
# 823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The more lightning bolts you stock,\n"
# 824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the more Reel Time chances you get.\p"
# 825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "In a game with the maximum five\n"
# 826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Reel Time chances…\p"
# 827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It is possible to receive four regular\n"
# 828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonuses, then a big bonus.\p"
# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "That would total 660 Coins, but it's\n"
# 830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "very difficult to get.$"
# 831 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase: @ 8210C2E
# 833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a Coin Case.$"

MauvilleCity_GameCorner_EventScript_Gachamon::
# 839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 840 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Gachamon_Text_0, MSGBOX_YESNO
# 843 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_Gachamon_2
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, 500
	goto_if_lt MauvilleCity_GameCorner_EventScript_Gachamon_5
# 853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Gachamon_Text_2, MSGBOX_DEFAULT
# 855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_NONE, 1, ITEM_NONE
# 856 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 857 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Gachamon_Text_3, MSGBOX_DEFAULT
# 858 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitfanfare
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
# 860 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_Gachamon_8
# 865 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_GameCorner_EventScript_Gachamon_9
# 872 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
MauvilleCity_GameCorner_EventScript_Gachamon_1:
# 876 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end

MauvilleCity_GameCorner_EventScript_Gachamon_2:
# 844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Gachamon_Text_1, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_Gachamon_1

MauvilleCity_GameCorner_EventScript_Gachamon_5:
# 850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_Gachamon_1

MauvilleCity_GameCorner_EventScript_Gachamon_8:
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 862 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 863 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
	goto MauvilleCity_GameCorner_EventScript_Gachamon_1

MauvilleCity_GameCorner_EventScript_Gachamon_9:
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Gachamon_PC
# 867 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 869 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
	goto MauvilleCity_GameCorner_EventScript_Gachamon_1


MauvilleCity_GameCorner_EventScript_Gachamon_Text_0:
# 842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Do you want to trade 500 coins for a\n"
	.string "random Pokémon?$"

MauvilleCity_GameCorner_EventScript_Gachamon_Text_1:
# 845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Please come again$"

MauvilleCity_GameCorner_EventScript_Gachamon_Text_2:
# 854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"

MauvilleCity_GameCorner_EventScript_Gachamon_Text_3:
# 857 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "{PLAYER} received a {STR_VAR_1}!$"
