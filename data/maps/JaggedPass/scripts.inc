# 1 "data/maps/JaggedPass/scripts.pory"

# 2 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_HIDEOUT_GUARD, 5
# 3 "data/maps/JaggedPass/scripts.pory"

# 4 "data/maps/JaggedPass/scripts.pory"
JaggedPass_MapScripts:: @ 8230656
# 5 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 1
# 6 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_OnResume
# 7 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_OnTransition
# 8 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_OnLoad
# 9 "data/maps/JaggedPass/scripts.pory"
	.byte 0
# 10 "data/maps/JaggedPass/scripts.pory"

# 11 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnResume: @ 8230666
# 12 "data/maps/JaggedPass/scripts.pory"
	setstepcallback STEP_CB_ASH
# 13 "data/maps/JaggedPass/scripts.pory"
	compare VAR_JAGGED_PASS_STATE, 0
# 14 "data/maps/JaggedPass/scripts.pory"
	call_if_eq JaggedPass_EventScript_CheckHasMagmaEmblem
# 15 "data/maps/JaggedPass/scripts.pory"
	end
# 16 "data/maps/JaggedPass/scripts.pory"

# 17 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_CheckHasMagmaEmblem:: @ 8230674
# 18 "data/maps/JaggedPass/scripts.pory"
	checkitem ITEM_MAGMA_EMBLEM, 1
# 19 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, TRUE
# 20 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq JaggedPass_EventScript_SetReadyToOpenHideout
# 21 "data/maps/JaggedPass/scripts.pory"
	return
# 22 "data/maps/JaggedPass/scripts.pory"

# 23 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetReadyToOpenHideout:: @ 8230685
# 24 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 1
# 25 "data/maps/JaggedPass/scripts.pory"
	return
# 26 "data/maps/JaggedPass/scripts.pory"

# 27 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnTransition: @ 823068B
# 28 "data/maps/JaggedPass/scripts.pory"
	compare VAR_JAGGED_PASS_ASH_WEATHER, 1
# 29 "data/maps/JaggedPass/scripts.pory"
	call_if_eq JaggedPass_EventScript_SetWeatherAsh
# 30 "data/maps/JaggedPass/scripts.pory"
	end
# 31 "data/maps/JaggedPass/scripts.pory"

# 32 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherAsh:: @ 8230697
# 33 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 34 "data/maps/JaggedPass/scripts.pory"
	doweather
# 35 "data/maps/JaggedPass/scripts.pory"
	return
# 36 "data/maps/JaggedPass/scripts.pory"

# 37 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnLoad: @ 823069C
# 38 "data/maps/JaggedPass/scripts.pory"
	compare VAR_JAGGED_PASS_STATE, 1
# 39 "data/maps/JaggedPass/scripts.pory"
	goto_if_le JaggedPass_EventScript_ConcealHideoutEntrance
# 40 "data/maps/JaggedPass/scripts.pory"
	end
# 41 "data/maps/JaggedPass/scripts.pory"

# 42 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ConcealHideoutEntrance:: @ 82306A8
# 43 "data/maps/JaggedPass/scripts.pory"
	//setmetatile 16, 17, METATILE_Lavaridge_RockWall, 1
# 44 "data/maps/JaggedPass/scripts.pory"
	//setmetatile 16, 18, METATILE_Lavaridge_RockWall, 1
# 45 "data/maps/JaggedPass/scripts.pory"
	end
# 46 "data/maps/JaggedPass/scripts.pory"

# 47 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_OpenMagmaHideout:: @ 82306BB
# 48 "data/maps/JaggedPass/scripts.pory"
	lockall
# 49 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 50 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 51 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 52 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 53 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 54 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 55 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
# 56 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 57 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 58 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 59 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 16  @ num shakes
# 60 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 3   @ shake delay
# 61 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 62 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 63 "data/maps/JaggedPass/scripts.pory"
	playse SE_EFFECTIVE
# 64 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, 1
# 65 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, 0
# 66 "data/maps/JaggedPass/scripts.pory"
	special DrawWholeMapView
# 67 "data/maps/JaggedPass/scripts.pory"
	delay 30
# 68 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 2
# 69 "data/maps/JaggedPass/scripts.pory"
	waitse
# 70 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 71 "data/maps/JaggedPass/scripts.pory"
	end
# 72 "data/maps/JaggedPass/scripts.pory"

# 73 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaHideoutGuard:: @ 8230718
# 74 "data/maps/JaggedPass/scripts.pory"
	lockall
