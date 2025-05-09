# 1 "data/maps/ThreeIsland/scripts.pory"

# 2 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_MapScripts::
# 3 "data/maps/ThreeIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_OnTransition
# 4 "data/maps/ThreeIsland/scripts.pory"
	.byte 0
# 5 "data/maps/ThreeIsland/scripts.pory"
	
# 6 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_OnTransition: 
# 7 "data/maps/ThreeIsland/scripts.pory"
	setflag FLAG_VISITED_THREE_ISLAND
# 8 "data/maps/ThreeIsland/scripts.pory"
	end
# 9 "data/maps/ThreeIsland/scripts.pory"

# 10 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_Woman:: @ 8167C77
# 11 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_WouldntWantToSeeBikersHereAgain, MSGBOX_NPC
# 12 "data/maps/ThreeIsland/scripts.pory"
	end
# 13 "data/maps/ThreeIsland/scripts.pory"

# 14 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_LittleBoy:: @ 8167C80
# 15 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame, MSGBOX_NPC
# 16 "data/maps/ThreeIsland/scripts.pory"
	end
# 17 "data/maps/ThreeIsland/scripts.pory"

# 18 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_Doduo:: @ 8167C89
# 19 "data/maps/ThreeIsland/scripts.pory"
	lock
# 20 "data/maps/ThreeIsland/scripts.pory"
	faceplayer
# 21 "data/maps/ThreeIsland/scripts.pory"
	waitse
# 22 "data/maps/ThreeIsland/scripts.pory"
	playmoncry SPECIES_DODRIO, 0
# 23 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Doduo
# 24 "data/maps/ThreeIsland/scripts.pory"
	waitmoncry
# 25 "data/maps/ThreeIsland/scripts.pory"
	release
# 26 "data/maps/ThreeIsland/scripts.pory"
	end
# 27 "data/maps/ThreeIsland/scripts.pory"

# 28 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_IslandSign:: @ 8167C9C
# 29 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_IslandSign, MSGBOX_SIGN
# 30 "data/maps/ThreeIsland/scripts.pory"
	end
# 31 "data/maps/ThreeIsland/scripts.pory"

# 32 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_Biker6:: @ 8167CA5
# 33 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_IslandBelongsToUs, MSGBOX_NPC
# 34 "data/maps/ThreeIsland/scripts.pory"
	end
# 35 "data/maps/ThreeIsland/scripts.pory"
	
# 36 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_IslandSign:: @ 8182061
# 37 "data/maps/ThreeIsland/scripts.pory"
    .string "Three Island\n"
# 38 "data/maps/ThreeIsland/scripts.pory"
    .string "Kin Island of Family Bonding$"
# 39 "data/maps/ThreeIsland/scripts.pory"

# 40 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_IslandBelongsToUs:: @ 818208B
# 41 "data/maps/ThreeIsland/scripts.pory"
    .string "Hyahoo!\p"
# 42 "data/maps/ThreeIsland/scripts.pory"
    .string "From this day on, this island\n"
# 43 "data/maps/ThreeIsland/scripts.pory"
    .string "belongs to us!$"
# 44 "data/maps/ThreeIsland/scripts.pory"

# 45 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_GoBackToKanto:: @ 81820C0
# 46 "data/maps/ThreeIsland/scripts.pory"
    .string "We don't need you people bringing\n"
# 47 "data/maps/ThreeIsland/scripts.pory"
    .string "your noise and trouble here!\p"
# 48 "data/maps/ThreeIsland/scripts.pory"
    .string "We're asking you to go back to\n"
# 49 "data/maps/ThreeIsland/scripts.pory"
    .string "Kanto!$"
# 50 "data/maps/ThreeIsland/scripts.pory"

# 51 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_BossIsOnHisWay:: @ 8182125
# 52 "data/maps/ThreeIsland/scripts.pory"
    .string "Hey, go cry somewhere else.\n"
# 53 "data/maps/ThreeIsland/scripts.pory"
    .string "Our boss is on his way.\p"
# 54 "data/maps/ThreeIsland/scripts.pory"
    .string "When he gets here, we'll give you\n"
# 55 "data/maps/ThreeIsland/scripts.pory"
    .string "a k-rad motorbike show you won't\l"
# 56 "data/maps/ThreeIsland/scripts.pory"
    .string "soon forget!$"
