# 1 "data/maps/Route113/scripts.pory"

# 2 "data/maps/Route113/scripts.pory"
Route113_MapScripts:: @ 81F2153
# 3 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route113_OnResume
# 4 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_OnTransition
# 5 "data/maps/Route113/scripts.pory"
	.byte 0
# 6 "data/maps/Route113/scripts.pory"

# 7 "data/maps/Route113/scripts.pory"
Route113_OnResume: @ 81F215E
# 8 "data/maps/Route113/scripts.pory"
	setstepcallback STEP_CB_ASH
# 9 "data/maps/Route113/scripts.pory"
	end
# 10 "data/maps/Route113/scripts.pory"

# 11 "data/maps/Route113/scripts.pory"
Route113_OnTransition: @ 81F2161
# 12 "data/maps/Route113/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 13 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_CheckSetAshWeather
# 14 "data/maps/Route113/scripts.pory"
	end
# 15 "data/maps/Route113/scripts.pory"

# 16 "data/maps/Route113/scripts.pory"
Route113_EventScript_CheckSetAshWeather:: @ 81F216A
# 17 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_DontSetAshWeather
# 18 "data/maps/Route113/scripts.pory"
	return
# 19 "data/maps/Route113/scripts.pory"

# 20 "data/maps/Route113/scripts.pory"
Route113_EventScript_DontSetAshWeather:: @ 81F2189
# 21 "data/maps/Route113/scripts.pory"
	return
# 22 "data/maps/Route113/scripts.pory"

# 23 "data/maps/Route113/scripts.pory"
Route113_EventScript_Gentleman:: @ 81F218A
# 24 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
# 25 "data/maps/Route113/scripts.pory"
	end
# 26 "data/maps/Route113/scripts.pory"

# 27 "data/maps/Route113/scripts.pory"
Route113_EventScript_NinjaBoy:: @ 81F2193
# 28 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
# 29 "data/maps/Route113/scripts.pory"
	end
# 30 "data/maps/Route113/scripts.pory"

# 31 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSign111:: @ 81F219C
# 32 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
# 33 "data/maps/Route113/scripts.pory"
	end
# 34 "data/maps/Route113/scripts.pory"

# 35 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSignFallarbor:: @ 81F21A5
# 36 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
# 37 "data/maps/Route113/scripts.pory"
	end
# 38 "data/maps/Route113/scripts.pory"

# 39 "data/maps/Route113/scripts.pory"
Route113_EventScript_GlassWorkshopSign:: @ 81F21AE
# 40 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
# 41 "data/maps/Route113/scripts.pory"
	end
# 42 "data/maps/Route113/scripts.pory"

# 43 "data/maps/Route113/scripts.pory"
Route113_EventScript_TrainerTipsRegisterKeyItems:: @ 81F21B7
# 44 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TrainerTipsRegisterKeyItems, MSGBOX_SIGN
# 45 "data/maps/Route113/scripts.pory"
	end
# 46 "data/maps/Route113/scripts.pory"

# 47 "data/maps/Route113/scripts.pory"
Route113_EventScript_Jaylen:: @ 81F21C0
# 48 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_JAYLEN, Route113_Text_JaylenIntro, Route113_Text_JaylenDefeat
# 49 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/Route113/scripts.pory"
	end
# 51 "data/maps/Route113/scripts.pory"

# 52 "data/maps/Route113/scripts.pory"
Route113_EventScript_Dillon:: @ 81F21D7
# 53 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_DILLON, Route113_Text_DillonIntro, Route113_Text_DillonDefeat
# 54 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/Route113/scripts.pory"
	end
# 56 "data/maps/Route113/scripts.pory"

# 57 "data/maps/Route113/scripts.pory"
Route113_EventScript_Madeline:: @ 81F21EE
# 58 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat, Route113_EventScript_RegisterMadeline
# 59 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 60 "data/maps/Route113/scripts.pory"
	compare VAR_RESULT, TRUE
# 61 "data/maps/Route113/scripts.pory"
	goto_if_eq Route113_EventScript_RematchMadeline
# 62 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostBattle, MSGBOX_DEFAULT
# 63 "data/maps/Route113/scripts.pory"
	release
# 64 "data/maps/Route113/scripts.pory"
	end
# 65 "data/maps/Route113/scripts.pory"

# 66 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterMadeline:: @ 81F221A
# 67 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 68 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelineRegister, MSGBOX_DEFAULT
# 70 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_MADELINE_1
# 71 "data/maps/Route113/scripts.pory"
	release
# 72 "data/maps/Route113/scripts.pory"
	end
# 73 "data/maps/Route113/scripts.pory"

# 74 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchMadeline:: @ 81F2239
# 75 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_MADELINE_1, Route113_Text_MadelineRematchIntro, Route113_Text_MadelineRematchDefeat
# 76 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostRematch, MSGBOX_AUTOCLOSE
# 77 "data/maps/Route113/scripts.pory"
	end
# 78 "data/maps/Route113/scripts.pory"

# 79 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lao:: @ 81F2250
# 80 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAO_1, Route113_Text_LaoIntro, Route113_Text_LaoDefeat, Route113_EventScript_RegisterLao
# 81 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 82 "data/maps/Route113/scripts.pory"
	compare VAR_RESULT, TRUE
# 83 "data/maps/Route113/scripts.pory"
	goto_if_eq Route113_EventScript_RematchLao
# 84 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostBattle, MSGBOX_DEFAULT
# 85 "data/maps/Route113/scripts.pory"
	release
