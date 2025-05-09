# 1 "data/maps/FortreeCity_House1/scripts.pory"

# 2 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_MapScripts:: @ 82162BA
# 3 "data/maps/FortreeCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House1/scripts.pory"

# 5 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_Trader:: @ 82162BB
# 6 "data/maps/FortreeCity_House1/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_House1/scripts.pory"
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, FortreeCity_House1_EventScript_TradeCompleted
# 9 "data/maps/FortreeCity_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_PLUSLE
# 10 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 11 "data/maps/FortreeCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 12 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 13 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_YouWillTradeWontYou, MSGBOX_YESNO
# 14 "data/maps/FortreeCity_House1/scripts.pory"
	compare VAR_RESULT, NO
# 15 "data/maps/FortreeCity_House1/scripts.pory"
	goto_if_eq FortreeCity_House1_EventScript_DeclineTrade
# 16 "data/maps/FortreeCity_House1/scripts.pory"
	special ChoosePartyMon
# 17 "data/maps/FortreeCity_House1/scripts.pory"
	waitstate
# 18 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 19 "data/maps/FortreeCity_House1/scripts.pory"
	compare VAR_0x8004, 255
# 20 "data/maps/FortreeCity_House1/scripts.pory"
	goto_if_eq FortreeCity_House1_EventScript_DeclineTrade
# 21 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 22 "data/maps/FortreeCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 23 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 24 "data/maps/FortreeCity_House1/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
# 25 "data/maps/FortreeCity_House1/scripts.pory"
	goto_if_ne FortreeCity_House1_EventScript_NotRequestedMon
# 26 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 27 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 28 "data/maps/FortreeCity_House1/scripts.pory"
	special CreateInGameTradePokemon
# 29 "data/maps/FortreeCity_House1/scripts.pory"
	special DoInGameTradeScene
# 30 "data/maps/FortreeCity_House1/scripts.pory"
	waitstate
# 31 "data/maps/FortreeCity_House1/scripts.pory"
	bufferspeciesname 0, VAR_0x8009
# 32 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_MonYouTakeCare, MSGBOX_DEFAULT
# 33 "data/maps/FortreeCity_House1/scripts.pory"
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
# 34 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 35 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 36 "data/maps/FortreeCity_House1/scripts.pory"

# 37 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_DeclineTrade:: @ 821633D
# 38 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
# 39 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 40 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 41 "data/maps/FortreeCity_House1/scripts.pory"

# 42 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_NotRequestedMon:: @ 8216347
# 43 "data/maps/FortreeCity_House1/scripts.pory"
	bufferspeciesname 0, VAR_0x8009
# 44 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
# 45 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 46 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 47 "data/maps/FortreeCity_House1/scripts.pory"

# 48 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_TradeCompleted:: @ 8216355
# 49 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_GoingToMakeVolbeatStrong, MSGBOX_DEFAULT
# 50 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 51 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 52 "data/maps/FortreeCity_House1/scripts.pory"

# 53 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_ExpertF:: @ 821635F
# 54 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_TradingMemoriesWithOthers, MSGBOX_NPC
# 55 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 56 "data/maps/FortreeCity_House1/scripts.pory"

# 57 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_Zigzagoon:: @ 8216368
# 58 "data/maps/FortreeCity_House1/scripts.pory"
	lock
# 59 "data/maps/FortreeCity_House1/scripts.pory"
	faceplayer
# 60 "data/maps/FortreeCity_House1/scripts.pory"
	waitse
# 61 "data/maps/FortreeCity_House1/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, 0
# 62 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_Zigzagoon, MSGBOX_DEFAULT
# 63 "data/maps/FortreeCity_House1/scripts.pory"
	waitmoncry
# 64 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 65 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 66 "data/maps/FortreeCity_House1/scripts.pory"

# 67 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_YouWillTradeWontYou: @ 821637B
# 68 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Wrooooaaar! I need it!\n"
# 69 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I have to get me a {STR_VAR_1}!\l"
# 70 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I'll do anything for it!\p"
# 71 "data/maps/FortreeCity_House1/scripts.pory"
	.string "…Uh… Did you hear that?\n"
# 72 "data/maps/FortreeCity_House1/scripts.pory"
	.string "My shout from the bottom of my heart?\p"
# 73 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Having heard that, you will trade\n"
# 74 "data/maps/FortreeCity_House1/scripts.pory"
	.string "your {STR_VAR_1} for my {STR_VAR_2},\l"
# 75 "data/maps/FortreeCity_House1/scripts.pory"
	.string "won't you?$"
# 76 "data/maps/FortreeCity_House1/scripts.pory"

# 77 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_MonYouTakeCare: @ 8216440
# 78 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Oh, yeah, right on!\p"
# 79 "data/maps/FortreeCity_House1/scripts.pory"
	.string "{STR_VAR_1}, welcome!\n"
# 80 "data/maps/FortreeCity_House1/scripts.pory"
	.string "{STR_VAR_2}, you take care!$"
# 81 "data/maps/FortreeCity_House1/scripts.pory"

# 82 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_ThisIsntAMon: @ 8216474
# 83 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Uh, no, I don't think so.\n"
# 84 "data/maps/FortreeCity_House1/scripts.pory"
	.string "That isn't a {STR_VAR_1}.$"
# 85 "data/maps/FortreeCity_House1/scripts.pory"

# 86 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_YouWontTradeMe: @ 821649F
# 87 "data/maps/FortreeCity_House1/scripts.pory"
	.string "No? You won't trade me?\n"
# 88 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Even after I bared my heart to you?$"
# 89 "data/maps/FortreeCity_House1/scripts.pory"

# 90 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_GoingToMakeVolbeatStrong: @ 82164DB
# 91 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I'm going to make Volbeat super\n"
# 92 "data/maps/FortreeCity_House1/scripts.pory"
	.string "strong from this moment on!\p"
# 93 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I hope you do the same with Plusle!$"
# 94 "data/maps/FortreeCity_House1/scripts.pory"

# 95 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_TradingMemoriesWithOthers: @ 821653B
# 96 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Trading Pokémon with others…\p"
# 97 "data/maps/FortreeCity_House1/scripts.pory"
	.string "It's as if you're trading your own\n"
# 98 "data/maps/FortreeCity_House1/scripts.pory"
	.string "memories with other people.$"
# 99 "data/maps/FortreeCity_House1/scripts.pory"

# 100 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_Zigzagoon: @ 8216597
# 101 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Dusknoir: Gumomoh?$"
