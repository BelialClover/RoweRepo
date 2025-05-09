# 1 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 2 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_MapScripts:: @ 822BBB1
# 3 "data/maps/Route117_PokemonDayCare/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_PokemonDayCare_OnTransition
# 4 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.byte 0
# 5 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 6 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_OnTransition: @ 822BBB7
# 7 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
# 8 "data/maps/Route117_PokemonDayCare/scripts.pory"
	end
# 9 "data/maps/Route117_PokemonDayCare/scripts.pory"
	
# 10 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_EventScript_Daycare_Fun::
# 11 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_Text_Fun, MSGBOX_DEFAULT
# 12 "data/maps/Route117_PokemonDayCare/scripts.pory"
	release
# 13 "data/maps/Route117_PokemonDayCare/scripts.pory"
	end
# 14 "data/maps/Route117_PokemonDayCare/scripts.pory"
	
# 15 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_EventScript_ReceivedDitto::
# 16 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_Text_Woman, MSGBOX_DEFAULT
# 17 "data/maps/Route117_PokemonDayCare/scripts.pory"
	release
# 18 "data/maps/Route117_PokemonDayCare/scripts.pory"
	end
# 19 "data/maps/Route117_PokemonDayCare/scripts.pory"
	
# 20 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_EventScript_DeclineDitto::
# 21 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_Text_AsYouWishThen, MSGBOX_DEFAULT
# 22 "data/maps/Route117_PokemonDayCare/scripts.pory"
	release
# 23 "data/maps/Route117_PokemonDayCare/scripts.pory"
	end
# 24 "data/maps/Route117_PokemonDayCare/scripts.pory"
	
# 25 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_EventScript_NoRoomForThis::
# 26 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_Text_NoRoomForThis, MSGBOX_DEFAULT
# 27 "data/maps/Route117_PokemonDayCare/scripts.pory"
	release
# 28 "data/maps/Route117_PokemonDayCare/scripts.pory"
	
# 29 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_Text_Fun:
# 30 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I'm having a lot of fun\n"
# 31 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "taking care of Pokémon\l"
# 32 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "in the Daycare every day.$"
# 33 "data/maps/Route117_PokemonDayCare/scripts.pory"
	
# 34 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_Text_DittoWoman:
# 35 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I have this rare Pokémon.\p"
# 36 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Someone forgot about it at\n"
# 37 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "the Daycare and since nobody took\n"
# 38 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "it in, I'm keeping it.\p"
# 39 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Sadly, I'm not a Trainer so I\n"
# 40 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "can't help it grow stronger.\p"
# 41 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "You are a Trainer, right?\n"
# 42 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I see your Pokémon radiating life.\p"
# 43 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "So, what do say?\n"
# 44 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Will you take this Ditto?$"
# 45 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 46 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_Text_Adventures:
# 47 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I hope you take it on a lot\n"
# 48 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "of fun adventures.$"
# 49 "data/maps/Route117_PokemonDayCare/scripts.pory"
	
# 50 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_Text_Woman:
# 51 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "That Pokémon has a lot of\n"
# 52 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "friends here at the Daycare.\p"
# 53 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "It'd be bad if you would\n"
# 54 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "let us take care of it every\l"
# 55 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "once in a while.\p"
# 56 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "As long as you don't forget\n"
# 57 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "about it, of course!$"
# 58 "data/maps/Route117_PokemonDayCare/scripts.pory"
	
# 59 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_Text_AsYouWishThen:
# 60 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "As you wish, then…\p"
# 61 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "If you have a change of heart about\n"
# 62 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "this, I will be here.$"
# 63 "data/maps/Route117_PokemonDayCare/scripts.pory"
	
# 64 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_Text_NoRoomForThis:
# 65 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
# 66 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "There's no room for this Pokémon…$"
# 67 "data/maps/Route117_PokemonDayCare/scripts.pory"
	
# 68 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_Text_RecivedDitto:
# 69 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "{PLAYER} received a Ditto!$"

