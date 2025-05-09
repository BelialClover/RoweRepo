# 1 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 2 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
.set LOCALID_FOSSIL_MANIAC, 1
# 3 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 4 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_MapScripts:: @ 822AF28
# 5 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsTunnel_OnTransition
# 6 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.byte 0
# 7 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 8 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnTransition: @ 822AF33
# 9 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac
# 10 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 11 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 12 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac:: @ 822AF3D
# 13 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectxyperm LOCALID_FOSSIL_MANIAC, 6, 5
# 14 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectmovementtype LOCALID_FOSSIL_MANIAC, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 16 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 17 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnLoad: @ 822AF49
# 18 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass
# 19 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 20 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 21 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass:: @ 822AF53
# 22 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 1, METATILE_Fallarbor_RedRockWall, 1
# 23 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 2, METATILE_Fallarbor_RedRockWall, 1
# 24 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 25 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 26 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn:: @ 822AF66
# 27 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lockall
# 28 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_WalkInPlaceFastestUp
# 29 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 30 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_NotSafeThatWay, MSGBOX_DEFAULT
# 32 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setvar VAR_FOSSIL_MANIAC_STATE, 2
# 33 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	releaseall
# 34 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 35 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 36 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_FossilManiac_2:: @ 822AF87
# 37 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lock
# 38 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	faceplayer
# 39 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_RECEIVED_REVIVED_FOSSIL_MON, Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil
# 40 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL, 1
# 41 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	compare VAR_RESULT, TRUE
# 42 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
# 43 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL, 1
# 44 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	compare VAR_RESULT, TRUE
# 45 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
# 46 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_LookInDesertForFossils, MSGBOX_DEFAULT
# 47 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 48 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 49 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 50 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil:: @ 822AFBC
# 51 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils, MSGBOX_DEFAULT
# 52 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 53 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 54 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 55 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil:: @ 822AFC6
# 56 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_FossilsAreWonderful, MSGBOX_DEFAULT
# 57 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 58 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 59 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 60 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_LookInDesertForFossils: @ 822AFD0
# 61 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm the Fossil Maniac…\n"
# 62 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm a nice guy who loves Fossils…\p"
# 63 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Do you want a Fossil?\p"
# 64 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "But the Fossils around these parts all\n"
# 65 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "belong to me… None for you…\p"
# 66 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "If you can't bear to go without\n"
# 67 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "a Fossil, look in a desert where there\l"
# 68 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "are boulders and sand that may hide\l"
# 69 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Fossils…$"
# 70 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	
# 71 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_Fossil:
# 72 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm the Fossil Maniac…\n"
# 73 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm a nice guy who loves Fossils…\p"
# 74 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Do you want a Fossil?$"	
# 75 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	
# 76 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_ComeTomorrow:
# 77 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Come tomorrow, i may have dug\n"
# 78 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "another one$"
# 79 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	
# 80 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_FossilDecline:
# 81 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Is that so, come again if you\n"
# 82 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "change your mind$"
# 83 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	
# 84 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_HereYoGo:
# 85 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Here you go!$"
# 86 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	
# 87 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_FossilGet:
# 88 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "{PLAYER} received a Fossil from\n"
# 89 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Fossil Maniac$"
# 90 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 91 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils: @ 822B0D6
# 92 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "You found a Fossil, didn't you?\n"
# 93 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "That's so nice… It's so dreamy…\p"
# 94 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "What are you going to do with that\n"
# 95 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Fossil?\p"
# 96 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "From what I've heard, Devon is doing\n"
# 97 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "research on reviving Pokémon from\l"
# 98 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Fossils…\p"
# 99 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I love my Fossils, so I would never\n"
# 100 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "do anything like that…$"
# 101 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 102 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_FossilsAreWonderful: @ 822B1CC
# 103 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Fossils are so… Wonderful…\n"
# 104 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "It's so dreamy…$"
# 105 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 106 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_NotSafeThatWay: @ 822B1F7
# 107 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Oh…\n"
# 108 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "It's not safe that way…\p"
# 109 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I was digging away, you see…\n"
# 110 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "When the whole wall collapsed…\p"
# 111 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I think there's a giant cavern\n"
# 112 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "underneath now…\p"
# 113 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "You may find some rare Pokémon\n"
# 114 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "there…$"
