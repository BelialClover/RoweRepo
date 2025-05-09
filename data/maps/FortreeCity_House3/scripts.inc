# 1 "data/maps/FortreeCity_House3/scripts.pory"

# 2 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_MapScripts:: @ 8217AE7
# 3 "data/maps/FortreeCity_House3/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House3/scripts.pory"

# 5 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_Maniac:: @ 8217AE8
# 6 "data/maps/FortreeCity_House3/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_House3/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_ThreeShards, MSGBOX_DEFAULT
# 9 "data/maps/FortreeCity_House3/scripts.pory"
	checkitem ITEM_GREEN_SHARD, 2
# 10 "data/maps/FortreeCity_House3/scripts.pory"
	compare VAR_RESULT, TRUE
# 11 "data/maps/FortreeCity_House3/scripts.pory"
	goto_if_eq FortreeCity_House3_EventScript_AsktoTrade
# 12 "data/maps/FortreeCity_House3/scripts.pory"
	release
# 13 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 14 "data/maps/FortreeCity_House3/scripts.pory"
	
# 15 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_AsktoTrade::
# 16 "data/maps/FortreeCity_House3/scripts.pory"
	playse SE_PIN
# 17 "data/maps/FortreeCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 18 "data/maps/FortreeCity_House3/scripts.pory"
	waitmovement 0
# 19 "data/maps/FortreeCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 20 "data/maps/FortreeCity_House3/scripts.pory"
	waitmovement 0
# 21 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_Question, MSGBOX_YESNO
# 22 "data/maps/FortreeCity_House3/scripts.pory"
	compare VAR_RESULT, NO
# 23 "data/maps/FortreeCity_House3/scripts.pory"
	goto_if_eq FortreeCity_House3_EventScript_GrassStarter_Decline
# 24 "data/maps/FortreeCity_House3/scripts.pory"
	getpartysize
# 25 "data/maps/FortreeCity_House3/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 26 "data/maps/FortreeCity_House3/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Space
# 27 "data/maps/FortreeCity_House3/scripts.pory"
	removeitem ITEM_GREEN_SHARD, 2
# 28 "data/maps/FortreeCity_House3/scripts.pory"
	random 9
# 29 "data/maps/FortreeCity_House3/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/FortreeCity_House3/scripts.pory"
	case 0, FortreeCity_House3_EventScript_Give_Bulbasaur_Mega
# 31 "data/maps/FortreeCity_House3/scripts.pory"
	case 1, FortreeCity_House3_EventScript_Give_Chikorita
# 32 "data/maps/FortreeCity_House3/scripts.pory"
	case 2, FortreeCity_House3_EventScript_Give_Treecko_Mega
# 33 "data/maps/FortreeCity_House3/scripts.pory"
	case 3, FortreeCity_House3_EventScript_Give_Turtwig
# 34 "data/maps/FortreeCity_House3/scripts.pory"
	case 4, FortreeCity_House3_EventScript_Give_Snivy
# 35 "data/maps/FortreeCity_House3/scripts.pory"
	case 5, FortreeCity_House3_EventScript_Give_Chespin
# 36 "data/maps/FortreeCity_House3/scripts.pory"
	case 6, FortreeCity_House3_EventScript_Give_Rowlet
# 37 "data/maps/FortreeCity_House3/scripts.pory"
	case 7, FortreeCity_House3_EventScript_Give_Grookey
# 38 "data/maps/FortreeCity_House3/scripts.pory"
	case 8, FortreeCity_House3_EventScript_Give_Sprigatito
# 39 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 40 "data/maps/FortreeCity_House3/scripts.pory"
	
# 41 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_GrassStarter_Come_Again::
# 42 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 43 "data/maps/FortreeCity_House3/scripts.pory"
	release
# 44 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 45 "data/maps/FortreeCity_House3/scripts.pory"
	
# 46 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_GrassStarter_Decline::
# 47 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_Starter_Declined, MSGBOX_DEFAULT
# 48 "data/maps/FortreeCity_House3/scripts.pory"
	release
# 49 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 50 "data/maps/FortreeCity_House3/scripts.pory"
	
# 51 "data/maps/FortreeCity_House3/scripts.pory"
//Starters
# 52 "data/maps/FortreeCity_House3/scripts.pory"
	
# 53 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_Text_ThreeShards:
# 54 "data/maps/FortreeCity_House3/scripts.pory"
	.string "If you have 2 Green Shards I can\n"
# 55 "data/maps/FortreeCity_House3/scripts.pory"
	.string "give you a good Pokémon.$"
