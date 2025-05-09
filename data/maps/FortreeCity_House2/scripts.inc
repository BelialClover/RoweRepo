# 1 "data/maps/FortreeCity_House2/scripts.pory"

# 2 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_MapScripts:: @ 82177CA
# 3 "data/maps/FortreeCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House2/scripts.pory"

# 5 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver:: @ 82177CB
# 6 "data/maps/FortreeCity_House2/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_House2/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM10, FortreeCity_House2_EventScript_ExplainHiddenPower
# 9 "data/maps/FortreeCity_House2/scripts.pory"
	call_if_unset FLAG_MET_HIDDEN_POWER_GIVER, FortreeCity_House2_EventScript_Greeting
# 10 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CoinInWhichHand, MSGBOX_DEFAULT
# 11 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, 1
# 12 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/FortreeCity_House2/scripts.pory"
	case 1, FortreeCity_House2_EventScript_WrongGuess
# 14 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand, MSGBOX_DEFAULT
# 15 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, 1
# 16 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/FortreeCity_House2/scripts.pory"
	case 1, FortreeCity_House2_EventScript_WrongGuess
# 18 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand2, MSGBOX_DEFAULT
# 19 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, 1
# 20 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/FortreeCity_House2/scripts.pory"
	case 0, FortreeCity_House2_EventScript_WrongGuess
# 22 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_YourHiddenPowerHasAwoken, MSGBOX_DEFAULT
# 23 "data/maps/FortreeCity_House2/scripts.pory"
	giveitem ITEM_TM10
# 24 "data/maps/FortreeCity_House2/scripts.pory"
	compare VAR_RESULT, 0
# 25 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 26 "data/maps/FortreeCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_TM10
# 27 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
# 28 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 29 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 30 "data/maps/FortreeCity_House2/scripts.pory"

# 31 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_Greeting:: @ 8217862
# 32 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_HiddenPowersArousedByNature, MSGBOX_DEFAULT
# 33 "data/maps/FortreeCity_House2/scripts.pory"
	setflag FLAG_MET_HIDDEN_POWER_GIVER
# 34 "data/maps/FortreeCity_House2/scripts.pory"
	return
# 35 "data/maps/FortreeCity_House2/scripts.pory"

# 36 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_ExplainHiddenPower:: @ 821786E
# 37 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
# 38 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 39 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 40 "data/maps/FortreeCity_House2/scripts.pory"

# 41 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_WrongGuess:: @ 8217878
# 42 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_YouGuessedWrong, MSGBOX_DEFAULT
# 43 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 44 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 45 "data/maps/FortreeCity_House2/scripts.pory"

# 46 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_HiddenPowersArousedByNature: @ 8217882
# 47 "data/maps/FortreeCity_House2/scripts.pory"
	.string "People… Pokémon…\p"
# 48 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Their hidden powers are aroused by\n"
# 49 "data/maps/FortreeCity_House2/scripts.pory"
	.string "living in natural environments…$"
# 50 "data/maps/FortreeCity_House2/scripts.pory"

# 51 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CoinInWhichHand: @ 82178D6
# 52 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Let this old woman see if your hidden\n"
# 53 "data/maps/FortreeCity_House2/scripts.pory"
	.string "power has awoken…\p"
# 54 "data/maps/FortreeCity_House2/scripts.pory"
	.string "I hold a coin in my hand.\p"
# 55 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Now, tell me, have I palmed it in\n"
# 56 "data/maps/FortreeCity_House2/scripts.pory"
	.string "the right hand? Or in the left?$"
# 57 "data/maps/FortreeCity_House2/scripts.pory"

# 58 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CorrectTryAgainWhichHand: @ 821796A
# 59 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Yes, correct!\p"
# 60 "data/maps/FortreeCity_House2/scripts.pory"
	.string "We shall try again.\p"
# 61 "data/maps/FortreeCity_House2/scripts.pory"
	.string "In which hand have I palmed the coin?\n"
# 62 "data/maps/FortreeCity_House2/scripts.pory"
	.string "The right or left?$"
# 63 "data/maps/FortreeCity_House2/scripts.pory"

# 64 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CorrectTryAgainWhichHand2: @ 82179C9
# 65 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Yes, correct!\p"
# 66 "data/maps/FortreeCity_House2/scripts.pory"
	.string "We shall try again.\p"
# 67 "data/maps/FortreeCity_House2/scripts.pory"
	.string "In which hand have I palmed the coin?\n"
# 68 "data/maps/FortreeCity_House2/scripts.pory"
	.string "The right or left?$"
# 69 "data/maps/FortreeCity_House2/scripts.pory"

# 70 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_YourHiddenPowerHasAwoken: @ 8217A28
# 71 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Splendid!\n"
# 72 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Your hidden power has awoken!\p"
# 73 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Here, take this and awaken the hidden\n"
# 74 "data/maps/FortreeCity_House2/scripts.pory"
	.string "power of your Pokémon.$"
# 75 "data/maps/FortreeCity_House2/scripts.pory"

# 76 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_ExplainHiddenPower: @ 8217A91
# 77 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Hidden Power is a move that changes\n"
# 78 "data/maps/FortreeCity_House2/scripts.pory"
	.string "with the Pokémon.$"
# 79 "data/maps/FortreeCity_House2/scripts.pory"

# 80 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_YouGuessedWrong: @ 8217AC7
# 81 "data/maps/FortreeCity_House2/scripts.pory"
	.string "No, too bad.\n"
# 82 "data/maps/FortreeCity_House2/scripts.pory"
	.string "You guessed wrong.$"
