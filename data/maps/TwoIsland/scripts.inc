# 1 "data/maps/TwoIsland/scripts.pory"

# 2 "data/maps/TwoIsland/scripts.pory"
.set LOCALID_SAILOR, 1
# 3 "data/maps/TwoIsland/scripts.pory"

# 4 "data/maps/TwoIsland/scripts.pory"
TwoIsland_MapScripts:: @ 8167564
# 5 "data/maps/TwoIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_OnTransition
# 6 "data/maps/TwoIsland/scripts.pory"
	.byte 0
# 7 "data/maps/TwoIsland/scripts.pory"

# 8 "data/maps/TwoIsland/scripts.pory"
TwoIsland_OnTransition:: @ 816756
# 9 "data/maps/TwoIsland/scripts.pory"
	call TwoIsland_EventScript_SetShopState
# 10 "data/maps/TwoIsland/scripts.pory"
	setflag FLAG_VISITED_TWO_ISLAND
# 11 "data/maps/TwoIsland/scripts.pory"
	end
# 12 "data/maps/TwoIsland/scripts.pory"

# 13 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopState:: @ 8167576
# 14 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateDefault
# 15 "data/maps/TwoIsland/scripts.pory"
	end
# 16 "data/maps/TwoIsland/scripts.pory"

# 17 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterHoennLink:: @ 8167597
# 18 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded3
# 19 "data/maps/TwoIsland/scripts.pory"
	end
# 20 "data/maps/TwoIsland/scripts.pory"

# 21 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterChampion:: @ 81675B8
# 22 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded2
# 23 "data/maps/TwoIsland/scripts.pory"
	end
# 24 "data/maps/TwoIsland/scripts.pory"

# 25 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterLostelleRescue:: @ 81675D9
# 26 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded1
# 27 "data/maps/TwoIsland/scripts.pory"
	end
# 28 "data/maps/TwoIsland/scripts.pory"

# 29 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopStateDefault:: @ 81675E8
# 30 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopInitial
# 31 "data/maps/TwoIsland/scripts.pory"
	end
# 32 "data/maps/TwoIsland/scripts.pory"

# 33 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopInitial:: @ 81675EE
# 34 "data/maps/TwoIsland/scripts.pory"
	return
# 35 "data/maps/TwoIsland/scripts.pory"

# 36 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopExpanded1:: @ 81675F4
# 37 "data/maps/TwoIsland/scripts.pory"
	return
# 38 "data/maps/TwoIsland/scripts.pory"

# 39 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopExpanded2:: @ 81675FD
# 40 "data/maps/TwoIsland/scripts.pory"
	return
# 41 "data/maps/TwoIsland/scripts.pory"

# 42 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopExpanded3:: @ 8167606
# 43 "data/maps/TwoIsland/scripts.pory"
	return
# 44 "data/maps/TwoIsland/scripts.pory"

# 45 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_Clerk:: @ 816760F
# 46 "data/maps/TwoIsland/scripts.pory"
	lock
# 47 "data/maps/TwoIsland/scripts.pory"
	faceplayer
# 48 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_06, TwoIsland_EventScript_ClerkShopExpanded3
# 49 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_04, TwoIsland_EventScript_ClerkShopExpanded2
# 50 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_02, TwoIsland_EventScript_ClerkShopExpanded1
# 51 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopInitial
# 52 "data/maps/TwoIsland/scripts.pory"
	end
# 53 "data/maps/TwoIsland/scripts.pory"

# 54 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded3:: @ 8167646
# 55 "data/maps/TwoIsland/scripts.pory"
	message TwoIsland_Text_BringingItemsFromDistantLands
# 56 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 57 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded3
# 58 "data/maps/TwoIsland/scripts.pory"
	end
# 59 "data/maps/TwoIsland/scripts.pory"

# 60 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded2:: @ 816765E
# 61 "data/maps/TwoIsland/scripts.pory"
	message TwoIsland_Text_HopeYouGiveItYourBest
# 62 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 63 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded2
# 64 "data/maps/TwoIsland/scripts.pory"
	end
