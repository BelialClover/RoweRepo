# 1 "data/maps/MauvilleCity_House2/scripts.pory"

# 2 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_MapScripts:: @ 8210C5C
# 3 "data/maps/MauvilleCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_House2/scripts.pory"

# 5 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_Woman:: @ 8210C5D
# 6 "data/maps/MauvilleCity_House2/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_House2/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_COIN_CASE, MauvilleCity_House2_EventScript_ReceivedCoinCase
# 9 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_BuyHarborMailAtSlateport, MSGBOX_DEFAULT
# 10 "data/maps/MauvilleCity_House2/scripts.pory"
	checkitem ITEM_HARBOR_MAIL, 1
# 11 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, TRUE
# 12 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_eq MauvilleCity_House2_EventScript_AskToTradeForHarborMail
# 13 "data/maps/MauvilleCity_House2/scripts.pory"
	release
# 14 "data/maps/MauvilleCity_House2/scripts.pory"
	end
# 15 "data/maps/MauvilleCity_House2/scripts.pory"

# 16 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_AskToTradeForHarborMail:: @ 8210C82
# 17 "data/maps/MauvilleCity_House2/scripts.pory"
	playse SE_PIN
# 18 "data/maps/MauvilleCity_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 19 "data/maps/MauvilleCity_House2/scripts.pory"
	waitmovement 0
# 20 "data/maps/MauvilleCity_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 21 "data/maps/MauvilleCity_House2/scripts.pory"
	waitmovement 0
# 22 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_TradeHarborMailForCoinCase, MSGBOX_YESNO
# 23 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, YES
# 24 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_eq MauvilleCity_House2_EventScript_AcceptTrade
# 25 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, NO
# 26 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_eq MauvilleCity_House2_EventScript_DeclineTrade
# 27 "data/maps/MauvilleCity_House2/scripts.pory"
	end
# 28 "data/maps/MauvilleCity_House2/scripts.pory"

# 29 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_AcceptTrade:: @ 8210CB8
# 30 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_IllTradeYouCoinCase, MSGBOX_DEFAULT
# 31 "data/maps/MauvilleCity_House2/scripts.pory"
	removeitem ITEM_HARBOR_MAIL
# 32 "data/maps/MauvilleCity_House2/scripts.pory"
	giveitem ITEM_COIN_CASE
# 33 "data/maps/MauvilleCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_COIN_CASE
# 34 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_ReceivedCoinCase
# 35 "data/maps/MauvilleCity_House2/scripts.pory"
	end
# 36 "data/maps/MauvilleCity_House2/scripts.pory"

# 37 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_ReceivedCoinCase:: @ 8210CDA
# 38 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_UseCoinCaseAtGameCorner, MSGBOX_DEFAULT
# 39 "data/maps/MauvilleCity_House2/scripts.pory"
	release
# 40 "data/maps/MauvilleCity_House2/scripts.pory"
	end
# 41 "data/maps/MauvilleCity_House2/scripts.pory"

# 42 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_DeclineTrade:: @ 8210CE4
# 43 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_ThatsDisappointing, MSGBOX_DEFAULT
# 44 "data/maps/MauvilleCity_House2/scripts.pory"
	release
# 45 "data/maps/MauvilleCity_House2/scripts.pory"
	end
# 46 "data/maps/MauvilleCity_House2/scripts.pory"

# 47 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_Text_BuyHarborMailAtSlateport: @ 8210CEE
# 48 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "If I had a Bike, it'd be easy to cycle to\n"
# 49 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Slateport for some shopping.\p"
# 50 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "I'd be able to buy Harbor Mail at the\n"
# 51 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Pokémon Mart in Slateport…$"
# 52 "data/maps/MauvilleCity_House2/scripts.pory"

# 53 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_Text_TradeHarborMailForCoinCase: @ 8210D76
# 54 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Oh! You have Harbor Mail?\n"
# 55 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Will you trade it for a Coin Case?$"
# 56 "data/maps/MauvilleCity_House2/scripts.pory"

# 57 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_Text_IllTradeYouCoinCase: @ 8210DB3
# 58 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Oh, I'm so happy!\n"
# 59 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Okay, I'll trade you a Coin Case!$"
# 60 "data/maps/MauvilleCity_House2/scripts.pory"

# 61 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_Text_UseCoinCaseAtGameCorner: @ 8210DE7
# 62 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "That Coin Case can be used\n"
# 63 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "at the Game Corner.$"
# 64 "data/maps/MauvilleCity_House2/scripts.pory"

# 65 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_Text_ThatsDisappointing: @ 8210E16
# 66 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Oh, that's disappointing.\p"
# 67 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "A Coin Case is needed for the\n"
# 68 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Game Corner.$"
