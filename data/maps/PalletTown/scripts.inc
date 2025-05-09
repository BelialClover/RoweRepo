# 1 "data/maps/PalletTown/scripts.pory"

# 2 "data/maps/PalletTown/scripts.pory"
PalletTown_MapScripts::
# 3 "data/maps/PalletTown/scripts.pory"
	.byte 0
# 4 "data/maps/PalletTown/scripts.pory"
	
# 5 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLady:: @ 816575C
# 6 "data/maps/PalletTown/scripts.pory"
	lock
# 7 "data/maps/PalletTown/scripts.pory"
	faceplayer
# 8 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo, MSGBOX_DEFAULT
# 9 "data/maps/PalletTown/scripts.pory"
	release
# 10 "data/maps/PalletTown/scripts.pory"
	end
# 11 "data/maps/PalletTown/scripts.pory"
	
# 12 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_FatMan:: @ 816582F
# 13 "data/maps/PalletTown/scripts.pory"
	lock
# 14 "data/maps/PalletTown/scripts.pory"
	faceplayer
# 15 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
# 16 "data/maps/PalletTown/scripts.pory"
	release
# 17 "data/maps/PalletTown/scripts.pory"
	end
# 18 "data/maps/PalletTown/scripts.pory"
	
# 19 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_PlayersHouseSign:: @ 8165850
# 20 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
# 21 "data/maps/PalletTown/scripts.pory"
	end
# 22 "data/maps/PalletTown/scripts.pory"

# 23 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_RivalsHouseSign:: @ 8165859
# 24 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
# 25 "data/maps/PalletTown/scripts.pory"
	end
# 26 "data/maps/PalletTown/scripts.pory"

# 27 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TownSign:: @ 8165862
# 28 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
# 29 "data/maps/PalletTown/scripts.pory"
	end
# 30 "data/maps/PalletTown/scripts.pory"
	
# 31 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TrainerTips:: @ 816586B
# 32 "data/maps/PalletTown/scripts.pory"
	lockall
# 33 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 34 "data/maps/PalletTown/scripts.pory"
	releaseall
# 35 "data/maps/PalletTown/scripts.pory"
	end
# 36 "data/maps/PalletTown/scripts.pory"
	
# 37 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OaksLabSign:: @ 8165838
# 38 "data/maps/PalletTown/scripts.pory"
	lockall
# 39 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 40 "data/maps/PalletTown/scripts.pory"
	releaseall
# 41 "data/maps/PalletTown/scripts.pory"
	end
# 42 "data/maps/PalletTown/scripts.pory"
	
# 43 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_PressStartToOpenMenu::
# 44 "data/maps/PalletTown/scripts.pory"
    .string "Trainer Tips! You can press Start\n"
# 45 "data/maps/PalletTown/scripts.pory"
    .string "to open the Menu!$"
# 46 "data/maps/PalletTown/scripts.pory"
	
# 47 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_OakDontGoOut:: @ 817D72C
# 48 "data/maps/PalletTown/scripts.pory"
    .string "Oak: Hey! Wait!\n"
# 49 "data/maps/PalletTown/scripts.pory"
    .string "Don't go out!$"
# 50 "data/maps/PalletTown/scripts.pory"

# 51 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_OakGrassUnsafeNeedMon:: @ 817D74A
# 52 "data/maps/PalletTown/scripts.pory"
    .string "Oak: It's unsafe!\n"
# 53 "data/maps/PalletTown/scripts.pory"
    .string "Wild Pokémon live in tall grass!\p"
# 54 "data/maps/PalletTown/scripts.pory"
    .string "You need your own Pokémon for\n"
# 55 "data/maps/PalletTown/scripts.pory"
    .string "your protection.\p"
# 56 "data/maps/PalletTown/scripts.pory"
    .string "I know!\n"
# 57 "data/maps/PalletTown/scripts.pory"
    .string "Here, come with me!$"
# 58 "data/maps/PalletTown/scripts.pory"

# 59 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_RaisingMonsToo:: @ 817D7C8
# 60 "data/maps/PalletTown/scripts.pory"
    .string "I'm raising Pokémon, too.\p"
# 61 "data/maps/PalletTown/scripts.pory"
    .string "When they get strong, they can\n"
# 62 "data/maps/PalletTown/scripts.pory"
    .string "protect me.$"
# 63 "data/maps/PalletTown/scripts.pory"

