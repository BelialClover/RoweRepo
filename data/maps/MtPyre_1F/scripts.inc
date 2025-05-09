# 1 "data/maps/MtPyre_1F/scripts.pory"

# 2 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_MapScripts:: @ 8230F3E
# 3 "data/maps/MtPyre_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Mt_Pyre_1F_OnTransition
# 4 "data/maps/MtPyre_1F/scripts.pory"
	.byte 0
# 5 "data/maps/MtPyre_1F/scripts.pory"
	
# 6 "data/maps/MtPyre_1F/scripts.pory"
Mt_Pyre_1F_OnTransition::
# 7 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_VISITED_ROUTE122
# 8 "data/maps/MtPyre_1F/scripts.pory"
	end
# 9 "data/maps/MtPyre_1F/scripts.pory"

# 10 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_CleanseTagWoman:: @ 8230F3F
# 11 "data/maps/MtPyre_1F/scripts.pory"
	lock
# 12 "data/maps/MtPyre_1F/scripts.pory"
	faceplayer
# 13 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_ReceivedCleanseTag
# 14 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
# 15 "data/maps/MtPyre_1F/scripts.pory"
	giveitem ITEM_CLEANSE_TAG
# 16 "data/maps/MtPyre_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 17 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 18 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_RECEIVED_CLEANSE_TAG
# 19 "data/maps/MtPyre_1F/scripts.pory"
	release
# 20 "data/maps/MtPyre_1F/scripts.pory"
	end
# 21 "data/maps/MtPyre_1F/scripts.pory"

# 22 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_ReceivedCleanseTag:: @ 8230F6E
# 23 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
# 24 "data/maps/MtPyre_1F/scripts.pory"
	release
# 25 "data/maps/MtPyre_1F/scripts.pory"
	end
# 26 "data/maps/MtPyre_1F/scripts.pory"

# 27 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_PokefanF:: @ 8230F78
# 28 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ComeToPayRespects, MSGBOX_NPC
# 29 "data/maps/MtPyre_1F/scripts.pory"
	end
# 30 "data/maps/MtPyre_1F/scripts.pory"

# 31 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Man:: @ 8230F81
# 32 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_RestingPlaceOfZigzagoon, MSGBOX_NPC
# 33 "data/maps/MtPyre_1F/scripts.pory"
	end
# 34 "data/maps/MtPyre_1F/scripts.pory"

# 35 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_TakeThisForYourOwnGood: @ 8230F8A
# 36 "data/maps/MtPyre_1F/scripts.pory"
	.string "All sorts of beings wander the slopes\n"
# 37 "data/maps/MtPyre_1F/scripts.pory"
	.string "of Mt. Pyre…\p"
# 38 "data/maps/MtPyre_1F/scripts.pory"
	.string "There is no telling what may happen.\n"
# 39 "data/maps/MtPyre_1F/scripts.pory"
	.string "Take this. It's for your own good.$"
# 40 "data/maps/MtPyre_1F/scripts.pory"

# 41 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ExplainCleanseTag: @ 8231005
# 42 "data/maps/MtPyre_1F/scripts.pory"
	.string "Have a Pokémon hold that\n"
# 43 "data/maps/MtPyre_1F/scripts.pory"
	.string "Cleanse Tag.\p"
# 44 "data/maps/MtPyre_1F/scripts.pory"
	.string "It will help ward off wild Pokémon.$"
# 45 "data/maps/MtPyre_1F/scripts.pory"

# 46 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ComeToPayRespects: @ 823104F
# 47 "data/maps/MtPyre_1F/scripts.pory"
	.string "Did you come to pay your respect\n"
# 48 "data/maps/MtPyre_1F/scripts.pory"
	.string "to the spirits of departed Pokémon?\p"
# 49 "data/maps/MtPyre_1F/scripts.pory"
	.string "You must care for your Pokémon a lot.$"
# 50 "data/maps/MtPyre_1F/scripts.pory"

# 51 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_RestingPlaceOfZigzagoon: @ 82310BA
# 52 "data/maps/MtPyre_1F/scripts.pory"
	.string "This is the final resting place of my\n"
# 53 "data/maps/MtPyre_1F/scripts.pory"
	.string "Zigzagoon. I cherished it…$"
