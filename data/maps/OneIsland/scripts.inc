# 1 "data/maps/OneIsland/scripts.pory"

# 2 "data/maps/OneIsland/scripts.pory"
.set LOCALID_SAILOR, 3
# 3 "data/maps/OneIsland/scripts.pory"

# 4 "data/maps/OneIsland/scripts.pory"
OneIsland_MapScripts::
# 5 "data/maps/OneIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_OnTransition
# 6 "data/maps/OneIsland/scripts.pory"
	.byte 0
# 7 "data/maps/OneIsland/scripts.pory"
	
# 8 "data/maps/OneIsland/scripts.pory"
OneIsland_OnTransition: 
# 9 "data/maps/OneIsland/scripts.pory"
	setflag FLAG_VISITED_ONE_ISLAND
# 10 "data/maps/OneIsland/scripts.pory"
	end
# 11 "data/maps/OneIsland/scripts.pory"

# 12 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_OldMan:: @ 8167517
# 13 "data/maps/OneIsland/scripts.pory"
	lock
# 14 "data/maps/OneIsland/scripts.pory"
	faceplayer
# 15 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_LuckyToHaveCelioHere
# 16 "data/maps/OneIsland/scripts.pory"
	release
# 17 "data/maps/OneIsland/scripts.pory"
	end
# 18 "data/maps/OneIsland/scripts.pory"
	
# 19 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_BaldingMan:: @ 8167549
# 20 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_IsntWarmClimateHereGreat, MSGBOX_NPC
# 21 "data/maps/OneIsland/scripts.pory"
	end
# 22 "data/maps/OneIsland/scripts.pory"
	
# 23 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_IslandSign:: @ 8167552
# 24 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_IslandSign, MSGBOX_SIGN
# 25 "data/maps/OneIsland/scripts.pory"
	end
# 26 "data/maps/OneIsland/scripts.pory"

# 27 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_PokemonNetCenterSign:: @ 816755B
# 28 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_PokemonNetCenterSign, MSGBOX_SIGN
# 29 "data/maps/OneIsland/scripts.pory"
	end
# 30 "data/maps/OneIsland/scripts.pory"
	
# 31 "data/maps/OneIsland/scripts.pory"
// Sailor -------------------------------------------------------------------------------------------
# 32 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_Sailor:: @ 8267CA2
# 33 "data/maps/OneIsland/scripts.pory"
	lock
# 34 "data/maps/OneIsland/scripts.pory"
	faceplayer
# 35 "data/maps/OneIsland/scripts.pory"
	goto_if_set FLAG_SAILED_FROM_SLATEPORT, OneIsland_EventScript_Sailor_Slateport
# 36 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_Text_SailorReturn_Lilycove, MSGBOX_YESNO
# 37 "data/maps/OneIsland/scripts.pory"
	compare VAR_RESULT, NO
# 38 "data/maps/OneIsland/scripts.pory"
	goto_if_eq OneIsland_EventScript_AsYouLike
# 39 "data/maps/OneIsland/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 40 "data/maps/OneIsland/scripts.pory"
	closemessage
# 41 "data/maps/OneIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestDown
# 42 "data/maps/OneIsland/scripts.pory"
	waitmovement 0
# 43 "data/maps/OneIsland/scripts.pory"
	delay 30
# 44 "data/maps/OneIsland/scripts.pory"
	hideobjectat LOCALID_SAILOR, MAP_ONE_ISLAND
# 45 "data/maps/OneIsland/scripts.pory"
	special HideFollower
# 46 "data/maps/OneIsland/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 47 "data/maps/OneIsland/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 48 "data/maps/OneIsland/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 255, 8, 11
# 49 "data/maps/OneIsland/scripts.pory"
	waitstate
# 50 "data/maps/OneIsland/scripts.pory"
	release
# 51 "data/maps/OneIsland/scripts.pory"
	end
# 52 "data/maps/OneIsland/scripts.pory"
	
# 53 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_Sailor_Slateport:
# 54 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_Text_SailorReturn_Slateport, MSGBOX_YESNO
# 55 "data/maps/OneIsland/scripts.pory"
	compare VAR_RESULT, NO
# 56 "data/maps/OneIsland/scripts.pory"
	goto_if_eq OneIsland_EventScript_AsYouLike
