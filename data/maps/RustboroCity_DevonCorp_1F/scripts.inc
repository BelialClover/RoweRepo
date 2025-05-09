# 1 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
.set LOCALID_STAIR_GUARD, 2
# 3 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_MapScripts:: @ 8211245
# 5 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.byte 0
# 7 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 8 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_OnTransition: @ 821124B
# 9 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 10 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 11 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_BlockStairs:: @ 8211255
# 12 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectxyperm LOCALID_STAIR_GUARD, 14, 2
# 13 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectmovementtype LOCALID_STAIR_GUARD, MOVEMENT_TYPE_FACE_DOWN
# 14 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	return
# 15 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 16 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee:: @ 8211261
# 17 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 18 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 19 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered
# 20 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright
# 21 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
# 22 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 23 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 24 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 25 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright:: @ 821127F
# 26 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
# 27 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 28 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 29 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 30 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered:: @ 8211289
# 31 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
# 32 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 33 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 34 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 35 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard:: @ 8211293
# 36 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 37 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 38 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
# 39 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
# 40 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 41 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 42 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 43 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome:: @ 82112BA
# 44 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
# 45 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 46 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 47 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 48 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GotRobbed:: @ 82112C4
# 49 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
# 50 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 51 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 52 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 53 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp:: @ 82112F5
# 54 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 55 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 56 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 57 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 58 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed:: @ 82112FF
# 59 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
# 60 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 61 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 62 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 63 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay:: @ 8211309
# 64 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
# 65 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 66 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 67 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay:: @ 8211312
# 68 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
# 69 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 70 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 71 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp: @ 821131B
# 72 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hello and welcome to the Devon\n"
# 73 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Corporation.\p"
# 74 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "We're proud producers of items and\n"
# 75 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "medicine that enhance your life.$"
# 76 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 77 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_StaffGotRobbed: @ 821138B
# 78 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "One of our research staff stupidly\n"
# 79 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "got robbed of an important parcel.$"
# 80 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 81 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct: @ 82113D1
# 82 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hey, those Running Shoes!\n"
# 83 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "They're one of our products!\p"
# 84 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It makes me happy when I see someone\n"
# 85 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "using something we made.$"
# 86 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 87 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright: @ 8211446
# 88 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "That stolen parcel…\p"
# 89 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Well, sure it's important, but it's not\n"
# 90 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "anything that anyone can use.\p"
# 91 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "In my estimation, that robber must not\n"
# 92 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "have been very bright.$"
# 93 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 94 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered: @ 82114DE
# 95 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It sounds like they've recovered\n"
# 96 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "the ripped-off Devon Goods.$"
# 97 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 98 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter: @ 821151B
# 99 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I'm sorry, only authorized people\n"
# 100 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "are allowed to enter here.$"
# 101 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 102 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed: @ 8211558
# 103 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It's beyond stupid.\n"
# 104 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "How could we get robbed?$"
# 105 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 106 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere: @ 8211585
# 107 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hi, there!\n"
# 108 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "You're always welcome here!$"
# 109 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 110 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay: @ 82115AC
# 111 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Samples of rocks and metal are\n"
# 112 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "displayed in the glass case.\p"
# 113 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "There's a panel with some writing\n"
# 114 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "on it…\p"
# 115 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Devon Corporation got its start as\n"
# 116 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "a producer of stones from quarries.\p"
# 117 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“The company also produced iron from\n"
# 118 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "filings in the sand.\p"
# 119 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“From that humble start as a producer\n"
# 120 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "of raw materials, Devon developed.\p"
# 121 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Devon is now a manufacturer of a wide\n"
# 122 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "range of industrial products.”$"
# 123 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 124 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ProductDisplay: @ 8211722
# 125 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prototypes and test products fill\n"
# 126 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "the glass display case.\p"
# 127 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "There's a panel with a description…\p"
# 128 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“In addition to industrial products,\n"
# 129 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Devon now markets sundries and\l"
# 130 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "pharmaceuticals for better lifestyles.\p"
# 131 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Recently, Devon has begun marketing\n"
# 132 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "tools for Pokémon Trainers, including\l"
# 133 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Poké Balls and Pokénav systems.”$"

RustboroCity_DevonCorp_1F_EventScript_Greeter::
# 137 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 138 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 139 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	message gText_HowMayIServeYou
# 140 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmessage
# 141 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	compare VAR_NUM_BADGES, 8
	goto_if_lt RustboroCity_DevonCorp_1F_EventScript_Greeter_2
# 145 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	pokemart RustboroCity_DevonCorp_1F_EventScript_Ballmart2
RustboroCity_DevonCorp_1F_EventScript_Greeter_1:
# 147 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 148 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_1F_EventScript_Greeter_2:
# 142 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	pokemart RustboroCity_DevonCorp_1F_EventScript_Ballmart
	goto RustboroCity_DevonCorp_1F_EventScript_Greeter_1


	.align 2
# 152 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Ballmart:
# 153 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_POKE_BALL_SEAL
# 154 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL_SEAL
# 155 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL_SEAL
# 156 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_PREMIER_BALL_SEAL
# 157 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_LUXURY_BALL_SEAL
# 158 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_HEAL_BALL_SEAL
# 159 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_TIMER_BALL_SEAL
# 160 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_REPEAT_BALL_SEAL
# 161 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_NET_BALL_SEAL
# 162 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_DIVE_BALL_SEAL
	.2byte ITEM_NONE

	.align 2
# 166 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Ballmart2:
# 167 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_POKE_BALL_SEAL
# 168 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL_SEAL
# 169 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL_SEAL
# 170 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_PREMIER_BALL_SEAL
# 171 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_LUXURY_BALL_SEAL
# 172 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_HEAL_BALL_SEAL
# 173 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_TIMER_BALL_SEAL
# 174 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_REPEAT_BALL_SEAL
# 175 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_NET_BALL_SEAL
# 176 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_DIVE_BALL_SEAL
# 177 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_LURE_BALL_SEAL
# 178 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_LEVEL_BALL_SEAL
# 179 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_MOON_BALL_SEAL
# 180 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_HEAVY_BALL_SEAL
# 181 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_FAST_BALL_SEAL
# 182 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_FRIEND_BALL_SEAL
# 183 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_LOVE_BALL_SEAL
# 184 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_DREAM_BALL_SEAL
# 185 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_WATER_MEMORY
# 186 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_STEEL_MEMORY
# 187 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_ROCK_MEMORY
# 188 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_PSYCHIC_MEMORY
# 189 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_POISON_MEMORY
# 190 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_ICE_MEMORY
# 191 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_GROUND_MEMORY
# 192 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_GRASS_MEMORY
# 193 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_GHOST_MEMORY
# 194 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_FLYING_MEMORY
# 195 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_FIRE_MEMORY
# 196 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_FIGHTING_MEMORY
# 197 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_FAIRY_MEMORY
# 198 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_ELECTRIC_MEMORY
# 199 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_DRAGON_MEMORY
# 200 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_DARK_MEMORY
# 201 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_BUG_MEMORY
# 202 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_EXIOLITE
# 203 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_EVIOLITE
# 204 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_EVERSTONE
# 205 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
	.2byte ITEM_NONE