# 86 "data/maps/Route113/scripts.pory"
	end
# 87 "data/maps/Route113/scripts.pory"

# 88 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterLao:: @ 81F227C
# 89 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 90 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoRegister, MSGBOX_DEFAULT
# 92 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_LAO_1
# 93 "data/maps/Route113/scripts.pory"
	release
# 94 "data/maps/Route113/scripts.pory"
	end
# 95 "data/maps/Route113/scripts.pory"

# 96 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchLao:: @ 81F229B
# 97 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_LAO_1, Route113_Text_LaoRematchIntro, Route113_Text_LaoRematchDefeat
# 98 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostRematch, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route113/scripts.pory"
	end
# 100 "data/maps/Route113/scripts.pory"

# 101 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lung:: @ 81F22B2
# 102 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LUNG, Route113_Text_LungIntro, Route113_Text_LungDefeat
# 103 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/Route113/scripts.pory"
	end
# 105 "data/maps/Route113/scripts.pory"

# 106 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tori:: @ 81F22C9
# 107 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_ToriIntro, Route113_Text_ToriDefeat, Route113_Text_ToriNotEnoughMons
# 108 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/Route113/scripts.pory"
	end
# 110 "data/maps/Route113/scripts.pory"

# 111 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tia:: @ 81F22E4
# 112 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_TiaIntro, Route113_Text_TiaDefeat, Route113_Text_TiaNotEnoughMons
# 113 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TiaPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route113/scripts.pory"
	end
# 115 "data/maps/Route113/scripts.pory"

# 116 "data/maps/Route113/scripts.pory"
Route113_EventScript_Sophie:: @ 81F22FF
# 117 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_SOPHIE, Route113_Text_SophieIntro, Route113_Text_SophieDefeat
# 118 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route113/scripts.pory"
	end
# 120 "data/maps/Route113/scripts.pory"

# 121 "data/maps/Route113/scripts.pory"
Route113_EventScript_Coby:: @ 81F2316
# 122 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_COBY, Route113_Text_CobyIntro, Route113_Text_CobyDefeat
# 123 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route113/scripts.pory"
	end
# 125 "data/maps/Route113/scripts.pory"

# 126 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lawrence:: @ 81F232D
# 127 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAWRENCE, Route113_Text_LawrenceIntro, Route113_Text_LawrenceDefeat
# 128 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LawrencePostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/Route113/scripts.pory"
	end
# 130 "data/maps/Route113/scripts.pory"

# 131 "data/maps/Route113/scripts.pory"
Route113_EventScript_Wyatt:: @ 81F2344
# 132 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_WYATT, Route113_Text_WyattIntro, Route113_Text_WyattDefeat
# 133 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route113/scripts.pory"
	end
# 135 "data/maps/Route113/scripts.pory"

# 136 "data/maps/Route113/scripts.pory"
Route113_Text_AshCanBeFashionedIntoGlass: @ 81F235B
# 137 "data/maps/Route113/scripts.pory"
	.string "Wahahaha! Today's technology is a\n"
# 138 "data/maps/Route113/scripts.pory"
	.string "wondrous thing!\p"
# 139 "data/maps/Route113/scripts.pory"
	.string "Take this volcanic ash here.\n"
# 140 "data/maps/Route113/scripts.pory"
	.string "It can be fashioned into glass.$"
# 141 "data/maps/Route113/scripts.pory"

# 142 "data/maps/Route113/scripts.pory"
Route113_Text_FunWalkingThroughAsh: @ 81F23CA
# 143 "data/maps/Route113/scripts.pory"
	.string "It's fun walking through the volcano's\n"
# 144 "data/maps/Route113/scripts.pory"
	.string "ashes on the ground and grass.\p"
# 145 "data/maps/Route113/scripts.pory"
	.string "You can see where you walked--it's\n"
# 146 "data/maps/Route113/scripts.pory"
	.string "really neat!$"
# 147 "data/maps/Route113/scripts.pory"

# 148 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSign111: @ 81F2440
# 149 "data/maps/Route113/scripts.pory"
	.string "Route 113\n"
# 150 "data/maps/Route113/scripts.pory"
	.string "{RIGHT_ARROW} Route 111$"
# 151 "data/maps/Route113/scripts.pory"

# 152 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSignFallarbor: @ 81F2456
# 153 "data/maps/Route113/scripts.pory"
	.string "Route 113\n"
# 154 "data/maps/Route113/scripts.pory"
	.string "{LEFT_ARROW} Fallarbor Town$"
# 155 "data/maps/Route113/scripts.pory"

# 156 "data/maps/Route113/scripts.pory"
Route113_Text_TrainerTipsRegisterKeyItems: @ 81F2471
# 157 "data/maps/Route113/scripts.pory"
	.string "Trainer Tips\p"
# 158 "data/maps/Route113/scripts.pory"
	.string "You may register one of the Key Items\n"
# 159 "data/maps/Route113/scripts.pory"
	.string "in your Bag as Select.\p"
# 160 "data/maps/Route113/scripts.pory"
	.string "Simply press Select to use\n"
# 161 "data/maps/Route113/scripts.pory"
	.string "the registered item conveniently.$"
# 162 "data/maps/Route113/scripts.pory"

# 163 "data/maps/Route113/scripts.pory"
Route113_Text_GlassWorkshopSign: @ 81F24F8
# 164 "data/maps/Route113/scripts.pory"
	.string "Glass Workshop\n"
# 165 "data/maps/Route113/scripts.pory"
	.string "“Turning Volcanic Ash into Glass Items”$"