# 65 "data/maps/TwoIsland/scripts.pory"

# 66 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded1:: @ 8167676
# 67 "data/maps/TwoIsland/scripts.pory"
	message TwoIsland_Text_AddedMerchandiseForLostelle
# 68 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 69 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded1
# 70 "data/maps/TwoIsland/scripts.pory"
	end
# 71 "data/maps/TwoIsland/scripts.pory"

# 72 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ClerkShopInitial:: @ 816768E
# 73 "data/maps/TwoIsland/scripts.pory"
	message TwoIsland_Text_WelcomeToShopMerchandiseLimited
# 74 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 75 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopInitial
# 76 "data/maps/TwoIsland/scripts.pory"
	end
# 77 "data/maps/TwoIsland/scripts.pory"

# 78 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ClerkShopSkipIntro:: @ 81676A6
# 79 "data/maps/TwoIsland/scripts.pory"
	message gText_HowMayIServeYou
# 80 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 81 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopInitial
# 82 "data/maps/TwoIsland/scripts.pory"
	end
# 83 "data/maps/TwoIsland/scripts.pory"

# 84 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ShopInitial:: @ 81676D3
# 85 "data/maps/TwoIsland/scripts.pory"
	pokemart TwoIsland_Items_ShopInitial
# 86 "data/maps/TwoIsland/scripts.pory"
	msgbox gText_PleaseComeAgain
# 87 "data/maps/TwoIsland/scripts.pory"
	release
# 88 "data/maps/TwoIsland/scripts.pory"
	end
# 89 "data/maps/TwoIsland/scripts.pory"

# 90 "data/maps/TwoIsland/scripts.pory"
	.align 2
# 91 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Items_ShopInitial:: @ 81676E4
# 92 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 93 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 94 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 95 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_NONE
# 96 "data/maps/TwoIsland/scripts.pory"
	release
# 97 "data/maps/TwoIsland/scripts.pory"
	end
# 98 "data/maps/TwoIsland/scripts.pory"

# 99 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ShopExpanded1:: @ 81676EC
# 100 "data/maps/TwoIsland/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded1
# 101 "data/maps/TwoIsland/scripts.pory"
	msgbox gText_PleaseComeAgain
# 102 "data/maps/TwoIsland/scripts.pory"
	release
# 103 "data/maps/TwoIsland/scripts.pory"
	end
# 104 "data/maps/TwoIsland/scripts.pory"

# 105 "data/maps/TwoIsland/scripts.pory"
	.align 2
# 106 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Items_ShopExpanded1:: @ 81676FC
# 107 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 108 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 109 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SODA_POP
# 110 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 111 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 112 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 113 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_NONE
# 114 "data/maps/TwoIsland/scripts.pory"
	release
# 115 "data/maps/TwoIsland/scripts.pory"
	end
# 116 "data/maps/TwoIsland/scripts.pory"

# 117 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ShopExpanded2:: @ 8167708
# 118 "data/maps/TwoIsland/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded2
# 119 "data/maps/TwoIsland/scripts.pory"
	msgbox gText_PleaseComeAgain
# 120 "data/maps/TwoIsland/scripts.pory"
	release
# 121 "data/maps/TwoIsland/scripts.pory"
	end
# 122 "data/maps/TwoIsland/scripts.pory"

# 123 "data/maps/TwoIsland/scripts.pory"
	.align 2
# 124 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Items_ShopExpanded2:: @ 8167718
# 125 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 126 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 127 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 128 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 129 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LEMONADE
# 130 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SODA_POP
# 131 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 132 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 133 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_STICK
# 134 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 135 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 136 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 137 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_NONE
# 138 "data/maps/TwoIsland/scripts.pory"
	release
# 139 "data/maps/TwoIsland/scripts.pory"
	end
# 140 "data/maps/TwoIsland/scripts.pory"

# 141 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ShopExpanded3:: @ 8167728
# 142 "data/maps/TwoIsland/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded3
# 143 "data/maps/TwoIsland/scripts.pory"
	msgbox gText_PleaseComeAgain