# 57 "data/maps/ThreeIsland/scripts.pory"

# 58 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_GetOffIslandNow:: @ 81821A9
# 59 "data/maps/ThreeIsland/scripts.pory"
    .string "W-what!? Not on your life!\n"
# 60 "data/maps/ThreeIsland/scripts.pory"
    .string "Get off the island now!$"
# 61 "data/maps/ThreeIsland/scripts.pory"

# 62 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_WhosGonnaMakeMe:: @ 81821DC
# 63 "data/maps/ThreeIsland/scripts.pory"
    .string "Who's gonna make me?$"
# 64 "data/maps/ThreeIsland/scripts.pory"

# 65 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_AreYouBossGoBackToKanto:: @ 81821F1
# 66 "data/maps/ThreeIsland/scripts.pory"
    .string "Are you the boss?\n"
# 67 "data/maps/ThreeIsland/scripts.pory"
    .string "Go back to Kanto right now!$"
# 68 "data/maps/ThreeIsland/scripts.pory"

# 69 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_JustGotHerePal:: @ 818221F
# 70 "data/maps/ThreeIsland/scripts.pory"
    .string "Hah?\p"
# 71 "data/maps/ThreeIsland/scripts.pory"
    .string "I just got here, pal.\p"
# 72 "data/maps/ThreeIsland/scripts.pory"
    .string "What's with the hostile attitude?\n"
# 73 "data/maps/ThreeIsland/scripts.pory"
    .string "It's mighty cold of you!$"
# 74 "data/maps/ThreeIsland/scripts.pory"

# 75 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_FollowersRaisingHavoc:: @ 8182275
# 76 "data/maps/ThreeIsland/scripts.pory"
    .string "Your gang of followers have been\n"
# 77 "data/maps/ThreeIsland/scripts.pory"
    .string "raising havoc on their bikes.\p"
# 78 "data/maps/ThreeIsland/scripts.pory"
    .string "Do you have any idea how much\n"
# 79 "data/maps/ThreeIsland/scripts.pory"
    .string "trouble they've caused us on the\l"
# 80 "data/maps/ThreeIsland/scripts.pory"
    .string "island?$"
# 81 "data/maps/ThreeIsland/scripts.pory"

# 82 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_OughtToBeThankingUs:: @ 81822FB
# 83 "data/maps/ThreeIsland/scripts.pory"
    .string "No, man, I don't get it at all.\p"
# 84 "data/maps/ThreeIsland/scripts.pory"
    .string "Look at this place.\n"
# 85 "data/maps/ThreeIsland/scripts.pory"
    .string "What do you do for entertainment?\p"
# 86 "data/maps/ThreeIsland/scripts.pory"
    .string "You ought to be thanking us for\n"
# 87 "data/maps/ThreeIsland/scripts.pory"
    .string "livening up this sleepy village.\p"
# 88 "data/maps/ThreeIsland/scripts.pory"
    .string "But hey, if you insist, you can try\n"
# 89 "data/maps/ThreeIsland/scripts.pory"
    .string "making us leave.$"
# 90 "data/maps/ThreeIsland/scripts.pory"

# 91 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_YouCowardsToughInPack:: @ 81823C7
# 92 "data/maps/ThreeIsland/scripts.pory"
    .string "Grr… You cowards…\n"
# 93 "data/maps/ThreeIsland/scripts.pory"
    .string "So tough in a pack…$"
# 94 "data/maps/ThreeIsland/scripts.pory"

# 95 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_WannaMakeSomethingOfYourStaring:: @ 81823ED
# 96 "data/maps/ThreeIsland/scripts.pory"
    .string "You, what are you staring at?\n"
# 97 "data/maps/ThreeIsland/scripts.pory"
    .string "Don't you know it's not polite?\p"
# 98 "data/maps/ThreeIsland/scripts.pory"
    .string "You wanna make something of it\n"
# 99 "data/maps/ThreeIsland/scripts.pory"
    .string "or what?$"
# 100 "data/maps/ThreeIsland/scripts.pory"

# 101 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_ThatsSmart:: @ 8182453
# 102 "data/maps/ThreeIsland/scripts.pory"
    .string "That's smart.\n"
# 103 "data/maps/ThreeIsland/scripts.pory"
    .string "Keep your nose out of this.$"
# 104 "data/maps/ThreeIsland/scripts.pory"

