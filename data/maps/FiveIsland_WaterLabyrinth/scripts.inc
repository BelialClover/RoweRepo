# 1 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 2 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_MapScripts:: @ 816884D
# 3 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 5 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EggGentleman:: @ 816884E
# 6 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	@ goto_if_questlog EventScript_ReleaseEnd
# 7 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	@ special QuestLog_CutRecording
# 8 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 9 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 10 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_GOT_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 11 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg
# 12 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons
# 13 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 14 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	compare VAR_RESULT, 6  @ Max friendship
# 15 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship
# 16 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HmmISeeIsee
# 17 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 18 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 19 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 20 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment:: @ 8168895
# 21 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy
# 22 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 23 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 24 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 25 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship:: @ 81688AC
# 26 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis
# 27 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 28 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 29 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 30 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg:: @ 81688BA
# 31 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	getpartysize
# 32 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 33 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg
# 34 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_GOT_TOGEPI_EGG
# 35 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	giveegg SPECIES_TOGEPI
# 36 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor 3
# 37 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 38 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	message FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan
# 39 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitfanfare
# 40 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitmessage
# 41 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 42 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 43 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 44 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 45 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
@ If the player has a Togepi/Togetic from this game (assumed to be the one the man gave you) then comment on it
# 46 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
@ Otherwise make normal comment
# 47 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostEggComment:: @ 81688E3
# 48 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	@ getspeciesname 1, SPECIES_TOGEPI
# 49 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	@ setvar VAR_0x8004, SPECIES_TOGEPI
# 50 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	@ specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 51 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	@ compare VAR_RESULT, TRUE
# 52 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	@ goto_if_eq FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 53 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	@ getspeciesname 1, SPECIES_TOGETIC
# 54 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	@ setvar VAR_0x8004, SPECIES_TOGETIC
# 55 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	@ specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 56 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	@ compare VAR_RESULT, TRUE
# 57 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	@ goto_if_eq FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 58 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou
# 59 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 60 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 61 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 62 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg:: @ 816891F
# 63 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TOGEPI_EGG
# 64 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty
# 65 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 66 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 67 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 68 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg:: @ 816892C
# 69 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 70 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 71 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 72 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons:: @ 818A80D
# 73 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "You travel all over the place,\n"
# 74 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "don't you?\p"
# 75 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "You're not driving your Pokémon\n"
# 76 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "too harshly, are you?\p"
# 77 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Let me take a look.\n"
# 78 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "… … …   … … …$"
# 79 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 80 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_HmmISeeIsee:: @ 818A88F
# 81 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Ah, hmm…\n"
# 82 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "I see, I see…$"
# 83 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 84 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis:: @ 818A8A6
# 85 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Oh, impressive.\n"
# 86 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "You treat your Pokémon right.\p"
# 87 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "I think you can be entrusted with\n"
# 88 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "this.\p"
# 89 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Please, I'd like you to have this.$"
# 90 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 91 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan:: @ 818A91F
# 92 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "{PLAYER} received an Egg\n"
# 93 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "from the man!$"
# 94 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 95 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty:: @ 818A940
# 96 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "…Unfortunately, you don't have\n"
# 97 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "space for this in your party.\p"
# 98 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "You'd better come back for it\n"
# 99 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "another time.$"
# 100 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 101 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
@ Unused
# 102 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_YouveComeBackForTheEgg:: @ 818A9A9
# 103 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Hey\n"
# 104 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "You came to receive\l"
# 105 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "an egg, didn't you?$"
# 106 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 107 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou:: @ 818A9C0
# 108 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "I received that Egg while I was\n"
# 109 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "traveling.\p"
# 110 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "I'm glad I met someone like you.$"
# 111 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 112 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy:: @ 818AA0C
# 113 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Oh, hello.\n"
# 114 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "That's a cute {STR_VAR_2}.\p"
# 115 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Seeing it reminds me of a sweet \n"
# 116 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "little girl I met while traveling.\p"
# 117 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "She was gently grooming Pokémon...\n"
# 118 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "She was a little angel.\p"
# 119 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "That little girl's name…\n"
# 120 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "I think it was Daisy.$"
# 121 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 122 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_AlizeIntro:: @ 818AAD5
# 123 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "This is an excellent environment\n"
# 124 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "for raising Pokémon.$"
# 125 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 126 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_AlizeDefeat:: @ 818AB0B
# 127 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Your Pokémon are growing up\n"
# 128 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "admirably well!$"
# 129 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 130 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_AlizePostBattle:: @ 818AB37
# 131 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "You know, I think you have the\n"
# 132 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "talent to be a good Breeder.$"
