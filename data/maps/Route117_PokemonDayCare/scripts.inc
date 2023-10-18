Route117_PokemonDayCare_MapScripts:: @ 822BBB1
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_PokemonDayCare_OnTransition
	.byte 0

Route117_PokemonDayCare_OnTransition: @ 822BBB7
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
	end
	
Route117_PokemonDayCare_EventScript_Daycare_Fun::
	msgbox Route117_PokemonDayCare_Text_Fun, MSGBOX_DEFAULT
	release
	end
	
Route117_PokemonDayCare_EventScript_ReceivedDitto::
	msgbox Route117_PokemonDayCare_Text_Woman, MSGBOX_DEFAULT
	release
	end
	
Route117_PokemonDayCare_EventScript_DeclineDitto::
	msgbox Route117_PokemonDayCare_Text_AsYouWishThen, MSGBOX_DEFAULT
	release
	end
	
Route117_PokemonDayCare_EventScript_NoRoomForThis::
	msgbox Route117_PokemonDayCare_Text_NoRoomForThis, MSGBOX_DEFAULT
	release
	
Route117_PokemonDayCare_Text_Fun:
	.string "I'm having a lot of fun\n"
	.string "taking care of Pokémon\l"
	.string "in the Daycare every day.$"
	
Route117_PokemonDayCare_Text_DittoWoman:
	.string "I have this rare Pokémon.\p"
	.string "Someone forgot about it at\n"
	.string "the Daycare and since nobody took\n"
	.string "it in, I'm keeping it.\p"
	.string "Sadly, I'm not a Trainer so I\n"
	.string "can't help it grow stronger.\p"
	.string "You are a Trainer, right?\n"
	.string "I see your Pokémon radiating life.\p"
	.string "So, what do say?\n"
	.string "Will you take this Ditto?$"

Route117_PokemonDayCare_Text_Adventures:
	.string "I hope you take it on a lot\n"
	.string "of fun adventures.$"
	
Route117_PokemonDayCare_Text_Woman:
	.string "That Pokémon has a lot of\n"
	.string "friends here at the Daycare.\p"
	.string "It'd be bad if you would\n"
	.string "let us take care of it every\l"
	.string "once in a while.\p"
	.string "As long as you don't forget\n"
	.string "about it, of course!$"
	
Route117_PokemonDayCare_Text_AsYouWishThen:
	.string "As you wish, then…\p"
	.string "If you have a change of heart about\n"
	.string "this, I will be here.$"
	
Route117_PokemonDayCare_Text_NoRoomForThis:
	.string "Oh? You've too many Pokémon.\n"
	.string "There's no room for this Pokémon…$"
	
Route117_PokemonDayCare_Text_RecivedDitto:
	.string "{PLAYER} received a Ditto!$"

Route117_PokemonDayCare_DittoWoman::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_TM40, Route117_PokemonDayCare_DittoWoman_2
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SWAGGER, Route117_PokemonDayCare_DittoWoman_3
	msgbox Route117_PokemonDayCare_DittoWoman_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route117_PokemonDayCare_DittoWoman_7
	getpartysize
	switch VAR_RESULT
	case PARTY_SIZE, Route117_PokemonDayCare_DittoWoman_11
	msgbox Route117_PokemonDayCare_DittoWoman_Text_5, MSGBOX_DEFAULT
	setflag FLAG_MOVE_TUTOR_TAUGHT_SWAGGER
	playfanfare MUS_OBTAIN_ITEM
	message Route117_PokemonDayCare_DittoWoman_Text_6
	waitfanfare
	givecustommon SPECIES_DITTO, 10, ITEM_DESTINY_KNOT, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TRANSFORM
Route117_PokemonDayCare_DittoWoman_1:
	release
	end

Route117_PokemonDayCare_DittoWoman_2:
	msgbox Route117_PokemonDayCare_DittoWoman_Text_0, MSGBOX_DEFAULT
	goto Route117_PokemonDayCare_DittoWoman_1

Route117_PokemonDayCare_DittoWoman_3:
	msgbox Route117_PokemonDayCare_DittoWoman_Text_1, MSGBOX_DEFAULT
	goto Route117_PokemonDayCare_DittoWoman_1

Route117_PokemonDayCare_DittoWoman_7:
	msgbox Route117_PokemonDayCare_DittoWoman_Text_3, MSGBOX_DEFAULT
	goto Route117_PokemonDayCare_DittoWoman_1

Route117_PokemonDayCare_DittoWoman_11:
	msgbox Route117_PokemonDayCare_DittoWoman_Text_4, MSGBOX_DEFAULT
	goto Route117_PokemonDayCare_DittoWoman_1


Route117_PokemonDayCare_DittoWoman_Text_0:
	.string "I'm having a lot of fun taking care of\n"
	.string "Pokémon in the Daycare every day.$"

Route117_PokemonDayCare_DittoWoman_Text_1:
	.string "That Pokémon has a lot of friends here\n"
	.string "at the Daycare. It'd be bad if you would\l"
	.string "let us take care of it every once in a\l"
	.string "while. As long as you don't forget\l"
	.string "about it, of course!$"

Route117_PokemonDayCare_DittoWoman_Text_2:
	.string "I have this rare Pokémon, someone\n"
	.string "forgot it here in the Daycare, since\l"
	.string "nobody took it in, I'm keeping it for\l"
	.string "now. Sadly, I'm not a Trainer so I can't\l"
	.string "help it grow stronger. You are a\l"
	.string "Trainer, right? I see your Pokémon\l"
	.string "radiating life. So, what do say? Can you\l"
	.string "take care of this Ditto?$"

Route117_PokemonDayCare_DittoWoman_Text_3:
	.string "I hope I can find a good Trainer for\n"
	.string "this Pokémon...$"

Route117_PokemonDayCare_DittoWoman_Text_4:
	.string "Oh? You've too many Pokémon. There's no\n"
	.string "room for this Pokémon…$"

Route117_PokemonDayCare_DittoWoman_Text_5:
	.string "I hope you can take it on a lot of fun\n"
	.string "adventures.$"

Route117_PokemonDayCare_DittoWoman_Text_6:
	.string "{PLAYER} received a Ditto!.$"
