# 1 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_MapScripts:: @ 8210E5B
# 5 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	@map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_OnTransition: @ 8210E66
# 10 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 11 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx
# 13 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 14 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx:: @ 8210E74
# 16 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special ScrSpecial_SetMauvilleOldManObjEventGfx
# 17 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Nurse:: @ 8210E78
# 20 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 21 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 22 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 24 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
# 25 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman1:: @ 8210E86
# 28 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings, MSGBOX_NPC
# 29 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman2:: @ 8210E8F
# 32 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner, MSGBOX_NPC
# 33 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Youngster:: @ 8210E98
# 36 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun, MSGBOX_NPC
# 37 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 38 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	
# 39 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Mystery_Gift:: @ 8210E98
# 40 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	lock
# 41 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 42 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_MYSTERY_GIFT_2, MauvilleCity_PokemonCenter_1F_Mystery_Gift_3
# 43 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_MysteryGift, MSGBOX_NPC
# 44 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	bufferspeciesname 1, SPECIES_PICHU_SPIKY_EARED
# 45 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 46 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	message MauvilleCity_PokemonCenter_Text_ReceivedMysteryGift
# 47 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_PICHU_SPIKY_EARED, 5, ITEM_EXIOLITE
# 48 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_MYSTERY_GIFT_2
# 49 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 50 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_MysteryGift_End, MSGBOX_NPC
# 51 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
# 52 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 53 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	
# 54 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Mystery_Gift_2:: @ 8210E98
# 55 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_MysteryGift_Pre6Badges, MSGBOX_NPC
# 56 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
# 57 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 58 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	
# 59 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Mystery_Gift_3:: @ 8210E98
# 60 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_MysteryGift_End, MSGBOX_NPC
# 61 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
# 62 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 63 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	
# 64 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Mystery_Gift_No:: @ 8210E98
# 65 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_MysteryGift_No, MSGBOX_NPC
# 66 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
# 67 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 68 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	
# 69 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_Text_ReceivedMysteryGift:
# 70 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} received a special {STR_VAR_2}\n"
# 71 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "from the Mystery Gift Man.$"
# 72 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	
# 73 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_MysteryGift: @ 8210EA1
# 74 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Hello, thanks for playing Pokémon\n"
# 75 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "R.O.W.E.!\p"
# 76 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "To celebrate this release I\n"
# 77 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "have a little gift for you!$"
# 78 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	
# 79 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_MysteryGift_Pre6Badges: @ 8210EA1
# 80 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Hello, thanks for playing Pokémon\n"
# 81 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "R.O.W.E!\p"
# 82 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I have a little gift for you but\n"
# 83 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "you need to get a little stronger\l"
# 84 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "before getting it.$"
# 85 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	
# 86 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_MysteryGift_End:
# 87 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Please keep enjoying the game!$"
# 88 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	
# 89 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_MysteryGift_No:
# 90 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "There is no available Mystery Gift\n"
# 91 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "at this Moment.$"
# 92 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 93 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings: @ 8210EA1
# 94 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "That man over there, he says weird\n"
# 95 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "things!\p"
# 96 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "He's funny in a weird way.\n"
# 97 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I doubt I'll forget about him!$"
# 98 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 99 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner: @ 8210F06
# 100 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "When I accessed the Record Corner,\n"
# 101 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the data for what's hot in Dewford\l"
# 102 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "got updated.\p"
# 103 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Now that bit of data is the same\n"
# 104 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "as my friend's!$"
# 105 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 106 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun: @ 8210F8A
# 107 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "A Record Corner opened upstairs in\n"
# 108 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the Pokémon Center.\p"
# 109 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I don't know what it's about, but it\n"
# 110 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "sounds fun. I'll go check it out!$"