# 75 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
# 76 "data/maps/JaggedPass/scripts.pory"
	waitse
# 77 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 78 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_ExclamationMark
# 79 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 80 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_Delay48
# 81 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 82 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 83 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 84 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
# 85 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 86 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat
# 87 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
# 88 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 89 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 90 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 91 "data/maps/JaggedPass/scripts.pory"
	end
# 92 "data/maps/JaggedPass/scripts.pory"

# 93 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GuardDefeated:: @ 8230766
# 94 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 95 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 96 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
# 97 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 98 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 99 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 100 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 101 "data/maps/JaggedPass/scripts.pory"
	end
# 102 "data/maps/JaggedPass/scripts.pory"

# 103 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Eric:: @ 8230785
# 104 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ERIC, JaggedPass_Text_EricIntro, JaggedPass_Text_EricDefeat
# 105 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/JaggedPass/scripts.pory"
	end
# 107 "data/maps/JaggedPass/scripts.pory"

# 108 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Diana:: @ 823079C
# 109 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_DIANA_1, JaggedPass_Text_DianaIntro, JaggedPass_Text_DianaDefeat, JaggedPass_EventScript_RegisterDiana
# 110 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 111 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, TRUE
# 112 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq JaggedPass_EventScript_DianaRematch
# 113 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
# 114 "data/maps/JaggedPass/scripts.pory"
	release
# 115 "data/maps/JaggedPass/scripts.pory"
	end
# 116 "data/maps/JaggedPass/scripts.pory"

# 117 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterDiana:: @ 82307C8
# 118 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 119 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
# 120 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_DIANA_1
# 121 "data/maps/JaggedPass/scripts.pory"
	release
# 122 "data/maps/JaggedPass/scripts.pory"
	end
# 123 "data/maps/JaggedPass/scripts.pory"

# 124 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_DianaRematch:: @ 82307E4
# 125 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
# 126 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
# 127 "data/maps/JaggedPass/scripts.pory"
	end
# 128 "data/maps/JaggedPass/scripts.pory"

# 129 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Ethan:: @ 82307FB
# 130 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
# 131 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 132 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, TRUE
# 133 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq JaggedPass_EventScript_EthanRematch
# 134 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
# 135 "data/maps/JaggedPass/scripts.pory"
	release
# 136 "data/maps/JaggedPass/scripts.pory"
	end
# 137 "data/maps/JaggedPass/scripts.pory"

# 138 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterEthan:: @ 8230827
# 139 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 140 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
# 141 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_ETHAN_1
# 142 "data/maps/JaggedPass/scripts.pory"
	release
# 143 "data/maps/JaggedPass/scripts.pory"
	end
# 144 "data/maps/JaggedPass/scripts.pory"

# 145 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EthanRematch:: @ 8230843
# 146 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
# 147 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
# 148 "data/maps/JaggedPass/scripts.pory"
	end
# 149 "data/maps/JaggedPass/scripts.pory"

# 150 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Julio:: @ 823085A
# 151 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_JULIO, JaggedPass_Text_JulioIntro, JaggedPass_Text_JulioDefeat
# 152 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 153 "data/maps/JaggedPass/scripts.pory"
	end
# 154 "data/maps/JaggedPass/scripts.pory"

# 155 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Autumn:: @ 8230871
# 156 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_AUTUMN, JaggedPass_Text_AutumnIntro, JaggedPass_Text_AutumnDefeat
# 157 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 158 "data/maps/JaggedPass/scripts.pory"
	end
# 159 "data/maps/JaggedPass/scripts.pory"

# 160 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricIntro: @ 8230888
# 161 "data/maps/JaggedPass/scripts.pory"
	.string "Mt. Chimney's Jagged Pass…\p"
# 162 "data/maps/JaggedPass/scripts.pory"
	.string "Now this is what I've always wanted\n"
# 163 "data/maps/JaggedPass/scripts.pory"
	.string "in a mountain.\p"
# 164 "data/maps/JaggedPass/scripts.pory"
	.string "This jagged bumpiness…\n"
# 165 "data/maps/JaggedPass/scripts.pory"
	.string "It rocks my soul!$"
# 166 "data/maps/JaggedPass/scripts.pory"

# 167 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricDefeat: @ 82308FF
# 168 "data/maps/JaggedPass/scripts.pory"
	.string "Losing left me bitter!$"
# 169 "data/maps/JaggedPass/scripts.pory"