# 56 "data/maps/FortreeCity_House3/scripts.pory"
	
# 57 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_Text_Question:
# 58 "data/maps/FortreeCity_House3/scripts.pory"
	.string "Are those Green Shards?\p"
# 59 "data/maps/FortreeCity_House3/scripts.pory"
	.string "Do you want to trade them\n"
# 60 "data/maps/FortreeCity_House3/scripts.pory"
	.string "for one of my Pokémon?$"
# 61 "data/maps/FortreeCity_House3/scripts.pory"
	
# 62 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_Text_Starter_Declined:
# 63 "data/maps/FortreeCity_House3/scripts.pory"
	.string "Oh well, come again if you change\n"
# 64 "data/maps/FortreeCity_House3/scripts.pory"
	.string "your mind.$"
# 65 "data/maps/FortreeCity_House3/scripts.pory"
	
# 66 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_Text_ComeAgain_Starter:
# 67 "data/maps/FortreeCity_House3/scripts.pory"
	.string "Come again if you want another\n"
# 68 "data/maps/FortreeCity_House3/scripts.pory"
	.string "one.$"
# 69 "data/maps/FortreeCity_House3/scripts.pory"
	
# 70 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_Text_ReceivedMonFromOldMan:
# 71 "data/maps/FortreeCity_House3/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
# 72 "data/maps/FortreeCity_House3/scripts.pory"
	.string "the Maniac.$"
# 73 "data/maps/FortreeCity_House3/scripts.pory"
	
# 74 "data/maps/FortreeCity_House3/scripts.pory"
//Charmander
# 75 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_Give_Bulbasaur::
# 76 "data/maps/FortreeCity_House3/scripts.pory"
	bufferspeciesname 1, SPECIES_BULBASAUR
# 77 "data/maps/FortreeCity_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 78 "data/maps/FortreeCity_House3/scripts.pory"
	message FortreeCity_House3_Text_ReceivedMonFromOldMan
# 79 "data/maps/FortreeCity_House3/scripts.pory"
	givemon SPECIES_BULBASAUR, 10, ITEM_NONE
# 80 "data/maps/FortreeCity_House3/scripts.pory"
	waitfanfare
# 81 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 82 "data/maps/FortreeCity_House3/scripts.pory"
	release
# 83 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 84 "data/maps/FortreeCity_House3/scripts.pory"
	
# 85 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_Give_Bulbasaur_Mega::
# 86 "data/maps/FortreeCity_House3/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_11 FortreeCity_House3_EventScript_Give_Bulbasaur
# 87 "data/maps/FortreeCity_House3/scripts.pory"
	goto_if_set FLAG_GOT_VENUSAUR_MEGA_STONE FortreeCity_House3_EventScript_Give_Bulbasaur
# 88 "data/maps/FortreeCity_House3/scripts.pory"
	bufferspeciesname 1, SPECIES_BULBASAUR
# 89 "data/maps/FortreeCity_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 90 "data/maps/FortreeCity_House3/scripts.pory"
	message FortreeCity_House3_Text_ReceivedMonFromOldMan
# 91 "data/maps/FortreeCity_House3/scripts.pory"
	givemon SPECIES_BULBASAUR, 30, ITEM_VENUSAURITE
# 92 "data/maps/FortreeCity_House3/scripts.pory"
	setflag FLAG_GOT_VENUSAUR_MEGA_STONE
# 93 "data/maps/FortreeCity_House3/scripts.pory"
	waitfanfare
# 94 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 95 "data/maps/FortreeCity_House3/scripts.pory"
	release
# 96 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 97 "data/maps/FortreeCity_House3/scripts.pory"
	
# 98 "data/maps/FortreeCity_House3/scripts.pory"
//Cyndaquil
# 99 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_Give_Chikorita::
# 100 "data/maps/FortreeCity_House3/scripts.pory"
	bufferspeciesname 1, SPECIES_CHIKORITA
# 101 "data/maps/FortreeCity_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/FortreeCity_House3/scripts.pory"
	message FortreeCity_House3_Text_ReceivedMonFromOldMan
# 103 "data/maps/FortreeCity_House3/scripts.pory"
	givemon SPECIES_CHIKORITA, 10, ITEM_NONE
# 104 "data/maps/FortreeCity_House3/scripts.pory"
	waitfanfare
# 105 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 106 "data/maps/FortreeCity_House3/scripts.pory"
	release
# 107 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 108 "data/maps/FortreeCity_House3/scripts.pory"
	
