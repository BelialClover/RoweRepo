# 1 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 2 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
.equ LOCALID_SELPHY, 8
# 3 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 4 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_MapScripts:: @ 81687E4
# 5 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FiveIsland_ResortGorgeous_OnWarp
# 6 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_ResortGorgeous_OnFrame
# 7 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	.byte 0
# 8 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 9 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_OnWarp:: @ 81687EF
# 10 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth
# 11 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	.2byte 0
# 12 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 13 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth:: @ 81687F9
# 14 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 15 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	end
# 16 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 17 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_OnFrame:: @ 81687FE
# 18 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene
# 19 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	.2byte 0
# 20 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 21 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene:: @ 8168808
# 22 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	lockall
# 23 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	textcolor 1
# 24 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow
# 25 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	closemessage
# 26 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	applymovement LOCALID_SELPHY, Common_Movement_WalkInPlaceFastestUp
# 27 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	waitmovement 0
# 28 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	opendoor 39, 8
# 29 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	waitdooranim
# 30 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	applymovement LOCALID_SELPHY, FiveIsland_ResortGorgeous_Movement_SelphyEnterHome
# 31 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	waitmovement 0
# 32 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	closedoor 39, 8
# 33 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	waitdooranim
# 34 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	removeobject LOCALID_SELPHY
# 35 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	clearflag FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY
# 36 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 2
# 37 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	releaseall
# 38 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	end
# 39 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 40 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Movement_SelphyEnterHome:: @ 8168841
# 41 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	walk_up
# 42 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	set_invisible
# 43 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	step_end
# 44 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 45 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_EventScript_SelphysHouseSign:: @ 8168844
# 46 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_Text_SelphysHouse, MSGBOX_SIGN
# 47 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	end
# 48 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 49 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_DaisyIntro:: @ 818A3E2
# 50 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "With these hands, I will create\n"
# 51 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "my victory!$"
# 52 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 53 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_DaisyDefeat:: @ 818A40E
# 54 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "The shame of this…\n"
# 55 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "I'm red-faced…$"
# 56 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 57 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_DaisyPostBattle:: @ 818A430
# 58 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "Uh-oh, my paint tubes have\n"
# 59 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "scattered everywhere!$"
# 60 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 61 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_CelinaIntro:: @ 818A461
# 62 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "Excuse me!\n"
# 63 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "I'm trying to paint.\l"
# 64 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "Please keep out of my sight!$"
# 65 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 66 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_CelinaDefeat:: @ 818A49E
# 67 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "This loss…\n"
# 68 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "I feel like I'm whiting out…$"
# 69 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 70 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_CelinaPostBattle:: @ 818A4C6
# 71 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "Gillian?\n"
# 72 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "Please tilt your head slightly…\l"
# 73 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "There! That's the look I want!$"
# 74 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 75 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_RaynaIntro:: @ 818A50E
# 76 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "Hmm…\n"
# 77 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "The angle, it is not quite there…$"
# 78 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 79 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_RaynaDefeat:: @ 818A535
# 80 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "Oh…\n"
# 81 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "My feelings, they are blue…$"
# 82 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 83 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_RaynaPostBattle:: @ 818A555
# 84 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "The sky and the sea…\n"
# 85 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "They are so fickle.\p"
# 86 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "Their changing expressions make\n"
# 87 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "them difficult to capture.$"
# 88 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 89 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_JackiIntro:: @ 818A5B9
# 90 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "I am visiting my friend's retreat,\n"
# 91 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "if you must know.$"
# 92 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 93 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_JackiDefeat:: @ 818A5EE
# 94 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "Oh, my, so strong.$"
# 95 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 96 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_JackiPostBattle:: @ 818A601
# 97 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "I find it pleasurable to leisurely\n"
# 98 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "battle in the gentle sea breeze.$"
# 99 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 100 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_GillianIntro:: @ 818A645
# 101 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "I'm thinking of having a pool\n"
# 102 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "made specially for Pokémon.$"
# 103 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 104 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_GillianDefeat:: @ 818A67F
# 105 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "Oh, my goodness gracious!$"
# 106 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 107 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_GillianPostBattle:: @ 818A699
# 108 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "A pool would be nice, but I must\n"
# 109 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "say, a sun-room may be sublime.$"
# 110 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 111 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_DestinIntro:: @ 818A6DA
# 112 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "I'm a good runner.\n"
# 113 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "I'm really fast!$"
# 114 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 115 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_DestinDefeat:: @ 818A6FE
# 116 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "Oops!\n"
# 117 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "I rushed things!$"
# 118 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 119 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_DestinPostBattle:: @ 818A715
# 120 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "When I run with the wind, it feels\n"
# 121 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "like I could fly!$"
# 122 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 123 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_TobyIntro:: @ 818A74A
# 124 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "I say, this marine life here at\n"
# 125 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "this resort agrees with me.$"
# 126 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 127 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_TobyDefeat:: @ 818A786
# 128 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "That's a shocker!\n"
# 129 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "You must be joking.$"
# 130 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 131 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_TobyPostBattle:: @ 818A7AC
# 132 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "Getting so serious over this…\n"
# 133 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "How nonsensical.$"
# 134 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 135 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow:: @ 818A7DB
# 136 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "Selphy: Thank you.\p"
# 137 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "You may go now.$"
# 138 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"

# 139 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Text_SelphysHouse:: @ 818A7FE
# 140 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
    .string "Selphy's House$"