# 170 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricPostBattle: @ 8230916
# 171 "data/maps/JaggedPass/scripts.pory"
	.string "Yes, I did lose at Pokémon…\p"
# 172 "data/maps/JaggedPass/scripts.pory"
	.string "But, when it comes to the love of\n"
# 173 "data/maps/JaggedPass/scripts.pory"
	.string "the mountains, I have you beat!$"
# 174 "data/maps/JaggedPass/scripts.pory"

# 175 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaIntro: @ 8230974
# 176 "data/maps/JaggedPass/scripts.pory"
	.string "This place isn't your casual hike.\n"
# 177 "data/maps/JaggedPass/scripts.pory"
	.string "It's not suited for a picnic.$"
# 178 "data/maps/JaggedPass/scripts.pory"

# 179 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaDefeat: @ 82309B5
# 180 "data/maps/JaggedPass/scripts.pory"
	.string "Ohhh, no!\n"
# 181 "data/maps/JaggedPass/scripts.pory"
	.string "The ground is too bumpy…$"
# 182 "data/maps/JaggedPass/scripts.pory"

# 183 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostBattle: @ 82309D8
# 184 "data/maps/JaggedPass/scripts.pory"
	.string "Did you know?\p"
# 185 "data/maps/JaggedPass/scripts.pory"
	.string "Some people cleverly ride their\n"
# 186 "data/maps/JaggedPass/scripts.pory"
	.string "bicycles up this horribly bumpy pass.$"
# 187 "data/maps/JaggedPass/scripts.pory"

# 188 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRegister: @ 8230A2C
# 189 "data/maps/JaggedPass/scripts.pory"
	.string "Will you ever be back in this area?\n"
# 190 "data/maps/JaggedPass/scripts.pory"
	.string "If you do return, I'd like a rematch.$"
# 191 "data/maps/JaggedPass/scripts.pory"

# 192 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchIntro: @ 8230A76
# 193 "data/maps/JaggedPass/scripts.pory"
	.string "Picnics are fun wherever you go.\n"
# 194 "data/maps/JaggedPass/scripts.pory"
	.string "Just like Pokémon!$"
# 195 "data/maps/JaggedPass/scripts.pory"

# 196 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchDefeat: @ 8230AAA
# 197 "data/maps/JaggedPass/scripts.pory"
	.string "I only lost because the ground is\n"
# 198 "data/maps/JaggedPass/scripts.pory"
	.string "too bumpy!$"
# 199 "data/maps/JaggedPass/scripts.pory"

# 200 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostRematch: @ 8230AD7
# 201 "data/maps/JaggedPass/scripts.pory"
	.string "I'll forget about losing and just\n"
# 202 "data/maps/JaggedPass/scripts.pory"
	.string "enjoy this bumpy hike.$"
# 203 "data/maps/JaggedPass/scripts.pory"

# 204 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanIntro: @ 8230B10
# 205 "data/maps/JaggedPass/scripts.pory"
	.string "Jagged Pass is hard to walk on.\n"
# 206 "data/maps/JaggedPass/scripts.pory"
	.string "It's a good place for training.$"
# 207 "data/maps/JaggedPass/scripts.pory"

# 208 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanDefeat: @ 8230B50
# 209 "data/maps/JaggedPass/scripts.pory"
	.string "It was all over while we were still\n"
# 210 "data/maps/JaggedPass/scripts.pory"
	.string "trying to find a good footing…$"
# 211 "data/maps/JaggedPass/scripts.pory"

# 212 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostBattle: @ 8230B93
# 213 "data/maps/JaggedPass/scripts.pory"
	.string "If I had an Acro Bike, I'd be able to\n"
# 214 "data/maps/JaggedPass/scripts.pory"
	.string "jump ledges.$"
# 215 "data/maps/JaggedPass/scripts.pory"

# 216 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRegister: @ 8230BC6
# 217 "data/maps/JaggedPass/scripts.pory"
	.string "When I get more used to this bumpiness,\n"
# 218 "data/maps/JaggedPass/scripts.pory"
	.string "I'll be sure to win!\p"
# 219 "data/maps/JaggedPass/scripts.pory"
	.string "Can you register me in your Pokénav?$"
# 220 "data/maps/JaggedPass/scripts.pory"

# 221 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchIntro: @ 8230C28
# 222 "data/maps/JaggedPass/scripts.pory"
	.string "I got used to this bumpiness.\n"
