# 1 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 2 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_MapScripts:: @ 82186D2
# 3 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 5 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner:: @ 82186D3
# 6 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex
# 9 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call_if_set FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
# 10 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 11 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	compare VAR_RESULT, TRUE
# 12 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_eq LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare
# 13 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 14 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 15 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 16 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex:: @ 82186F9
# 17 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex, MSGBOX_DEFAULT
# 18 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	return
# 19 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 20 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare:: @ 8218702
# 21 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 22 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 23 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitfanfare
# 24 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
# 25 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 26 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 27 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma:: @ 821870F
# 28 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	message LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis
# 29 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitmessage
# 30 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 31 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	special Special_ShowDiploma
# 32 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitstate
# 33 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 34 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 35 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 36 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Programmer:: @ 8218720
# 37 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer, MSGBOX_NPC
# 38 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 39 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 40 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GraphicArtist:: @ 8218729
# 41 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist, MSGBOX_NPC
# 42 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 43 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 44 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_FatMan:: @ 8218732
# 45 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute, MSGBOX_NPC
# 46 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 47 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 48 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Woman:: @ 821873B
# 49 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart, MSGBOX_NPC
# 50 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 51 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 52 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameBoyKid:: @ 8218744
# 53 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy, MSGBOX_NPC
# 54 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 55 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 56 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Scott:: @ 821874D
# 57 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock
# 58 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	faceplayer
# 59 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_LILYCOVE, LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott
# 60 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles, MSGBOX_DEFAULT
# 61 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 62 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_LILYCOVE
# 63 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 64 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 65 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 66 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott:: @ 821876A
# 67 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy, MSGBOX_DEFAULT
# 68 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 69 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 70 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 71 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex: @ 8218774
# 72 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I'm the Game Designer.\p"
# 73 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Oh, is that right?\n"
# 74 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "You're working on a Pokédex?\p"
# 75 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "It's tough trying to complete it,\n"
# 76 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "but don't give up.\p"
# 77 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "If you do complete it, please come\n"
# 78 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "show me.$"
# 79 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 80 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis: @ 821881C
# 81 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Wow! That's awesome!\n"
# 82 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Yep, it's totally awesome!\p"
# 83 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "This Pokédex is completely filled!\n"
# 84 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "You really must love Pokémon!\p"
# 85 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I'm so impressed!\p"
# 86 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Let me give you something in\n"
# 87 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "recognition of your feat!$"
# 88 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 89 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer: @ 82188D6
# 90 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Me? You're talking to me?\n"
# 91 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I'm the Programmer.\p"
# 92 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I wonder what the Slots are\n"
# 93 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "like here.$"
# 94 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 95 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist: @ 821892B
# 96 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I'm the Graphic Artist! Aren't the\n"
# 97 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Pokémon of Hoenn interesting?$"
# 98 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 99 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute: @ 821896C
# 100 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "The girl Tubers, they're cute, hey?\n"
# 101 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "To battle against a cute Tuber…\p"
# 102 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Whoop, it's so awesome!\p"
# 103 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "And the Twins! Aren't they cute?\n"
# 104 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "A 2-on-2 battle with Twins…\p"
# 105 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Whoop, it's unbearably fun!$"
# 106 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 107 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart: @ 8218A21
# 108 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "The sea breeze tickles my heart.\n"
# 109 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "It feels wonderful here!$"
# 110 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 111 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy: @ 8218A5B
# 112 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "You never know when and where\n"
# 113 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "people will challenge you.\p"
# 114 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "That's why I never leave home without\n"
# 115 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "my Game Boy Advance.$"
# 116 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 117 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles: @ 8218ACF
# 118 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Scott: … … … … …\n"
# 119 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "… … … … … Zzz…\p"
# 120 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "… … … … … Huh?!\n"
# 121 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Oh, sorry, sorry! I was snoozing!\p"
# 122 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I came to check out this Pokémon\n"
# 123 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Contest thing.\p"
# 124 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I have to admit, it does look quite\n"
# 125 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "entertaining, but…\p"
# 126 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Consider me a purist--I prefer\n"
# 127 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "battles and tough Trainers.\p"
# 128 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "But that's just me.\p"
# 129 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "{PLAYER}{KUN}, I hope you'll enjoy everything\n"
# 130 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "like the Gyms, Contests, Battle Tent,\l"
# 131 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "the whole works!$"
# 132 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 133 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy: @ 8218C33
# 134 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Scott: I think it does take strategy\n"
# 135 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "to win a Contest.\p"
# 136 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Devising Contest strategies is one way\n"
# 137 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "of becoming a better Trainer, I'd say.$"
