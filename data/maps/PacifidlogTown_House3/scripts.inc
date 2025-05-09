# 1 "data/maps/PacifidlogTown_House3/scripts.pory"

# 2 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_MapScripts:: @ 8203C10
# 3 "data/maps/PacifidlogTown_House3/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House3/scripts.pory"

# 5 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Trader:: @ 8203C11
# 6 "data/maps/PacifidlogTown_House3/scripts.pory"
	lock
# 7 "data/maps/PacifidlogTown_House3/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PacifidlogTown_House3_EventScript_TradeCompleted
# 9 "data/maps/PacifidlogTown_House3/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HORSEA
# 10 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 11 "data/maps/PacifidlogTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 12 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 13 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WillingToTradeIt, MSGBOX_YESNO
# 14 "data/maps/PacifidlogTown_House3/scripts.pory"
	compare VAR_RESULT, NO
# 15 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_eq PacifidlogTown_House3_EventScript_DeclineTrade
# 16 "data/maps/PacifidlogTown_House3/scripts.pory"
	special ChoosePartyMon
# 17 "data/maps/PacifidlogTown_House3/scripts.pory"
	waitstate
# 18 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 19 "data/maps/PacifidlogTown_House3/scripts.pory"
	compare VAR_0x8004, 255
# 20 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_eq PacifidlogTown_House3_EventScript_DeclineTrade
# 21 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 22 "data/maps/PacifidlogTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 23 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 24 "data/maps/PacifidlogTown_House3/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
# 25 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_ne PacifidlogTown_House3_EventScript_NotRequestedMon
# 26 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 27 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 28 "data/maps/PacifidlogTown_House3/scripts.pory"
	special CreateInGameTradePokemon
# 29 "data/maps/PacifidlogTown_House3/scripts.pory"
	special DoInGameTradeScene
# 30 "data/maps/PacifidlogTown_House3/scripts.pory"
	waitstate
# 31 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname 0, VAR_0x8009
# 32 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou, MSGBOX_DEFAULT
# 33 "data/maps/PacifidlogTown_House3/scripts.pory"
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
# 34 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 35 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 36 "data/maps/PacifidlogTown_House3/scripts.pory"

# 37 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_DeclineTrade:: @ 8203C93
# 38 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_NotDesperateOrAnything, MSGBOX_DEFAULT
# 39 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 40 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 41 "data/maps/PacifidlogTown_House3/scripts.pory"

# 42 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_NotRequestedMon:: @ 8203C9D
# 43 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname 0, VAR_0x8009
# 44 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon, MSGBOX_DEFAULT
# 45 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 46 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 47 "data/maps/PacifidlogTown_House3/scripts.pory"

# 48 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_TradeCompleted:: @ 8203CAB
# 49 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ReallyWantedToGetBagon, MSGBOX_DEFAULT
# 50 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 51 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 52 "data/maps/PacifidlogTown_House3/scripts.pory"

# 53 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Girl:: @ 8203CB5
# 54 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_IsThatAPokedex, MSGBOX_NPC
# 55 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 56 "data/maps/PacifidlogTown_House3/scripts.pory"

# 57 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WillingToTradeIt: @ 8203CBE
# 58 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Check out this {STR_VAR_2}!\p"
# 59 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "It's the {STR_VAR_2} that I caught\n"
# 60 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "yesterday to celebrate my birthday!\p"
# 61 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, I can see that you want it!\n"
# 62 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "After all, it's priceless!\p"
# 63 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I'll tell you what. I might be willing\n"
# 64 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "to trade it for a {STR_VAR_1}.$"
# 65 "data/maps/PacifidlogTown_House3/scripts.pory"

# 66 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou: @ 8203D87
# 67 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, so this is a {STR_VAR_1}?\p"
# 68 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "It's sort of like a {STR_VAR_2},\n"
# 69 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "and yet it's subtly different.\p"
# 70 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Thank you!$"
# 71 "data/maps/PacifidlogTown_House3/scripts.pory"

# 72 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon: @ 8203DDE
# 73 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "No, no, no! I won't accept any\n"
# 74 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "less than a real {STR_VAR_1}!$"
# 75 "data/maps/PacifidlogTown_House3/scripts.pory"

# 76 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_NotDesperateOrAnything: @ 8203E12
# 77 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, so you're not going to go through\n"
# 78 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "with this?\p"
# 79 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "That's cool. I'm not desperate to make\n"
# 80 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "a trade or anything.$"
# 81 "data/maps/PacifidlogTown_House3/scripts.pory"

# 82 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ReallyWantedToGetBagon: @ 8203E7F
# 83 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I know I could go looking for one\n"
# 84 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "on my own, but…\p"
# 85 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "But I really wanted to get a Bagon\n"
# 86 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "that another Trainer caught…$"
# 87 "data/maps/PacifidlogTown_House3/scripts.pory"

# 88 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_IsThatAPokedex: @ 8203EF1
# 89 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Is that a Pokédex?\p"
# 90 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Did you get to meet a lot of different\n"
# 91 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Pokémon?\p"
# 92 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I wish I was like you.$"
