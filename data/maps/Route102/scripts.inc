# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
Route102_MapScripts:: @ 81EC0E0
# 3 "data/maps/Route102/scripts.pory"
	.byte 0
# 4 "data/maps/Route102/scripts.pory"

# 5 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy:: @ 81EC0E1
# 6 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 7 "data/maps/Route102/scripts.pory"
	end
# 8 "data/maps/Route102/scripts.pory"

# 9 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale:: @ 81EC0EA
# 10 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 11 "data/maps/Route102/scripts.pory"
	end
# 12 "data/maps/Route102/scripts.pory"

# 13 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg:: @ 81EC0F3
# 14 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 15 "data/maps/Route102/scripts.pory"
	end
# 16 "data/maps/Route102/scripts.pory"

# 17 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy:: @ 81EC0FC
# 18 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 19 "data/maps/Route102/scripts.pory"
	end
# 20 "data/maps/Route102/scripts.pory"

# 21 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin:: @ 81EC105
# 22 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 23 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 24 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, TRUE
# 25 "data/maps/Route102/scripts.pory"
	goto_if_eq Route102_EventScript_CalvinRematch
# 26 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 27 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 28 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, FALSE
# 29 "data/maps/Route102/scripts.pory"
	goto_if_eq Route102_EventScript_CalvinTryRegister
# 30 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 31 "data/maps/Route102/scripts.pory"
	release
# 32 "data/maps/Route102/scripts.pory"
	end
# 33 "data/maps/Route102/scripts.pory"

# 34 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle:: @ 81EC146
# 35 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 36 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 38 "data/maps/Route102/scripts.pory"
	release
# 39 "data/maps/Route102/scripts.pory"
	end
# 40 "data/maps/Route102/scripts.pory"

# 41 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall:: @ 81EC157
# 42 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 43 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 44 "data/maps/Route102/scripts.pory"
	release
# 45 "data/maps/Route102/scripts.pory"
	end
# 46 "data/maps/Route102/scripts.pory"

# 47 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister:: @ 81EC170
# 48 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 49 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 50 "data/maps/Route102/scripts.pory"
	release
# 51 "data/maps/Route102/scripts.pory"
	end
# 52 "data/maps/Route102/scripts.pory"

# 53 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister:: @ 81EC183
# 54 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 55 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 56 "data/maps/Route102/scripts.pory"
	release
# 57 "data/maps/Route102/scripts.pory"
	end
# 58 "data/maps/Route102/scripts.pory"

# 59 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch:: @ 81EC19C
# 60 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 61 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route102/scripts.pory"
	end
# 63 "data/maps/Route102/scripts.pory"

# 64 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick:: @ 81EC1B3
# 65 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 66 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/Route102/scripts.pory"
	end
# 68 "data/maps/Route102/scripts.pory"

# 69 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana:: @ 81EC1CA
# 70 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 71 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/Route102/scripts.pory"
	end
# 73 "data/maps/Route102/scripts.pory"

# 74 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen:: @ 81EC1E1
# 75 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 76 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 77 "data/maps/Route102/scripts.pory"
	end
# 78 "data/maps/Route102/scripts.pory"

# 79 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon: @ 81EC1F8
# 80 "data/maps/Route102/scripts.pory"
	.string "Wally: {PLAYER}…\n"
# 81 "data/maps/Route102/scripts.pory"
	.string "Pokémon hide in tall grass like this,\l"
# 82 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 83 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 84 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 85 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 86 "data/maps/Route102/scripts.pory"

# 87 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt: @ 81EC271
# 88 "data/maps/Route102/scripts.pory"
	.string "Wally: I did it… It's my…\n"
# 89 "data/maps/Route102/scripts.pory"
	.string "My Pokémon!$"
# 90 "data/maps/Route102/scripts.pory"

# 91 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack: @ 81EC297
# 92 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 93 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the Gym!$"
# 94 "data/maps/Route102/scripts.pory"

# 95 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall: @ 81EC2C0
# 96 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 97 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 98 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 99 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 100 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 101 "data/maps/Route102/scripts.pory"

# 102 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon: @ 81EC32E
# 103 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 104 "data/maps/Route102/scripts.pory"
	.string "Pokémon!$"
# 105 "data/maps/Route102/scripts.pory"

# 106 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale: @ 81EC35B
# 107 "data/maps/Route102/scripts.pory"
	.string "Route 102\n"
# 108 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} Oldale Town$"
# 109 "data/maps/Route102/scripts.pory"

# 110 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg: @ 81EC373
# 111 "data/maps/Route102/scripts.pory"
	.string "Route 102\n"
# 112 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} Petalburg City$"
