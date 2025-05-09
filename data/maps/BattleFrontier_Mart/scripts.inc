# 1 "data/maps/BattleFrontier_Mart/scripts.pory"

# 2 "data/maps/BattleFrontier_Mart/scripts.pory"
.set LOCALID_OLD_WOMAN, 2
# 3 "data/maps/BattleFrontier_Mart/scripts.pory"

# 4 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_MapScripts:: @ 8267ACB
# 5 "data/maps/BattleFrontier_Mart/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_Mart/scripts.pory"

# 7 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_Clerk:: @ 8267ACC
# 8 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/BattleFrontier_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemart 0
# 13 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 14 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 15 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 16 "data/maps/BattleFrontier_Mart/scripts.pory"

# 17 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_OldMan:: @ 8267B02
# 18 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ChaperonGrandson, MSGBOX_NPC
# 19 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 20 "data/maps/BattleFrontier_Mart/scripts.pory"

# 21 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_OldWoman:: @ 8267B0B
# 22 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 23 "data/maps/BattleFrontier_Mart/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, Common_Movement_FaceDown
# 24 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmovement 0
# 25 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ProteinMakeNiceGift, MSGBOX_DEFAULT
# 26 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 27 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 28 "data/maps/BattleFrontier_Mart/scripts.pory"

# 29 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_Boy:: @ 8267B20
# 30 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_FacilitiesDontAllowItems, MSGBOX_NPC
# 31 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 32 "data/maps/BattleFrontier_Mart/scripts.pory"

# 33 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_ChaperonGrandson: @ 8267B29
# 34 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "We came here to chaperon our\n"
# 35 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "grandson.\p"
# 36 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "But since we're here, we thought\n"
# 37 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "we should get some souvenirs.$"
# 38 "data/maps/BattleFrontier_Mart/scripts.pory"

# 39 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_ProteinMakeNiceGift: @ 8267B8F
# 40 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Dear, what do you think of this?\n"
# 41 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Wouldn't this make a nice gift?\p"
# 42 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "It's…Pro…te…in?\n"
# 43 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "It sounds delicious, doesn't it?$"
# 44 "data/maps/BattleFrontier_Mart/scripts.pory"

# 45 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_FacilitiesDontAllowItems: @ 8267C01
# 46 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "A lot of the Battle Frontier's\n"
# 47 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "facilities don't allow the use of items\l"
# 48 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "during battles.\p"
# 49 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "That rule makes things tougher than\n"
# 50 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "they already are!$"