# 64 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_CanStoreItemsAndMonsInPC:: @ 817D80D
# 65 "data/maps/PalletTown/scripts.pory"
    .string "Technology is incredible!\p"
# 66 "data/maps/PalletTown/scripts.pory"
    .string "You can now store and recall items\n"
# 67 "data/maps/PalletTown/scripts.pory"
    .string "and Pokémon as data via PC.$"
# 68 "data/maps/PalletTown/scripts.pory"

# 69 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_OakPokemonResearchLab:: @ 817D866
# 70 "data/maps/PalletTown/scripts.pory"
    .string "Oak Pokémon Research Lab$"
# 71 "data/maps/PalletTown/scripts.pory"

# 72 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_PlayersHouse:: @ 817D87F
# 73 "data/maps/PalletTown/scripts.pory"
    .string "Red's house$"
# 74 "data/maps/PalletTown/scripts.pory"

# 75 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_RivalsHouse:: @ 817D88A
# 76 "data/maps/PalletTown/scripts.pory"
    .string "Green's house$"
# 77 "data/maps/PalletTown/scripts.pory"

# 78 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_TownSign:: @ 817D895
# 79 "data/maps/PalletTown/scripts.pory"
    .string "Pallet Town\n"
# 80 "data/maps/PalletTown/scripts.pory"
    .string "Shades of your journey await!$"
# 81 "data/maps/PalletTown/scripts.pory"

# 82 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_OakLetMeSeePokedex:: @ 817D8BF
# 83 "data/maps/PalletTown/scripts.pory"
    .string "Oak: Ah, {PLAYER}!\n"
# 84 "data/maps/PalletTown/scripts.pory"
    .string "You're back, are you?\p"
# 85 "data/maps/PalletTown/scripts.pory"
    .string "How much have you filled in your\n"
# 86 "data/maps/PalletTown/scripts.pory"
    .string "POKéDEX?\p"
# 87 "data/maps/PalletTown/scripts.pory"
    .string "May I see it?\p"
# 88 "data/maps/PalletTown/scripts.pory"
    .string "Let's see…$"
# 89 "data/maps/PalletTown/scripts.pory"

# 90 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_CaughtXPuttingInHonestEffort:: @ 817D925
# 91 "data/maps/PalletTown/scripts.pory"
    .string "You've caught {STR_VAR_2}…\p"
# 92 "data/maps/PalletTown/scripts.pory"
    .string "Hm, it looks as if you're putting\n"
# 93 "data/maps/PalletTown/scripts.pory"
    .string "in an honest effort.\p"
# 94 "data/maps/PalletTown/scripts.pory"
    .string "When you manage to fill it some\n"
# 95 "data/maps/PalletTown/scripts.pory"
    .string "more, come show me, please.$"
# 96 "data/maps/PalletTown/scripts.pory"

# 97 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_CaughtXImpressiveFollowMe:: @ 817D9AA
# 98 "data/maps/PalletTown/scripts.pory"
    .string "You've caught… {STR_VAR_2}!?\n"
# 99 "data/maps/PalletTown/scripts.pory"
    .string "Now, this is impressive!\p"
# 100 "data/maps/PalletTown/scripts.pory"
    .string "There's something I wanted to ask\n"
# 101 "data/maps/PalletTown/scripts.pory"
    .string "of you, {PLAYER}.\p"
# 102 "data/maps/PalletTown/scripts.pory"
    .string "Come.\n"
# 103 "data/maps/PalletTown/scripts.pory"
    .string "Follow me.$"
# 104 "data/maps/PalletTown/scripts.pory"

# 105 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_OakYouEnjoyingTraveling:: @ 817DA16
# 106 "data/maps/PalletTown/scripts.pory"
    .string "Oak: Ah, {PLAYER}!\n"
# 107 "data/maps/PalletTown/scripts.pory"
    .string "You seem to be enjoying traveling.\p"
# 108 "data/maps/PalletTown/scripts.pory"
    .string "Knowing you, {PLAYER}, I can easily\n"
# 109 "data/maps/PalletTown/scripts.pory"
    .string "imagine you going out to even more\l"
# 110 "data/maps/PalletTown/scripts.pory"
    .string "exotic locales.\p"
# 111 "data/maps/PalletTown/scripts.pory"
    .string "Good for you, good for you.\n"
# 112 "data/maps/PalletTown/scripts.pory"
    .string "Hohoho.$"