Route117_PokemonDayCare_DittoWoman::
# 73 "data/maps/Route117_PokemonDayCare/scripts.pory"
	lock
# 74 "data/maps/Route117_PokemonDayCare/scripts.pory"
	faceplayer
# 75 "data/maps/Route117_PokemonDayCare/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_06, Route117_PokemonDayCare_DittoWoman_2
# 78 "data/maps/Route117_PokemonDayCare/scripts.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SWAGGER, Route117_PokemonDayCare_DittoWoman_3
# 82 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_DittoWoman_Text_2, MSGBOX_YESNO
# 83 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route117_PokemonDayCare_DittoWoman_7
# 87 "data/maps/Route117_PokemonDayCare/scripts.pory"
	getpartysize
# 88 "data/maps/Route117_PokemonDayCare/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case PARTY_SIZE, Route117_PokemonDayCare_DittoWoman_11
# 93 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_DittoWoman_Text_5, MSGBOX_DEFAULT
# 94 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_SWAGGER
# 95 "data/maps/Route117_PokemonDayCare/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 96 "data/maps/Route117_PokemonDayCare/scripts.pory"
	message Route117_PokemonDayCare_DittoWoman_Text_6
# 97 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitfanfare
# 98 "data/maps/Route117_PokemonDayCare/scripts.pory"
	givecustommon SPECIES_DITTO, 10, ITEM_DESTINY_KNOT, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TRANSFORM
Route117_PokemonDayCare_DittoWoman_1:
# 103 "data/maps/Route117_PokemonDayCare/scripts.pory"
	release
	end

Route117_PokemonDayCare_DittoWoman_2:
# 76 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_DittoWoman_Text_0, MSGBOX_DEFAULT
	goto Route117_PokemonDayCare_DittoWoman_1

Route117_PokemonDayCare_DittoWoman_3:
# 79 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_DittoWoman_Text_1, MSGBOX_DEFAULT
	goto Route117_PokemonDayCare_DittoWoman_1

Route117_PokemonDayCare_DittoWoman_7:
# 84 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_DittoWoman_Text_3, MSGBOX_DEFAULT
	goto Route117_PokemonDayCare_DittoWoman_1

Route117_PokemonDayCare_DittoWoman_11:
# 90 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_DittoWoman_Text_4, MSGBOX_DEFAULT
	goto Route117_PokemonDayCare_DittoWoman_1


Route117_PokemonDayCare_DittoWoman_Text_0:
# 76 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I'm having a lot of fun taking care of\n"
	.string "Pokémon in the Daycare every day.$"

Route117_PokemonDayCare_DittoWoman_Text_1:
# 79 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "That Pokémon has a lot of friends here\n"
	.string "at the Daycare. It'd be bad if you would\l"
	.string "let us take care of it every once in a\l"
	.string "while. As long as you don't forget about\l"
	.string "it, of course!$"

Route117_PokemonDayCare_DittoWoman_Text_2:
# 82 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I have this rare Pokémon, someone\n"
	.string "forgot it here in the Daycare, since\l"
	.string "nobody took it in, I'm keeping it for\l"
	.string "now. Sadly, I'm not a Trainer so I can't\l"
	.string "help it grow stronger. You are a Trainer,\l"
	.string "right? I see your Pokémon radiating\l"
	.string "life. So, what do say? Can you take care\l"
	.string "of this Ditto?$"

Route117_PokemonDayCare_DittoWoman_Text_3:
# 84 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I hope I can find a good Trainer for\n"
	.string "this Pokémon...$"

Route117_PokemonDayCare_DittoWoman_Text_4:
# 90 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Oh? You've too many Pokémon. There's no\n"
	.string "room for this Pokémon…$"

Route117_PokemonDayCare_DittoWoman_Text_5:
# 93 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I hope you can take it on a lot of fun\n"
	.string "adventures.$"

Route117_PokemonDayCare_DittoWoman_Text_6:
# 96 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "{PLAYER} received a Ditto!.$"
