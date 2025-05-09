# 1 "data/maps/PacifidlogTown_House2/scripts.pory"

# 2 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_MapScripts:: @ 8203791
# 3 "data/maps/PacifidlogTown_House2/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House2/scripts.pory"

# 5 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother:: @ 8203792
# 6 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 7 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House2/scripts.pory"
	call_if_set FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_MonAssessment
# 9 "data/maps/PacifidlogTown_House2/scripts.pory"
	call_if_unset FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_FirstMonAssessment
# 10 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_MET_FANCLUB_YOUNGER_BROTHER
# 11 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 12 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, 4
# 13 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_ge PacifidlogTown_House2_EventScript_GiveReturn
# 14 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 15 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, 2
# 16 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_ge PacifidlogTown_House2_EventScript_PutInEffort
# 17 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_GiveFrustration
# 18 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 19 "data/maps/PacifidlogTown_House2/scripts.pory"

# 20 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_MonAssessment:: @ 82037F8
# 21 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
# 22 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 23 "data/maps/PacifidlogTown_House2/scripts.pory"

# 24 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FirstMonAssessment:: @ 8203801
# 25 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation, MSGBOX_DEFAULT
# 26 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
# 27 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 28 "data/maps/PacifidlogTown_House2/scripts.pory"

# 29 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_GiveReturn:: @ 8203816
# 30 "data/maps/PacifidlogTown_House2/scripts.pory"
	call_if_set FLAG_RECEIVED_FANCLUB_TM_RETURN, PacifidlogTown_House2_EventScript_Adoring
# 31 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AdoringPokemonTakeThis, MSGBOX_DEFAULT
# 32 "data/maps/PacifidlogTown_House2/scripts.pory"

# 33 "data/maps/PacifidlogTown_House2/scripts.pory"
	giveitem ITEM_TM27
# 34 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FALSE
# 35 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 36 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_RETURN
# 37 "data/maps/PacifidlogTown_House2/scripts.pory"
	
# 38 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_YouMayAlsoHaveThis, MSGBOX_DEFAULT
# 39 "data/maps/PacifidlogTown_House2/scripts.pory"

# 40 "data/maps/PacifidlogTown_House2/scripts.pory"
	giveitem ITEM_TM21
# 41 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FALSE
# 42 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 43 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_FRUSTRATION
# 44 "data/maps/PacifidlogTown_House2/scripts.pory"

# 45 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
# 46 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 47 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 48 "data/maps/PacifidlogTown_House2/scripts.pory"

# 49 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_PutInEffort:: @ 8203845
# 50 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_PutInSomeMoreEffort, MSGBOX_DEFAULT
# 51 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 52 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 53 "data/maps/PacifidlogTown_House2/scripts.pory"

# 54 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_Adoring:: @ 8203845
# 55 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AdoringPokemon, MSGBOX_DEFAULT
# 56 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 57 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 58 "data/maps/PacifidlogTown_House2/scripts.pory"

# 59 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_Vicious:: @ 8203845
# 60 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ViciousPokemon, MSGBOX_DEFAULT
# 61 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 62 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 63 "data/maps/PacifidlogTown_House2/scripts.pory"

# 64 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_GiveFrustration:: @ 820384F
# 65 "data/maps/PacifidlogTown_House2/scripts.pory"
	call_if_set FLAG_RECEIVED_FANCLUB_TM_FRUSTRATION, PacifidlogTown_House2_EventScript_Vicious
# 66 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ViciousPokemonTakeThis, MSGBOX_DEFAULT
# 67 "data/maps/PacifidlogTown_House2/scripts.pory"

# 68 "data/maps/PacifidlogTown_House2/scripts.pory"
	giveitem ITEM_TM21
# 69 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FALSE
# 70 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 71 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_FRUSTRATION
# 72 "data/maps/PacifidlogTown_House2/scripts.pory"
	
# 73 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_YouMayAlsoHaveThis, MSGBOX_DEFAULT
# 74 "data/maps/PacifidlogTown_House2/scripts.pory"

# 75 "data/maps/PacifidlogTown_House2/scripts.pory"
	giveitem ITEM_TM27