# 144 "data/maps/TwoIsland/scripts.pory"
	release
# 145 "data/maps/TwoIsland/scripts.pory"
	end
# 146 "data/maps/TwoIsland/scripts.pory"

# 147 "data/maps/TwoIsland/scripts.pory"
	.align 2
# 148 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Items_ShopExpanded3:: @ 8167738
# 149 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 150 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 151 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 152 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 153 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 154 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LEMONADE
# 155 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SODA_POP
# 156 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 157 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 158 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_STICK
# 159 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 160 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 161 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 162 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 163 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 164 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 165 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_NONE
# 166 "data/maps/TwoIsland/scripts.pory"
	release
# 167 "data/maps/TwoIsland/scripts.pory"
	end
# 168 "data/maps/TwoIsland/scripts.pory"

# 169 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_Sailor_2:: @ 816774C
# 170 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_FellowMovedFromCeladonCity, MSGBOX_NPC
# 171 "data/maps/TwoIsland/scripts.pory"
	end
# 172 "data/maps/TwoIsland/scripts.pory"

# 173 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_Woman:: @ 8167755
# 174 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_ShopkeepersBrotherWorksGameCorner, MSGBOX_NPC
# 175 "data/maps/TwoIsland/scripts.pory"
	end
# 176 "data/maps/TwoIsland/scripts.pory"

# 177 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_Beauty:: @ 816775E
# 178 "data/maps/TwoIsland/scripts.pory"
	lock
# 179 "data/maps/TwoIsland/scripts.pory"
	faceplayer
# 180 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_BrunoCameToIslandWhileBack
# 181 "data/maps/TwoIsland/scripts.pory"
	release
# 182 "data/maps/TwoIsland/scripts.pory"
	end
# 183 "data/maps/TwoIsland/scripts.pory"

# 184 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SuperNerd:: @ 8167777
# 185 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_BuyRareItemsHere, MSGBOX_NPC
# 186 "data/maps/TwoIsland/scripts.pory"
	end
# 187 "data/maps/TwoIsland/scripts.pory"

# 188 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_Boy:: @ 8167780
# 189 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_OldWomanLivesOutOnCape, MSGBOX_NPC
# 190 "data/maps/TwoIsland/scripts.pory"
	end
# 191 "data/maps/TwoIsland/scripts.pory"

# 192 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_LittleBoy:: @ 8167789
# 193 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_HaveYouTriedJumpingGame, MSGBOX_NPC
# 194 "data/maps/TwoIsland/scripts.pory"
	end
# 195 "data/maps/TwoIsland/scripts.pory"

# 196 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_IslandSign:: @ 8167792
# 197 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_IslandSign, MSGBOX_SIGN
# 198 "data/maps/TwoIsland/scripts.pory"
	end
# 199 "data/maps/TwoIsland/scripts.pory"

# 200 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_JoyfulGameCornerSign:: @ 816779B
# 201 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_JoyfulGameCornerSign, MSGBOX_SIGN
# 202 "data/maps/TwoIsland/scripts.pory"
	end
# 203 "data/maps/TwoIsland/scripts.pory"
	
# 204 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ClosedDoor:: @ 816779B
# 205 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_Island_Closed_Door, MSGBOX_SIGN
# 206 "data/maps/TwoIsland/scripts.pory"
	end
# 207 "data/maps/TwoIsland/scripts.pory"

# 208 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_FastCurrentSign:: @ 81677A4
# 209 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_DangerFastCurrent, MSGBOX_SIGN
# 210 "data/maps/TwoIsland/scripts.pory"
	end
# 211 "data/maps/TwoIsland/scripts.pory"

# 212 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_Island_Closed_Door:: @ 8181A88
# 213 "data/maps/TwoIsland/scripts.pory"
    .string "The door is closed$"
# 214 "data/maps/TwoIsland/scripts.pory"

# 215 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_IslandSign:: @ 8181A88
# 216 "data/maps/TwoIsland/scripts.pory"
    .string "Two Island\n"
# 217 "data/maps/TwoIsland/scripts.pory"
    .string "Boon Island for Two$"