# 109 "data/maps/FortreeCity_House3/scripts.pory"
//Torchic
# 110 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_Give_Treecko::
# 111 "data/maps/FortreeCity_House3/scripts.pory"
	bufferspeciesname 1, SPECIES_TREECKO
# 112 "data/maps/FortreeCity_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 113 "data/maps/FortreeCity_House3/scripts.pory"
	message FortreeCity_House3_Text_ReceivedMonFromOldMan
# 114 "data/maps/FortreeCity_House3/scripts.pory"
	givemon SPECIES_TREECKO, 10, ITEM_NONE
# 115 "data/maps/FortreeCity_House3/scripts.pory"
	waitfanfare
# 116 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 117 "data/maps/FortreeCity_House3/scripts.pory"
	release
# 118 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 119 "data/maps/FortreeCity_House3/scripts.pory"
	
# 120 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_Give_Treecko_Mega::
# 121 "data/maps/FortreeCity_House3/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_11 FortreeCity_House3_EventScript_Give_Treecko
# 122 "data/maps/FortreeCity_House3/scripts.pory"
	goto_if_set FLAG_GOT_SCEPTILE_MEGA_STONE FortreeCity_House3_EventScript_Give_Treecko
# 123 "data/maps/FortreeCity_House3/scripts.pory"
	bufferspeciesname 1, SPECIES_TREECKO
# 124 "data/maps/FortreeCity_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 125 "data/maps/FortreeCity_House3/scripts.pory"
	message FortreeCity_House3_Text_ReceivedMonFromOldMan
# 126 "data/maps/FortreeCity_House3/scripts.pory"
	givemon SPECIES_TREECKO, 30, ITEM_SCEPTILITE
# 127 "data/maps/FortreeCity_House3/scripts.pory"
	setflag FLAG_GOT_SCEPTILE_MEGA_STONE
# 128 "data/maps/FortreeCity_House3/scripts.pory"
	waitfanfare
# 129 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 130 "data/maps/FortreeCity_House3/scripts.pory"
	release
# 131 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 132 "data/maps/FortreeCity_House3/scripts.pory"
	
# 133 "data/maps/FortreeCity_House3/scripts.pory"
//Chimchar
# 134 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_Give_Turtwig::
# 135 "data/maps/FortreeCity_House3/scripts.pory"
	bufferspeciesname 1, SPECIES_TURTWIG
# 136 "data/maps/FortreeCity_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 137 "data/maps/FortreeCity_House3/scripts.pory"
	message FortreeCity_House3_Text_ReceivedMonFromOldMan
# 138 "data/maps/FortreeCity_House3/scripts.pory"
	givemon SPECIES_TURTWIG, 10, ITEM_NONE
# 139 "data/maps/FortreeCity_House3/scripts.pory"
	waitfanfare
# 140 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 141 "data/maps/FortreeCity_House3/scripts.pory"
	release
# 142 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 143 "data/maps/FortreeCity_House3/scripts.pory"
	
# 144 "data/maps/FortreeCity_House3/scripts.pory"
//Tepig
# 145 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_Give_Snivy::
# 146 "data/maps/FortreeCity_House3/scripts.pory"
	bufferspeciesname 1, SPECIES_SNIVY
# 147 "data/maps/FortreeCity_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 148 "data/maps/FortreeCity_House3/scripts.pory"
	message FortreeCity_House3_Text_ReceivedMonFromOldMan
# 149 "data/maps/FortreeCity_House3/scripts.pory"
	givemon SPECIES_SNIVY, 10, ITEM_NONE
# 150 "data/maps/FortreeCity_House3/scripts.pory"
	waitfanfare
# 151 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 152 "data/maps/FortreeCity_House3/scripts.pory"
	release
# 153 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 154 "data/maps/FortreeCity_House3/scripts.pory"
	
# 155 "data/maps/FortreeCity_House3/scripts.pory"
//Fennekin
# 156 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_Give_Chespin::
# 157 "data/maps/FortreeCity_House3/scripts.pory"
	bufferspeciesname 1, SPECIES_CHESPIN
# 158 "data/maps/FortreeCity_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 159 "data/maps/FortreeCity_House3/scripts.pory"
	message FortreeCity_House3_Text_ReceivedMonFromOldMan
# 160 "data/maps/FortreeCity_House3/scripts.pory"
	givemon SPECIES_CHESPIN, 10, ITEM_NONE
# 161 "data/maps/FortreeCity_House3/scripts.pory"
	waitfanfare
# 162 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 163 "data/maps/FortreeCity_House3/scripts.pory"
	release
# 164 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 165 "data/maps/FortreeCity_House3/scripts.pory"
	