# 223 "data/maps/JaggedPass/scripts.pory"
	.string "I sing while I climb now.$"
# 224 "data/maps/JaggedPass/scripts.pory"

# 225 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchDefeat: @ 8230C60
# 226 "data/maps/JaggedPass/scripts.pory"
	.string "It's still not easy to battle on this\n"
# 227 "data/maps/JaggedPass/scripts.pory"
	.string "bumpy ground…$"
# 228 "data/maps/JaggedPass/scripts.pory"

# 229 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostRematch: @ 8230C94
# 230 "data/maps/JaggedPass/scripts.pory"
	.string "I should get an Acro Bike from Rydel\n"
# 231 "data/maps/JaggedPass/scripts.pory"
	.string "in Mauville City…$"
# 232 "data/maps/JaggedPass/scripts.pory"

# 233 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntIntro: @ 8230CCB
# 234 "data/maps/JaggedPass/scripts.pory"
	.string "Wah!\n"
# 235 "data/maps/JaggedPass/scripts.pory"
	.string "What are you doing here?\p"
# 236 "data/maps/JaggedPass/scripts.pory"
	.string "What am I doing in a place like this?\p"
# 237 "data/maps/JaggedPass/scripts.pory"
	.string "What business is it of yours?$"
# 238 "data/maps/JaggedPass/scripts.pory"

# 239 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntDefeat: @ 8230D2D
# 240 "data/maps/JaggedPass/scripts.pory"
	.string "Urrrgh…\p"
# 241 "data/maps/JaggedPass/scripts.pory"
	.string "I should've ducked into our Hideout\n"
# 242 "data/maps/JaggedPass/scripts.pory"
	.string "right away…$"
# 243 "data/maps/JaggedPass/scripts.pory"

# 244 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GoWhereverYouWant: @ 8230D65
# 245 "data/maps/JaggedPass/scripts.pory"
	.string "Okay, oh-kay!\n"
# 246 "data/maps/JaggedPass/scripts.pory"
	.string "I admit it--you're strong!\p"
# 247 "data/maps/JaggedPass/scripts.pory"
	.string "Don't worry about me.\n"
# 248 "data/maps/JaggedPass/scripts.pory"
	.string "Go wherever you want!$"
# 249 "data/maps/JaggedPass/scripts.pory"

# 250 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_BoulderShakingInResponseToEmblem: @ 8230DBA
# 251 "data/maps/JaggedPass/scripts.pory"
	.string "Oh! This boulder is shaking in response\n"
# 252 "data/maps/JaggedPass/scripts.pory"
	.string "to the Magma Emblem!$"
# 253 "data/maps/JaggedPass/scripts.pory"

# 254 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioIntro: @ 8230DF7
# 255 "data/maps/JaggedPass/scripts.pory"
	.string "Aiyeeh! It's awfully scary to shoot\n"
# 256 "data/maps/JaggedPass/scripts.pory"
	.string "down the mountain in one go!$"
# 257 "data/maps/JaggedPass/scripts.pory"

# 258 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioDefeat: @ 8230E38
# 259 "data/maps/JaggedPass/scripts.pory"
	.string "I feel like I'm falling apart…$"
# 260 "data/maps/JaggedPass/scripts.pory"

# 261 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioPostBattle: @ 8230E57
# 262 "data/maps/JaggedPass/scripts.pory"
	.string "My bicycle bounced around so much,\n"
# 263 "data/maps/JaggedPass/scripts.pory"
	.string "my rear end's sore…$"
# 264 "data/maps/JaggedPass/scripts.pory"

# 265 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnIntro: @ 8230E8E
# 266 "data/maps/JaggedPass/scripts.pory"
	.string "I climb this hill every day.\n"
# 267 "data/maps/JaggedPass/scripts.pory"
	.string "I have confidence in my strength!$"
# 268 "data/maps/JaggedPass/scripts.pory"

# 269 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnDefeat: @ 8230ECD
# 270 "data/maps/JaggedPass/scripts.pory"
	.string "Hmm…\n"
# 271 "data/maps/JaggedPass/scripts.pory"
	.string "What went wrong?$"
# 272 "data/maps/JaggedPass/scripts.pory"

# 273 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnPostBattle: @ 8230EE3
# 274 "data/maps/JaggedPass/scripts.pory"
	.string "What is that odd rock protrusion\n"
# 275 "data/maps/JaggedPass/scripts.pory"
	.string "a little up the hill from here?$"