# 218 "data/maps/TwoIsland/scripts.pory"

# 219 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_JoyfulGameCornerSign:: @ 8181AA7
# 220 "data/maps/TwoIsland/scripts.pory"
    .string "Skip & Chomp!\n"
# 221 "data/maps/TwoIsland/scripts.pory"
    .string "Joyful Game Corner$"
# 222 "data/maps/TwoIsland/scripts.pory"

# 223 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_DangerFastCurrent:: @ 8181AC8
# 224 "data/maps/TwoIsland/scripts.pory"
    .string "Danger! Fast Current!\n"
# 225 "data/maps/TwoIsland/scripts.pory"
    .string "Fishing and surfing prohibited!$"
# 226 "data/maps/TwoIsland/scripts.pory"

# 227 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_WelcomeToShopMerchandiseLimited:: @ 8181AFE
# 228 "data/maps/TwoIsland/scripts.pory"
    .string "Oh!\n"
# 229 "data/maps/TwoIsland/scripts.pory"
    .string "Hello, welcome to my shop!\p"
# 230 "data/maps/TwoIsland/scripts.pory"
    .string "We've only opened up recently.\p"
# 231 "data/maps/TwoIsland/scripts.pory"
    .string "Our merchandise is limited, but I\n"
# 232 "data/maps/TwoIsland/scripts.pory"
    .string "hope we can serve your needs.$"
# 233 "data/maps/TwoIsland/scripts.pory"

# 234 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_AddedMerchandiseForLostelle:: @ 8181B7C
# 235 "data/maps/TwoIsland/scripts.pory"
    .string "I can't tell you how grateful I am\n"
# 236 "data/maps/TwoIsland/scripts.pory"
    .string "for your rescue of Lostelle.\p"
# 237 "data/maps/TwoIsland/scripts.pory"
    .string "Thanks to your feat, the people of\n"
# 238 "data/maps/TwoIsland/scripts.pory"
    .string "Three Island have changed their\l"
# 239 "data/maps/TwoIsland/scripts.pory"
    .string "attitudes about Kanto people.\p"
# 240 "data/maps/TwoIsland/scripts.pory"
    .string "And, I'm from Kanto, you see.\p"
# 241 "data/maps/TwoIsland/scripts.pory"
    .string "The people of Three Island\n"
# 242 "data/maps/TwoIsland/scripts.pory"
    .string "helped me add to my merchandise.$"
# 243 "data/maps/TwoIsland/scripts.pory"

# 244 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_HopeYouGiveItYourBest:: @ 8181C77
# 245 "data/maps/TwoIsland/scripts.pory"
    .string "Hi! I'm giving it my best here.\n"
# 246 "data/maps/TwoIsland/scripts.pory"
    .string "I hope you do too, {PLAYER}.$"
# 247 "data/maps/TwoIsland/scripts.pory"

# 248 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_BringingItemsFromDistantLands:: @ 8181CAE
# 249 "data/maps/TwoIsland/scripts.pory"
    .string "Oh, hello, {PLAYER}!\n"
# 250 "data/maps/TwoIsland/scripts.pory"
    .string "Welcome!\p"
# 251 "data/maps/TwoIsland/scripts.pory"
    .string "I've started bringing in items from\n"
# 252 "data/maps/TwoIsland/scripts.pory"
    .string "distant lands.\p"
# 253 "data/maps/TwoIsland/scripts.pory"
    .string "I've got some rare items in, too.\n"
# 254 "data/maps/TwoIsland/scripts.pory"
    .string "Please have a look!$"
# 255 "data/maps/TwoIsland/scripts.pory"

# 256 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_FellowMovedFromCeladonCity:: @ 8181D2F
# 257 "data/maps/TwoIsland/scripts.pory"
    .string "That fellow there, he moved here\n"
# 258 "data/maps/TwoIsland/scripts.pory"
    .string "from Celadon City.\p"
# 259 "data/maps/TwoIsland/scripts.pory"
    .string "He started up a shop with his\n"
