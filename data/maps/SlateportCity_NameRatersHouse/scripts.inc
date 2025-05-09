# 1 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 2 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_MapScripts:: @ 8209AA4
# 3 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 5 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater:: @ 8209AA5
# 6 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_set FLAG_DOUBLE_BATTLE_MODE, SlateportCity_NameRatersHouse_EventScript_NameRater_Disabled
# 9 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitmessage
# 10 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_YESNO
# 11 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, YES
# 12 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_NameRater_DoubleBattleMode_was_Enabled
# 13 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_DEFAULT
# 14 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 15 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 16 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	
# 17 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater_DoubleBattleMode_was_Enabled:: @ 8209AC6
# 18 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	playfanfare SE_SAVE
# 19 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Double_Battle_was_Enabled, MSGBOX_DEFAULT
# 20 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitfanfare
# 21 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	setflag FLAG_DOUBLE_BATTLE_MODE
# 22 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_DEFAULT
# 23 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 24 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 25 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	
# 26 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater_Disabled:: @ 8209AC6
# 27 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname_Disable, MSGBOX_YESNO
# 28 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, YES
# 29 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_NameRater_DoubleBattleMode_was_Disabled
# 30 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_DEFAULT
# 31 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 32 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 33 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	
# 34 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater_DoubleBattleMode_was_Disabled:: @ 8209AC6
# 35 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	playfanfare SE_BOO
# 36 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Double_Battle_was_Disabled, MSGBOX_DEFAULT
# 37 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitfanfare
# 38 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	clearflag FLAG_DOUBLE_BATTLE_MODE
# 39 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_DEFAULT
# 40 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 41 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 42 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 43 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate:: @ 8209AC6
# 44 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
# 45 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 46 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 47 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 48 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_DeclineNameRate:: @ 8209AE9
# 49 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
# 50 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 51 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 52 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 53 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname:: @ 8209AF3
# 54 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 55 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
# 56 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_CantRateEgg
# 57 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 58 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special IsMonOTIDNotPlayers
# 59 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 60 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 61 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 62 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 63 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 64 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 65 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
# 66 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, YES
# 67 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_ChangeNickname
# 68 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, NO
# 69 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 70 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 71 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 72 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_CantRateEgg:: @ 8209B46
# 73 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
# 74 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 75 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 76 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 77 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT:: @ 8209B50
# 78 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
# 79 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 80 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 81 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 82 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChangeNickname:: @ 8209B5A
# 83 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
# 84 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 85 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 86 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 87 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 88 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_NewNameDifferent
# 89 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
# 90 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 91 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 92 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 93 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NewNameDifferent:: @ 8209B84
# 94 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
# 95 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 96 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 97 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 98 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_TradebackGuy_V1::
# 99 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	lock
# 100 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	faceplayer
# 101 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_TradebackGuy_Text_IllTradeIfYouWant, MSGBOX_YESNO
# 102 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, NO
# 103 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_TradebackGuy_DeclineTrade
# 104 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special ChoosePartyMon
# 105 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 106 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_0x8004, 255
# 107 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_TradebackGuy_DeclineTrade
# 108 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 109 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	setvar VAR_0x8004, 6
# 110 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special CreateInGameTradePokemon
# 111 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special DoInGameTradeScene
# 112 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 113 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_TradebackGuy_Text_ComeBack, MSGBOX_DEFAULT
# 114 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 115 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 116 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 117 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_TradebackGuy_V2::
# 118 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	lock
# 119 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	faceplayer
# 120 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_TradebackGuy_Text_IllTradeIfYouWant, MSGBOX_YESNO
# 121 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, NO
# 122 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_TradebackGuy_DeclineTrade
# 123 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special ChoosePartyMon
# 124 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 125 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_0x8004, 255
# 126 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_TradebackGuy_DeclineTrade
# 127 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 128 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	setvar VAR_0x8004, 7
# 129 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special CreateInGameTradePokemon
# 130 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special DoInGameTradeScene
# 131 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 132 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	setvar VAR_0x8004, 8
# 133 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special CreateInGameTradePokemon
# 134 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special DoInGameTradeScene
# 135 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 136 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_TradebackGuy_Text_ComeBack, MSGBOX_DEFAULT
# 137 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 138 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 139 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 140 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_TradebackGuy_DeclineTrade::
# 141 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_TradebackGuy_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 142 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 143 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 144 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 145 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_TradebackGuy_Text_IllTradeIfYouWant:
# 146 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hi! I'm the Tradeback Guy!\p"
# 147 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "If you have a Pokémon that only\n"
# 148 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "evolves through trading, then I\l"
# 149 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "can help you out!\p"
# 150 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Do you have any Pokémon that you'd\n"
# 151 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "like to evolve?$"
# 152 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 153 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_TradebackGuy_Text_ComeBack:
# 154 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Come back anytime!$"
# 155 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 156 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_TradebackGuy_Text_YouDontWantToThatsOkay:
# 157 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Alright. Well, if you change\n"
# 158 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "your mind, I'll be here.$"
# 159 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 160 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname:
# 161 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hi, hi! I'm the Name Rater!\p"
# 162 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "…Or rather, I used to be.\p"
# 163 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Now you can rate nicknames in\n"
# 164 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "every Pokémon Center…\p"
# 165 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "But now I can enable Double\n"
# 166 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Battle mode, how about it?.$"
# 167 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	
# 168 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname_Disable:
# 169 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hi, hi! I'm the Name Rater!\p"
# 170 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "…Or rather, I used to be.\p"
# 171 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Now you can rate nicknames in\n"
# 172 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "every Pokémon Center…\p"
# 173 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "But now I can disable Double\n"
# 174 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Battle mode, how about it?.$"
# 175 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 176 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname: @ 8209BFF
# 177 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Talk to me to enable it\n"
# 178 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "anytime.$"
# 179 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 180 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne: @ 8209C2B
# 181 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Come back if you need anything!$"
# 182 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 183 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe: @ 8209CA4
# 184 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Ah, good. Then, what shall the new\n"
# 185 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "nickname be?$"
# 186 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 187 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName: @ 8209CD4
# 188 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this Pokémon\n"
# 189 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 190 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It is a better name than before!\n"
# 191 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "How fortunate for you!$"
# 192 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 193 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_DoVisitAgain: @ 8209D42
# 194 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I see.\n"
# 195 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Do come visit again.$"
# 196 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 197 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior: @ 8209D5E
# 198 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this Pokémon\n"
# 199 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 200 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It looks no different from before,\n"
# 201 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "and yet, this is vastly superior!\p"
# 202 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "How fortunate for you!$"
# 203 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 204 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_MagnificentName: @ 8209DF0
# 205 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1} it is!\p"
# 206 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "This is a magnificent nickname!\n"
# 207 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It is impeccably beyond reproach!\p"
# 208 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "You'll do well to cherish your\n"
# 209 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "{STR_VAR_1} now and beyond.$"
# 210 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 211 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg: @ 8209E74
# 212 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Now, now.\n"
# 213 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "That is merely an Egg!$"