# 57 "data/maps/OneIsland/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 58 "data/maps/OneIsland/scripts.pory"
	closemessage
# 59 "data/maps/OneIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestDown
# 60 "data/maps/OneIsland/scripts.pory"
	waitmovement 0
# 61 "data/maps/OneIsland/scripts.pory"
	delay 30
# 62 "data/maps/OneIsland/scripts.pory"
	hideobjectat LOCALID_SAILOR, MAP_ONE_ISLAND
# 63 "data/maps/OneIsland/scripts.pory"
	special HideFollower
# 64 "data/maps/OneIsland/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 65 "data/maps/OneIsland/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 66 "data/maps/OneIsland/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 255, 8, 11
# 67 "data/maps/OneIsland/scripts.pory"
	waitstate
# 68 "data/maps/OneIsland/scripts.pory"
	release
# 69 "data/maps/OneIsland/scripts.pory"
	end
# 70 "data/maps/OneIsland/scripts.pory"

# 71 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_AsYouLike:: @ 8267CE7
# 72 "data/maps/OneIsland/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 73 "data/maps/OneIsland/scripts.pory"
	release
# 74 "data/maps/OneIsland/scripts.pory"
	end
# 75 "data/maps/OneIsland/scripts.pory"
	
# 76 "data/maps/OneIsland/scripts.pory"
OneIsland_Text_Text_SailorReturn_Lilycove: @ 82C6B90
# 77 "data/maps/OneIsland/scripts.pory"
    .string "What a Big Pokemon Center, eh?\n"
# 78 "data/maps/OneIsland/scripts.pory"
	.string "Do you want to return to Lilycove?$"
# 79 "data/maps/OneIsland/scripts.pory"
	
# 80 "data/maps/OneIsland/scripts.pory"
OneIsland_Text_Text_SailorReturn_Slateport: @ 82C6B90
# 81 "data/maps/OneIsland/scripts.pory"
    .string "What a Big Pokemon Center, eh?\n"
# 82 "data/maps/OneIsland/scripts.pory"
	.string "Do you want to return to Slateport?$"
# 83 "data/maps/OneIsland/scripts.pory"
	
# 84 "data/maps/OneIsland/scripts.pory"
// -------------------------------------------------------------------------------------------
# 85 "data/maps/OneIsland/scripts.pory"

# 86 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_Sign:: @ 8267CF1
# 87 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_IslandSign, MSGBOX_SIGN
# 88 "data/maps/OneIsland/scripts.pory"
	end
# 89 "data/maps/OneIsland/scripts.pory"
	
# 90 "data/maps/OneIsland/scripts.pory"
OneIsland_Text_BillLetsGoSeeCelio:: @ 818161B
# 91 "data/maps/OneIsland/scripts.pory"
    .string "Bill: Here we are!\n"
# 92 "data/maps/OneIsland/scripts.pory"
    .string "This is One Island.\p"
# 93 "data/maps/OneIsland/scripts.pory"
    .string "There are several islands around\n"
# 94 "data/maps/OneIsland/scripts.pory"
    .string "here, and this is one of them.\p"
# 95 "data/maps/OneIsland/scripts.pory"
    .string "My friend Celio sent the boat to\n"
# 96 "data/maps/OneIsland/scripts.pory"
    .string "fetch me here.\p"
# 97 "data/maps/OneIsland/scripts.pory"
    .string "He's in charge of the island's PC\n"
# 98 "data/maps/OneIsland/scripts.pory"
    .string "network by his lonesome.\p"
# 99 "data/maps/OneIsland/scripts.pory"
    .string "…Why am I telling you this now?\n"
# 100 "data/maps/OneIsland/scripts.pory"
    .string "Let's just go see Celio!$"
# 101 "data/maps/OneIsland/scripts.pory"

# 102 "data/maps/OneIsland/scripts.pory"
Text_WhereDoYouWantToSail:: @ 8181726
# 103 "data/maps/OneIsland/scripts.pory"
    .string "Ahoy, there!\n"
# 104 "data/maps/OneIsland/scripts.pory"
    .string "Where do you want to sail?$"
# 105 "data/maps/OneIsland/scripts.pory"