# 166 "data/maps/FortreeCity_House3/scripts.pory"
//Litten
# 167 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_Give_Rowlet::
# 168 "data/maps/FortreeCity_House3/scripts.pory"
	bufferspeciesname 1, SPECIES_ROWLET
# 169 "data/maps/FortreeCity_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 170 "data/maps/FortreeCity_House3/scripts.pory"
	message FortreeCity_House3_Text_ReceivedMonFromOldMan
# 171 "data/maps/FortreeCity_House3/scripts.pory"
	givemon SPECIES_ROWLET, 10, ITEM_NONE
# 172 "data/maps/FortreeCity_House3/scripts.pory"
	waitfanfare
# 173 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 174 "data/maps/FortreeCity_House3/scripts.pory"
	release
# 175 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 176 "data/maps/FortreeCity_House3/scripts.pory"
	
# 177 "data/maps/FortreeCity_House3/scripts.pory"
//Scorbunny
# 178 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_Give_Grookey::
# 179 "data/maps/FortreeCity_House3/scripts.pory"
	bufferspeciesname 1, SPECIES_GROOKEY
# 180 "data/maps/FortreeCity_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 181 "data/maps/FortreeCity_House3/scripts.pory"
	message FortreeCity_House3_Text_ReceivedMonFromOldMan
# 182 "data/maps/FortreeCity_House3/scripts.pory"
	givemon SPECIES_GROOKEY, 10, ITEM_NONE
# 183 "data/maps/FortreeCity_House3/scripts.pory"
	waitfanfare
# 184 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 185 "data/maps/FortreeCity_House3/scripts.pory"
	release
# 186 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 187 "data/maps/FortreeCity_House3/scripts.pory"
	
# 188 "data/maps/FortreeCity_House3/scripts.pory"
//Sprigatito
# 189 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_Give_Sprigatito::
# 190 "data/maps/FortreeCity_House3/scripts.pory"
	bufferspeciesname 1, SPECIES_SPRIGATITO
# 191 "data/maps/FortreeCity_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 192 "data/maps/FortreeCity_House3/scripts.pory"
	message FortreeCity_House3_Text_ReceivedMonFromOldMan
# 193 "data/maps/FortreeCity_House3/scripts.pory"
	givemon SPECIES_SPRIGATITO, 10, ITEM_NONE
# 194 "data/maps/FortreeCity_House3/scripts.pory"
	waitfanfare
# 195 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 196 "data/maps/FortreeCity_House3/scripts.pory"
	release
# 197 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 198 "data/maps/FortreeCity_House3/scripts.pory"

# 199 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_SchoolKidM:: @ 8217AF1
# 200 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_OhYouHavePokedex, MSGBOX_NPC
# 201 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 202 "data/maps/FortreeCity_House3/scripts.pory"

# 203 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_Text_MetStevenHadAmazingPokemon: @ 8217AFA
# 204 "data/maps/FortreeCity_House3/scripts.pory"
	.string "While speaking about Pokédexes,\n"
# 205 "data/maps/FortreeCity_House3/scripts.pory"
	.string "I remembered something.\p"
# 206 "data/maps/FortreeCity_House3/scripts.pory"
	.string "I met this Trainer, Steven, when\n"
# 207 "data/maps/FortreeCity_House3/scripts.pory"
	.string "I was searching for rare stones.\p"
# 208 "data/maps/FortreeCity_House3/scripts.pory"
	.string "Hoo, boy, he had some amazing Pokémon\n"
# 209 "data/maps/FortreeCity_House3/scripts.pory"
	.string "with him.\p"
# 210 "data/maps/FortreeCity_House3/scripts.pory"
	.string "They weren't just rare, they were\n"
# 211 "data/maps/FortreeCity_House3/scripts.pory"
	.string "trained to terrifying extremes!\p"
# 212 "data/maps/FortreeCity_House3/scripts.pory"
	.string "He might even be stronger than the\n"
# 213 "data/maps/FortreeCity_House3/scripts.pory"
	.string "Gym Leader in this town…$"
# 214 "data/maps/FortreeCity_House3/scripts.pory"

# 215 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_Text_OhYouHavePokedex: @ 8217C22
# 216 "data/maps/FortreeCity_House3/scripts.pory"
	.string "What's that thing you have there?\p"
# 217 "data/maps/FortreeCity_House3/scripts.pory"
	.string "… … … … … …\p"
# 218 "data/maps/FortreeCity_House3/scripts.pory"
	.string "Oh, it's called a Pokédex?\n"
# 219 "data/maps/FortreeCity_House3/scripts.pory"
	.string "It's really awesome!$"
