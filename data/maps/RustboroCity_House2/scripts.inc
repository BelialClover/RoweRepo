# 1 "data/maps/RustboroCity_House2/scripts.pory"

# 2 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_MapScripts:: @ 8215EB3
# 3 "data/maps/RustboroCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_House2/scripts.pory"

# 5 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_EventScript_PokefanF:: @ 8215EB4
# 6 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroCity_House2_Text_TrainerSchoolExcellent, MSGBOX_NPC
# 7 "data/maps/RustboroCity_House2/scripts.pory"
	end
# 8 "data/maps/RustboroCity_House2/scripts.pory"

# 9 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_EventScript_LittleGirl:: @ 8215EBD
# 10 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroCity_House2_Text_RoxanneKnowsALot, MSGBOX_NPC
# 11 "data/maps/RustboroCity_House2/scripts.pory"
	end
# 12 "data/maps/RustboroCity_House2/scripts.pory"
	
# 13 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_EventScript_ExioliteMan:: @ 81E4C26
# 14 "data/maps/RustboroCity_House2/scripts.pory"
	lock
# 15 "data/maps/RustboroCity_House2/scripts.pory"
	faceplayer
# 16 "data/maps/RustboroCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXIOLITE, RustboroCity_House2_EventScript_ReceivedExiolite
# 17 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroCity_House2_Text_WantExioliteRoxanneGaveMe, MSGBOX_YESNO
# 18 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, NO
# 19 "data/maps/RustboroCity_House2/scripts.pory"
	goto_if_eq RustboroCity_House2_EventScript_DeclineExiolite
# 20 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroCity_House2_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 21 "data/maps/RustboroCity_House2/scripts.pory"
	giveitem ITEM_EXIOLITE
# 22 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
# 23 "data/maps/RustboroCity_House2/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 24 "data/maps/RustboroCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_EXIOLITE
# 25 "data/maps/RustboroCity_House2/scripts.pory"
	release
# 26 "data/maps/RustboroCity_House2/scripts.pory"
	end
# 27 "data/maps/RustboroCity_House2/scripts.pory"

# 28 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_EventScript_ReceivedExiolite:: @ 81E4C68
# 29 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroCity_House2_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 30 "data/maps/RustboroCity_House2/scripts.pory"
	release
# 31 "data/maps/RustboroCity_House2/scripts.pory"
	end
# 32 "data/maps/RustboroCity_House2/scripts.pory"

# 33 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_EventScript_DeclineExiolite:: @ 81E4C72
# 34 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroCity_House2_Text_WhatToDoWithWeirdItem, MSGBOX_DEFAULT
# 35 "data/maps/RustboroCity_House2/scripts.pory"
	release
# 36 "data/maps/RustboroCity_House2/scripts.pory"
	end
# 37 "data/maps/RustboroCity_House2/scripts.pory"

# 38 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_Text_TrainerSchoolExcellent: @ 8215EC6
# 39 "data/maps/RustboroCity_House2/scripts.pory"
	.string "The Trainer's School is excellent.\p"
# 40 "data/maps/RustboroCity_House2/scripts.pory"
	.string "If you study there, you could even\n"
# 41 "data/maps/RustboroCity_House2/scripts.pory"
	.string "become a Gym Leader.$"
# 42 "data/maps/RustboroCity_House2/scripts.pory"

# 43 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_Text_RoxanneKnowsALot: @ 8215F21
# 44 "data/maps/RustboroCity_House2/scripts.pory"
	.string "Roxanne, the Gym Leader, really knows\n"
# 45 "data/maps/RustboroCity_House2/scripts.pory"
	.string "a lot about Pokémon.\p"
# 46 "data/maps/RustboroCity_House2/scripts.pory"
	.string "She's really strong, too!$"
# 47 "data/maps/RustboroCity_House2/scripts.pory"
	
# 48 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_Text_WantExioliteRoxanneGaveMe:
# 49 "data/maps/RustboroCity_House2/scripts.pory"
	.string "I got this from Roxanne, but I don't\n"
# 50 "data/maps/RustboroCity_House2/scripts.pory"
	.string "know what it's good for.\p"
# 51 "data/maps/RustboroCity_House2/scripts.pory"
	.string "I think it's called Exiolite.\n"
# 52 "data/maps/RustboroCity_House2/scripts.pory"
	.string "Do you want it?$"
# 53 "data/maps/RustboroCity_House2/scripts.pory"

# 54 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_Text_YouCanKeepIt:
# 55 "data/maps/RustboroCity_House2/scripts.pory"
	.string "Why would you want it?\n"
# 56 "data/maps/RustboroCity_House2/scripts.pory"
	.string "You're weird.\p"
# 57 "data/maps/RustboroCity_House2/scripts.pory"
	.string "You can keep it, but keep it a secret\n"
# 58 "data/maps/RustboroCity_House2/scripts.pory"
	.string "from Roxanne.$"
# 59 "data/maps/RustboroCity_House2/scripts.pory"
	
# 60 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_Text_WhatToDoWithWeirdItem:
# 61 "data/maps/RustboroCity_House2/scripts.pory"
	.string "Yeah, you think so, too! What are you\n"
# 62 "data/maps/RustboroCity_House2/scripts.pory"
	.string "supposed to do with some weird item?$"
# 63 "data/maps/RustboroCity_House2/scripts.pory"
	
# 64 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_Text_StevensHouseOverThere: @ 81E4DB3
# 65 "data/maps/RustboroCity_House2/scripts.pory"
	.string "Roxanne's Gym is right over there!$"