# 106 "data/maps/OneIsland/scripts.pory"
OneIsland_Text_LuckyToHaveCelioHere:: @ 818174E
# 107 "data/maps/OneIsland/scripts.pory"
    .string "Here we are on an island smack in\n"
# 108 "data/maps/OneIsland/scripts.pory"
    .string "the middle of nowhere.\p"
# 109 "data/maps/OneIsland/scripts.pory"
    .string "We're lucky to have an upstanding\n"
# 110 "data/maps/OneIsland/scripts.pory"
    .string "young man like Celio here.\p"
# 111 "data/maps/OneIsland/scripts.pory"
    .string "My granddaughter was in a tizzy\n"
# 112 "data/maps/OneIsland/scripts.pory"
    .string "over Celio's friend.\p"
# 113 "data/maps/OneIsland/scripts.pory"
    .string "Something about a famous\n"
# 114 "data/maps/OneIsland/scripts.pory"
    .string "Pokémaniac?\p"
# 115 "data/maps/OneIsland/scripts.pory"
    .string "I'm not sure what that means, but\n"
# 116 "data/maps/OneIsland/scripts.pory"
    .string "Celio is quite the man!$"
# 117 "data/maps/OneIsland/scripts.pory"

# 118 "data/maps/OneIsland/scripts.pory"
OneIsland_Text_HavePCLinkageWithKanto:: @ 8181858
# 119 "data/maps/OneIsland/scripts.pory"
    .string "My granddaughter was in a tizzy\n"
# 120 "data/maps/OneIsland/scripts.pory"
    .string "over a new breakthrough.\p"
# 121 "data/maps/OneIsland/scripts.pory"
    .string "She said we now have PC linkage\n"
# 122 "data/maps/OneIsland/scripts.pory"
    .string "with people in Kanto.\p"
# 123 "data/maps/OneIsland/scripts.pory"
    .string "I'm not sure what that means, but\n"
# 124 "data/maps/OneIsland/scripts.pory"
    .string "Celio is quite the man!$"
# 125 "data/maps/OneIsland/scripts.pory"

# 126 "data/maps/OneIsland/scripts.pory"
OneIsland_Text_HavePCLinkageWithHoenn:: @ 8181901
# 127 "data/maps/OneIsland/scripts.pory"
    .string "My granddaughter was in a tizzy\n"
# 128 "data/maps/OneIsland/scripts.pory"
    .string "over a new breakthrough.\p"
# 129 "data/maps/OneIsland/scripts.pory"
    .string "She said we finally have PC linkage\n"
# 130 "data/maps/OneIsland/scripts.pory"
    .string "with people in Hoenn.\p"
# 131 "data/maps/OneIsland/scripts.pory"
    .string "I'm not sure what that means, but\n"
# 132 "data/maps/OneIsland/scripts.pory"
    .string "Celio is quite the man.\p"
# 133 "data/maps/OneIsland/scripts.pory"
    .string "He would make a fine husband for\n"
# 134 "data/maps/OneIsland/scripts.pory"
    .string "my granddaughter!$"
# 135 "data/maps/OneIsland/scripts.pory"

# 136 "data/maps/OneIsland/scripts.pory"
OneIsland_Text_IslandSign:: @ 81819E1
# 137 "data/maps/OneIsland/scripts.pory"
    .string "One Island\n"
# 138 "data/maps/OneIsland/scripts.pory"
    .string "Friends Gather at Knot Island$"
# 139 "data/maps/OneIsland/scripts.pory"

# 140 "data/maps/OneIsland/scripts.pory"
OneIsland_Text_PokemonNetCenterSign:: @ 8181A0A
# 141 "data/maps/OneIsland/scripts.pory"
    .string "Expanding the Pokémon World!\n"
# 142 "data/maps/OneIsland/scripts.pory"
    .string "Pokémon Net Center$"
# 143 "data/maps/OneIsland/scripts.pory"

# 144 "data/maps/OneIsland/scripts.pory"
OneIsland_Text_IsntWarmClimateHereGreat:: @ 8181A4A
# 145 "data/maps/OneIsland/scripts.pory"
    .string "Hi, sight-seeing, are you?\n"
# 146 "data/maps/OneIsland/scripts.pory"
    .string "Isn't the warm climate here great?$"