# 260 "data/maps/TwoIsland/scripts.pory"
    .string "younger brother.\p"
# 261 "data/maps/TwoIsland/scripts.pory"
    .string "You have to wonder if he knew what\n"
# 262 "data/maps/TwoIsland/scripts.pory"
    .string "he was getting into.$"
# 263 "data/maps/TwoIsland/scripts.pory"

# 264 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_ShopkeepersBrotherWorksGameCorner:: @ 8181DCA
# 265 "data/maps/TwoIsland/scripts.pory"
    .string "The shopkeeper's brother took\n"
# 266 "data/maps/TwoIsland/scripts.pory"
    .string "a job at the Game Corner.\p"
# 267 "data/maps/TwoIsland/scripts.pory"
    .string "He's trying to pull together money\n"
# 268 "data/maps/TwoIsland/scripts.pory"
    .string "so they can buy more merchandise.$"
# 269 "data/maps/TwoIsland/scripts.pory"

# 270 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_BrunoCameToIslandWhileBack:: @ 8181E47
# 271 "data/maps/TwoIsland/scripts.pory"
    .string "Listen, listen.\n"
# 272 "data/maps/TwoIsland/scripts.pory"
    .string "Did you know?\p"
# 273 "data/maps/TwoIsland/scripts.pory"
    .string "A famous Trainer came to the\n"
# 274 "data/maps/TwoIsland/scripts.pory"
    .string "Island a little while back.\p"
# 275 "data/maps/TwoIsland/scripts.pory"
    .string "He's one of the Elite Four.\n"
# 276 "data/maps/TwoIsland/scripts.pory"
    .string "His name is Bruno.\p"
# 277 "data/maps/TwoIsland/scripts.pory"
    .string "He went away disappointed when he\n"
# 278 "data/maps/TwoIsland/scripts.pory"
    .string "found out that they were all sold\l"
# 279 "data/maps/TwoIsland/scripts.pory"
    .string "out of Rage Candy Bars.$"
# 280 "data/maps/TwoIsland/scripts.pory"

# 281 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_BuyRareItemsHere:: @ 8181F28
# 282 "data/maps/TwoIsland/scripts.pory"
    .string "The discerning Trainer knows to\n"
# 283 "data/maps/TwoIsland/scripts.pory"
    .string "buy rare items here!$"
# 284 "data/maps/TwoIsland/scripts.pory"

# 285 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_OldWomanLivesOutOnCape:: @ 8181F5D
# 286 "data/maps/TwoIsland/scripts.pory"
    .string "There's an old woman who lives in\n"
# 287 "data/maps/TwoIsland/scripts.pory"
    .string "a cottage out on the cape.\p"
# 288 "data/maps/TwoIsland/scripts.pory"
    .string "She gives the eye to Pokémon.\n"
# 289 "data/maps/TwoIsland/scripts.pory"
    .string "It's a bit unnerving.$"
# 290 "data/maps/TwoIsland/scripts.pory"

# 291 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_HaveYouTriedJumpingGame:: @ 8181FCE
# 292 "data/maps/TwoIsland/scripts.pory"
    .string "Boing! Boing!\n"
# 293 "data/maps/TwoIsland/scripts.pory"
    .string "Have you tried the jumping game?\p"
# 294 "data/maps/TwoIsland/scripts.pory"
    .string "The Pokémon you can enter…\n"
# 295 "data/maps/TwoIsland/scripts.pory"
    .string "Boing!\p"
# 296 "data/maps/TwoIsland/scripts.pory"
    .string "Some go boing!\p"
# 297 "data/maps/TwoIsland/scripts.pory"
    .string "And some go boooooooing!\p"
# 298 "data/maps/TwoIsland/scripts.pory"
    .string "Did you know that?\n"
# 299 "data/maps/TwoIsland/scripts.pory"
    .string "Boing!$"
# 300 "data/maps/TwoIsland/scripts.pory"

# 301 "data/maps/TwoIsland/scripts.pory"
// Sailor -------------------------------------------------------------------------------------------
# 302 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_Sailor:: @ 8267CA2
# 303 "data/maps/TwoIsland/scripts.pory"
	lock