# 76 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FALSE
# 77 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 78 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_RETURN
# 79 "data/maps/PacifidlogTown_House2/scripts.pory"

# 80 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
# 81 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 82 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 83 "data/maps/PacifidlogTown_House2/scripts.pory"

# 84 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_HappyAzurill:: @ 8203891
# 85 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 86 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 87 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 88 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZUMARILL, 0
# 89 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rurii, MSGBOX_DEFAULT
# 90 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 91 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_VeryFriendlyWithTrainer, MSGBOX_DEFAULT
# 92 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 93 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 94 "data/maps/PacifidlogTown_House2/scripts.pory"

# 95 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_UnhappyAzurill:: @ 82038AC
# 96 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 97 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 98 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 99 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZUMARILL, 2
# 100 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rururi, MSGBOX_DEFAULT
# 101 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 102 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch, MSGBOX_DEFAULT
# 103 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 104 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 105 "data/maps/PacifidlogTown_House2/scripts.pory"

# 106 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation: @ 82038C7
# 107 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Er-hem!\p"
# 108 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I am the Pokémon Fan Club's most\n"
# 109 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "important person, the Chairman's\l"
# 110 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "younger brother.\p"
# 111 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I'm here enjoying my vacation with\n"
# 112 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Pokémon, yes, indeed.$"
# 113 "data/maps/PacifidlogTown_House2/scripts.pory"

# 114 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_AhYourPokemon: @ 820395B
# 115 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Ah!\n"
# 116 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Your Pokémon…$"
# 117 "data/maps/PacifidlogTown_House2/scripts.pory"

# 118 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_AdoringPokemonTakeThis: @ 820396D
# 119 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It clearly likes you very much.\p"
# 120 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "A Pokémon that adoring and adorable\n"
# 121 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "deserves a TM like this, no?$"
# 122 "data/maps/PacifidlogTown_House2/scripts.pory"

# 123 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_AdoringPokemon:
# 124 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It clearly likes you very much.$"
# 125 "data/maps/PacifidlogTown_House2/scripts.pory"

# 126 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_PutInSomeMoreEffort: @ 82039CE
# 127 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Hmm…\n"
# 128 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It's not bad, but it's also not good.\p"
# 129 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "You, as the Trainer, need to put in\n"
# 130 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "some more effort.$"
# 131 "data/maps/PacifidlogTown_House2/scripts.pory"

# 132 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ViciousPokemonTakeThis: @ 8203A2F
# 133 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It has a vicious look to it.\p"
# 134 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "A frightening Pokémon like that\n"
# 135 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "deserves a TM like this.$"
# 136 "data/maps/PacifidlogTown_House2/scripts.pory"

# 137 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ViciousPokemon:
# 138 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It has a vicious look to it.$"
# 139 "data/maps/PacifidlogTown_House2/scripts.pory"

# 140 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ExplainReturnFrustration: @ 8203A85
# 141 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "If a Pokémon likes you a lot, Return's\n"
# 142 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "power is enhanced.\p"
# 143 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "If it doesn't like you, Frustration's\n"
# 144 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "power goes up.$"
# 145 "data/maps/PacifidlogTown_House2/scripts.pory"

# 146 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_Rurii: @ 8203B8D
# 147 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Azumarill: Rurii.$"
# 148 "data/maps/PacifidlogTown_House2/scripts.pory"

# 149 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_VeryFriendlyWithTrainer: @ 8203B9D
# 150 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It appears to be very friendly with the\n"
# 151 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Trainer.$"
# 152 "data/maps/PacifidlogTown_House2/scripts.pory"

# 153 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_Rururi: @ 8203BCE
# 154 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Azumarill: Rururi!$"
# 155 "data/maps/PacifidlogTown_House2/scripts.pory"

# 156 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch: @ 8203BDF
# 157 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It doesn't appear to like the Trainer\n"
# 158 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "very much.$"
# 159 "data/maps/PacifidlogTown_House2/scripts.pory"

# 160 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_YouMayAlsoHaveThis:
# 161 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "You may also have this.$"