# 105 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_Biker1Intro:: @ 818247D
# 106 "data/maps/ThreeIsland/scripts.pory"
    .string "Heh, I like your guts.\n"
# 107 "data/maps/ThreeIsland/scripts.pory"
    .string "You'll be losing money to me, but…$"
# 108 "data/maps/ThreeIsland/scripts.pory"

# 109 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_Biker1Defeat:: @ 81824B7
# 110 "data/maps/ThreeIsland/scripts.pory"
    .string "Wha…\n"
# 111 "data/maps/ThreeIsland/scripts.pory"
    .string "What is this kid?!$"
# 112 "data/maps/ThreeIsland/scripts.pory"

# 113 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_Biker1PostBattle:: @ 81824CF
# 114 "data/maps/ThreeIsland/scripts.pory"
    .string "Aww, man…\n"
# 115 "data/maps/ThreeIsland/scripts.pory"
    .string "Don't you dare laugh!$"
# 116 "data/maps/ThreeIsland/scripts.pory"

# 117 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_Biker2Intro:: @ 81824EF
# 118 "data/maps/ThreeIsland/scripts.pory"
    .string "Aren't you from Kanto?\n"
# 119 "data/maps/ThreeIsland/scripts.pory"
    .string "You should be on our side!$"
# 120 "data/maps/ThreeIsland/scripts.pory"

# 121 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_Biker2Defeat:: @ 8182521
# 122 "data/maps/ThreeIsland/scripts.pory"
    .string "Stop fooling around!$"
# 123 "data/maps/ThreeIsland/scripts.pory"

# 124 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_Biker2PostBattle:: @ 8182536
# 125 "data/maps/ThreeIsland/scripts.pory"
    .string "What's the matter with you,\n"
# 126 "data/maps/ThreeIsland/scripts.pory"
    .string "getting all hot like that?\p"
# 127 "data/maps/ThreeIsland/scripts.pory"
    .string "Totally uncool, man!$"
# 128 "data/maps/ThreeIsland/scripts.pory"

# 129 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_Biker3Intro:: @ 8182582
# 130 "data/maps/ThreeIsland/scripts.pory"
    .string "We invited the boss out here,\n"
# 131 "data/maps/ThreeIsland/scripts.pory"
    .string "but you had to mess it up!\p"
# 132 "data/maps/ThreeIsland/scripts.pory"
    .string "You embarrassed us, man!$"
# 133 "data/maps/ThreeIsland/scripts.pory"

# 134 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_Biker3Defeat:: @ 81825D4
# 135 "data/maps/ThreeIsland/scripts.pory"
    .string "… … …   … … …$"
# 136 "data/maps/ThreeIsland/scripts.pory"

# 137 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_Biker3PostBattle:: @ 81825E2
# 138 "data/maps/ThreeIsland/scripts.pory"
    .string "Boss, I'm telling you, you've gotta\n"
# 139 "data/maps/ThreeIsland/scripts.pory"
    .string "do something about this kid!$"
# 140 "data/maps/ThreeIsland/scripts.pory"

# 141 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_PaxtonIntro:: @ 8182623
# 142 "data/maps/ThreeIsland/scripts.pory"
    .string "I've been watching you, and I'd say\n"
# 143 "data/maps/ThreeIsland/scripts.pory"
    .string "you've done enough.\p"
# 144 "data/maps/ThreeIsland/scripts.pory"
    .string "What are you, their friend or\n"
# 145 "data/maps/ThreeIsland/scripts.pory"
    .string "something?\p"
# 146 "data/maps/ThreeIsland/scripts.pory"
    .string "Then I guess you'll be battling me\n"
# 147 "data/maps/ThreeIsland/scripts.pory"
    .string "in their place.$"
# 148 "data/maps/ThreeIsland/scripts.pory"

# 149 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_PaxtonDefeat:: @ 81826B7
# 150 "data/maps/ThreeIsland/scripts.pory"
    .string "All right, enough!\n"
# 151 "data/maps/ThreeIsland/scripts.pory"
    .string "We'll leave like you wanted!\p"
# 152 "data/maps/ThreeIsland/scripts.pory"
    .string "We'll be happy to see the last of\n"
# 153 "data/maps/ThreeIsland/scripts.pory"
    .string "this boring island!$"
# 154 "data/maps/ThreeIsland/scripts.pory"