# 304 "data/maps/TwoIsland/scripts.pory"
	faceplayer
# 305 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_SAILED_FROM_SLATEPORT, TwoIsland_EventScript_Sailor_Slateport
# 306 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_Text_SailorReturn_Lilycove, MSGBOX_YESNO
# 307 "data/maps/TwoIsland/scripts.pory"
	compare VAR_RESULT, NO
# 308 "data/maps/TwoIsland/scripts.pory"
	goto_if_eq TwoIsland_EventScript_AsYouLike
# 309 "data/maps/TwoIsland/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 310 "data/maps/TwoIsland/scripts.pory"
	closemessage
# 311 "data/maps/TwoIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestDown
# 312 "data/maps/TwoIsland/scripts.pory"
	waitmovement 0
# 313 "data/maps/TwoIsland/scripts.pory"
	delay 30
# 314 "data/maps/TwoIsland/scripts.pory"
	hideobjectat LOCALID_SAILOR, MAP_TWO_ISLAND
# 315 "data/maps/TwoIsland/scripts.pory"
	special HideFollower
# 316 "data/maps/TwoIsland/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 317 "data/maps/TwoIsland/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 318 "data/maps/TwoIsland/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 255, 8, 11
# 319 "data/maps/TwoIsland/scripts.pory"
	waitstate
# 320 "data/maps/TwoIsland/scripts.pory"
	release
# 321 "data/maps/TwoIsland/scripts.pory"
	end
# 322 "data/maps/TwoIsland/scripts.pory"
	
# 323 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_Sailor_Slateport:
# 324 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_Text_SailorReturn_Slateport, MSGBOX_YESNO
# 325 "data/maps/TwoIsland/scripts.pory"
	compare VAR_RESULT, NO
# 326 "data/maps/TwoIsland/scripts.pory"
	goto_if_eq TwoIsland_EventScript_AsYouLike
# 327 "data/maps/TwoIsland/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 328 "data/maps/TwoIsland/scripts.pory"
	closemessage
# 329 "data/maps/TwoIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestDown
# 330 "data/maps/TwoIsland/scripts.pory"
	waitmovement 0
# 331 "data/maps/TwoIsland/scripts.pory"
	delay 30
# 332 "data/maps/TwoIsland/scripts.pory"
	hideobjectat LOCALID_SAILOR, MAP_TWO_ISLAND
# 333 "data/maps/TwoIsland/scripts.pory"
	special HideFollower
# 334 "data/maps/TwoIsland/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 335 "data/maps/TwoIsland/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 336 "data/maps/TwoIsland/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 255, 8, 11
# 337 "data/maps/TwoIsland/scripts.pory"
	waitstate
# 338 "data/maps/TwoIsland/scripts.pory"
	release
# 339 "data/maps/TwoIsland/scripts.pory"
	end
# 340 "data/maps/TwoIsland/scripts.pory"

# 341 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_AsYouLike:: @ 8267CE7
# 342 "data/maps/TwoIsland/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 343 "data/maps/TwoIsland/scripts.pory"
	release
# 344 "data/maps/TwoIsland/scripts.pory"
	end
# 345 "data/maps/TwoIsland/scripts.pory"
	
# 346 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_Text_SailorReturn_Lilycove: @ 82C6B90
# 347 "data/maps/TwoIsland/scripts.pory"
    .string "This Island has some nice items, eh?\n"
# 348 "data/maps/TwoIsland/scripts.pory"
	.string "Do you want to return to Lilycove?$"
# 349 "data/maps/TwoIsland/scripts.pory"
	
# 350 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_Text_SailorReturn_Slateport: @ 82C6B90
# 351 "data/maps/TwoIsland/scripts.pory"
    .string "This Island has some nice items, eh?\n"
# 352 "data/maps/TwoIsland/scripts.pory"
	.string "Do you want to return to Slateport?$"
# 353 "data/maps/TwoIsland/scripts.pory"
	
# 354 "data/maps/TwoIsland/scripts.pory"
// -------------------------------------------------------------------------------------------
