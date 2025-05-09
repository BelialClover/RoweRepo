# 1 "data/maps/PacifidlogTown_House1/scripts.pory"

# 2 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_MapScripts:: @ 820365C
# 3 "data/maps/PacifidlogTown_House1/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House1/scripts.pory"

# 5 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_EventScript_Man:: @ 820365D
# 6 "data/maps/PacifidlogTown_House1/scripts.pory"
	lock
# 7 "data/maps/PacifidlogTown_House1/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_Text_ThreeShards, MSGBOX_DEFAULT
# 9 "data/maps/PacifidlogTown_House1/scripts.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 10 "data/maps/PacifidlogTown_House1/scripts.pory"
	compare VAR_RESULT, TRUE
# 11 "data/maps/PacifidlogTown_House1/scripts.pory"
	goto_if_eq PacifidlogTown_House1_EventScript_AsktoTrade
# 12 "data/maps/PacifidlogTown_House1/scripts.pory"
	release
# 13 "data/maps/PacifidlogTown_House1/scripts.pory"
	end
# 14 "data/maps/PacifidlogTown_House1/scripts.pory"
	
# 15 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_EventScript_AsktoTrade::
# 16 "data/maps/PacifidlogTown_House1/scripts.pory"
	playse SE_PIN
# 17 "data/maps/PacifidlogTown_House1/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 18 "data/maps/PacifidlogTown_House1/scripts.pory"
	waitmovement 0
# 19 "data/maps/PacifidlogTown_House1/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 20 "data/maps/PacifidlogTown_House1/scripts.pory"
	waitmovement 0
# 21 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_Text_Question, MSGBOX_YESNO
# 22 "data/maps/PacifidlogTown_House1/scripts.pory"
	compare VAR_RESULT, NO
# 23 "data/maps/PacifidlogTown_House1/scripts.pory"
	goto_if_eq PacifidlogTown_House1_EventScript_Patch_Decline
# 24 "data/maps/PacifidlogTown_House1/scripts.pory"
	removeitem ITEM_YELLOW_SHARD, 1
# 25 "data/maps/PacifidlogTown_House1/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
# 26 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_Text_ComeAgain_Patch, MSGBOX_NPC
# 27 "data/maps/PacifidlogTown_House1/scripts.pory"
	release
# 28 "data/maps/PacifidlogTown_House1/scripts.pory"
	end
# 29 "data/maps/PacifidlogTown_House1/scripts.pory"
	
# 30 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_EventScript_Patch_Decline:
# 31 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_Text_Patch_Declined, MSGBOX_NPC
# 32 "data/maps/PacifidlogTown_House1/scripts.pory"
	end
# 33 "data/maps/PacifidlogTown_House1/scripts.pory"

# 34 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_EventScript_Come_Again::
# 35 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_Text_ComeAgain_Patch, MSGBOX_NPC
# 36 "data/maps/PacifidlogTown_House1/scripts.pory"
	end
# 37 "data/maps/PacifidlogTown_House1/scripts.pory"

# 38 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_EventScript_Woman:: @ 8203666
# 39 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_Text_SixDotsOpenThreeDoors, MSGBOX_NPC
# 40 "data/maps/PacifidlogTown_House1/scripts.pory"
	end
# 41 "data/maps/PacifidlogTown_House1/scripts.pory"

# 42 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_Text_RegiStory: @ 820366F
# 43 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "In the Hoenn region, there are three\n"
# 44 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Pokémon that represent the power of\l"
# 45 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "rock, ice, and steel.\p"
# 46 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Each of them is said to hide away deep\n"
# 47 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "inside caves.\p"
# 48 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "That's the story I heard when I was\n"
# 49 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "just a little kid.$"
# 50 "data/maps/PacifidlogTown_House1/scripts.pory"

# 51 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_Text_SixDotsOpenThreeDoors: @ 820373A
# 52 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "“Six dots open three doors.”\p"
# 53 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Grandpa used to say that, but I don't\n"
# 54 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "know what he meant.$"
# 55 "data/maps/PacifidlogTown_House1/scripts.pory"
	
# 56 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_Text_ThreeShards:
# 57 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "If you have a Yellow Shard, I can\n"
# 58 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "trade you for an Ability Patch.$"
# 59 "data/maps/PacifidlogTown_House1/scripts.pory"
	
# 60 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_Text_Question:
# 61 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Is that a Yellow Shard?\p"
# 62 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Do you want to trade it\n"
# 63 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "for my Ability Patch?$"
# 64 "data/maps/PacifidlogTown_House1/scripts.pory"
	
# 65 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_Text_Patch_Declined:
# 66 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Oh well, come again if you change\n"
# 67 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "your mind.$"
# 68 "data/maps/PacifidlogTown_House1/scripts.pory"
	
# 69 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_Text_ComeAgain_Patch:
# 70 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "If you have more shards, please\n"
# 71 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "come back again!$"