# 155 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_PaxtonPostBattle:: @ 818271D
# 156 "data/maps/ThreeIsland/scripts.pory"
    .string "Humph! Yeah, go right on hanging\n"
# 157 "data/maps/ThreeIsland/scripts.pory"
    .string "around with these hayseeds!$"
# 158 "data/maps/ThreeIsland/scripts.pory"

# 159 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_ThankYouOhYourMonGotHurt:: @ 818275A
# 160 "data/maps/ThreeIsland/scripts.pory"
    .string "Thank you! Those goons were\n"
# 161 "data/maps/ThreeIsland/scripts.pory"
    .string "nothing but bad trouble.\p"
# 162 "data/maps/ThreeIsland/scripts.pory"
    .string "Oh, look, your Pokémon got hurt\n"
# 163 "data/maps/ThreeIsland/scripts.pory"
    .string "on my account.$"
# 164 "data/maps/ThreeIsland/scripts.pory"

# 165 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_GivenFullRestore:: @ 81827BE
# 166 "data/maps/ThreeIsland/scripts.pory"
    .string "{PLAYER} was given\n"
# 167 "data/maps/ThreeIsland/scripts.pory"
    .string "a Full Restore.$"
# 168 "data/maps/ThreeIsland/scripts.pory"

# 169 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_OhYourBagIsFull:: @ 81827DB
# 170 "data/maps/ThreeIsland/scripts.pory"
    .string "Oh?\n"
# 171 "data/maps/ThreeIsland/scripts.pory"
    .string "Your Bag is full.$"
# 172 "data/maps/ThreeIsland/scripts.pory"

# 173 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_YouveGotImpressiveMons:: @ 81827F1
# 174 "data/maps/ThreeIsland/scripts.pory"
    .string "You've got seriously impressive\n"
# 175 "data/maps/ThreeIsland/scripts.pory"
    .string "Pokémon with you.$"
# 176 "data/maps/ThreeIsland/scripts.pory"

# 177 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_LostelleWentOffTowardsBondBridge:: @ 8182823
# 178 "data/maps/ThreeIsland/scripts.pory"
    .string "It'd be fantastic if someone as\n"
# 179 "data/maps/ThreeIsland/scripts.pory"
    .string "strong as you lived here.\p"
# 180 "data/maps/ThreeIsland/scripts.pory"
    .string "I hope you'll at least stay here\n"
# 181 "data/maps/ThreeIsland/scripts.pory"
    .string "a while.\p"
# 182 "data/maps/ThreeIsland/scripts.pory"
    .string "…I beg your pardon?\n"
# 183 "data/maps/ThreeIsland/scripts.pory"
    .string "You're looking for Lostelle?\p"
# 184 "data/maps/ThreeIsland/scripts.pory"
    .string "Lostelle went off towards Bond\n"
# 185 "data/maps/ThreeIsland/scripts.pory"
    .string "Bridge a while ago.$"
# 186 "data/maps/ThreeIsland/scripts.pory"

# 187 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_WouldntWantToSeeBikersHereAgain:: @ 81828EB
# 188 "data/maps/ThreeIsland/scripts.pory"
    .string "Three Island is actually the most\n"
# 189 "data/maps/ThreeIsland/scripts.pory"
    .string "populous of the islands here.\p"
# 190 "data/maps/ThreeIsland/scripts.pory"
    .string "Still, it could be less sleepy.\p"
# 191 "data/maps/ThreeIsland/scripts.pory"
    .string "But I wouldn't want to see goons\n"
# 192 "data/maps/ThreeIsland/scripts.pory"
    .string "like those Bikers here again.$"
# 193 "data/maps/ThreeIsland/scripts.pory"

# 194 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame:: @ 818298A
# 195 "data/maps/ThreeIsland/scripts.pory"
    .string "After training my Doduo in the\n"
# 196 "data/maps/ThreeIsland/scripts.pory"
    .string "Berry Forest it evolved!\p"
# 197 "data/maps/ThreeIsland/scripts.pory"
    .string "I will go to Two Island and play\n"
# 198 "data/maps/ThreeIsland/scripts.pory"
    .string "a game when I get there.$"
# 199 "data/maps/ThreeIsland/scripts.pory"

# 200 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Text_Doduo:: @ 81829F4
# 201 "data/maps/ThreeIsland/scripts.pory"
    .string "Dodrio: Gigiih!$"
