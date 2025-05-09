# 1 "data/maps/FiveIsland/scripts.pory"

# 2 "data/maps/FiveIsland/scripts.pory"
.set LOCALID_SAILOR, 4
# 3 "data/maps/FiveIsland/scripts.pory"
FiveIsland_MapScripts:: @ 8167E8E
# 4 "data/maps/FiveIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_OnTransition
# 5 "data/maps/FiveIsland/scripts.pory"
	.byte 0
# 6 "data/maps/FiveIsland/scripts.pory"

# 7 "data/maps/FiveIsland/scripts.pory"
FiveIsland_OnTransition:: @ 8167E94
# 8 "data/maps/FiveIsland/scripts.pory"
	setflag FLAG_VISITED_FIVE_ISLAND
# 9 "data/maps/FiveIsland/scripts.pory"
	end
# 10 "data/maps/FiveIsland/scripts.pory"

# 11 "data/maps/FiveIsland/scripts.pory"
FiveIsland_EventScript_IslandSign:: @ 8167E98
# 12 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_Text_IslandSign, MSGBOX_SIGN
# 13 "data/maps/FiveIsland/scripts.pory"
	end
# 14 "data/maps/FiveIsland/scripts.pory"

# 15 "data/maps/FiveIsland/scripts.pory"
FiveIsland_EventScript_BugCatcher:: @ 8167EA1
# 16 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_Text_WeirdBuildingInMeadow, MSGBOX_NPC
# 17 "data/maps/FiveIsland/scripts.pory"
	end
# 18 "data/maps/FiveIsland/scripts.pory"

# 19 "data/maps/FiveIsland/scripts.pory"
FiveIsland_EventScript_Fisher:: @ 8167EAA
# 20 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_Text_BeenGettingBusierAroundHere, MSGBOX_NPC
# 21 "data/maps/FiveIsland/scripts.pory"
	end
# 22 "data/maps/FiveIsland/scripts.pory"

# 23 "data/maps/FiveIsland/scripts.pory"
FiveIsland_Text_IslandSign:: @ 8182DFB
# 24 "data/maps/FiveIsland/scripts.pory"
    .string "Five Island\n"
# 25 "data/maps/FiveIsland/scripts.pory"
    .string "Chrono Island: Where Time Goes$"
# 26 "data/maps/FiveIsland/scripts.pory"

# 27 "data/maps/FiveIsland/scripts.pory"
FiveIsland_Text_WeirdBuildingInMeadow:: @ 8182E26
# 28 "data/maps/FiveIsland/scripts.pory"
    .string "Oh, this stinks. I wanted to play in\n"
# 29 "data/maps/FiveIsland/scripts.pory"
    .string "the Meadow.\p"
# 30 "data/maps/FiveIsland/scripts.pory"
    .string "But they put up a weird building\n"
# 31 "data/maps/FiveIsland/scripts.pory"
    .string "on it, so I can't play there.$"
# 32 "data/maps/FiveIsland/scripts.pory"

# 33 "data/maps/FiveIsland/scripts.pory"
FiveIsland_Text_BeenGettingBusierAroundHere:: @ 8182E96
# 34 "data/maps/FiveIsland/scripts.pory"
    .string "It's been getting busier around\n"
# 35 "data/maps/FiveIsland/scripts.pory"
    .string "these parts lately.\p"
# 36 "data/maps/FiveIsland/scripts.pory"
    .string "I haven't been catching many good\n"
# 37 "data/maps/FiveIsland/scripts.pory"
    .string "fish lately, either.$"
# 38 "data/maps/FiveIsland/scripts.pory"

# 39 "data/maps/FiveIsland/scripts.pory"

# 40 "data/maps/FiveIsland/scripts.pory"
// Sailor -------------------------------------------------------------------------------------------
# 41 "data/maps/FiveIsland/scripts.pory"
FiveIsland_EventScript_AsYouLike:: @ 8267CE7
# 42 "data/maps/FiveIsland/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 43 "data/maps/FiveIsland/scripts.pory"
	release
# 44 "data/maps/FiveIsland/scripts.pory"
	end
# 45 "data/maps/FiveIsland/scripts.pory"
	
# 46 "data/maps/FiveIsland/scripts.pory"
FiveIsland_Text_Text_SailorReturn_Lilycove: @ 82C6B90
# 47 "data/maps/FiveIsland/scripts.pory"
    .string "That cave its really chilly!\n"
# 48 "data/maps/FiveIsland/scripts.pory"
	.string "Do you want to return to Lilycove?$"
# 49 "data/maps/FiveIsland/scripts.pory"
	
# 50 "data/maps/FiveIsland/scripts.pory"
FiveIsland_Text_Text_SailorReturn_Slateport: @ 82C6B90
# 51 "data/maps/FiveIsland/scripts.pory"
    .string "That cave its really chilly!\n"
# 52 "data/maps/FiveIsland/scripts.pory"
	.string "Do you want to return to Slateport?$"

EventScript_RestorePrevTextColor::
	end


FiveIsland_Meadow_EventScript_ItemMaxPotion::
	end


FiveIsland_Meadow_EventScript_ItemPPUp::
	end


FiveIsland_WaterLabyrinth_EventScript_Selphy::
# 68 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_EventScript_Selphy_Text_0, MSGBOX_AUTOCLOSE
	return


FiveIsland_WaterLabyrinth_EventScript_Alize::
# 72 "data/maps/FiveIsland/scripts.pory"
	trainerbattle_single TRAINER_ALIZE, FiveIsland_WaterLabyrinth_EventScript_Alize_Text_0, FiveIsland_WaterLabyrinth_EventScript_Alize_Text_1
# 73 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_EventScript_Alize_Text_2, MSGBOX_AUTOCLOSE
	return


FiveIsland_ResortGorgeous_EventScript_Daisy::
# 77 "data/maps/FiveIsland/scripts.pory"
	trainerbattle_single TRAINER_DAISY_SEVII, FiveIsland_ResortGorgeous_EventScript_Daisy_Text_0, FiveIsland_ResortGorgeous_EventScript_Daisy_Text_1
# 78 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_EventScript_Daisy_Text_2, MSGBOX_AUTOCLOSE
	return


FiveIsland_ResortGorgeous_EventScript_Celina::
# 82 "data/maps/FiveIsland/scripts.pory"
	trainerbattle_single TRAINER_CELINA_SEVII, FiveIsland_ResortGorgeous_EventScript_Celina_Text_0, FiveIsland_ResortGorgeous_EventScript_Celina_Text_1
# 83 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_EventScript_Celina_Text_2, MSGBOX_AUTOCLOSE
	return


FiveIsland_ResortGorgeous_EventScript_Rayna::
# 87 "data/maps/FiveIsland/scripts.pory"
	trainerbattle_single TRAINER_RAYNA, FiveIsland_ResortGorgeous_EventScript_Rayna_Text_0, FiveIsland_ResortGorgeous_EventScript_Rayna_Text_1
# 88 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_EventScript_Rayna_Text_2, MSGBOX_AUTOCLOSE
	return


FiveIsland_ResortGorgeous_EventScript_Jacki::
# 92 "data/maps/FiveIsland/scripts.pory"
	trainerbattle_single TRAINER_JACKI, FiveIsland_ResortGorgeous_EventScript_Jacki_Text_0, FiveIsland_ResortGorgeous_EventScript_Jacki_Text_1
# 93 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_EventScript_Jacki_Text_2, MSGBOX_AUTOCLOSE
	return


FiveIsland_ResortGorgeous_EventScript_Gillian::
# 97 "data/maps/FiveIsland/scripts.pory"
	trainerbattle_single TRAINER_GILLIAN, FiveIsland_ResortGorgeous_EventScript_Gillian_Text_0, FiveIsland_ResortGorgeous_EventScript_Gillian_Text_1
# 98 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_EventScript_Gillian_Text_2, MSGBOX_AUTOCLOSE
	return


FiveIsland_ResortGorgeous_EventScript_Destin::
# 102 "data/maps/FiveIsland/scripts.pory"
	trainerbattle_single TRAINER_DESTIN, FiveIsland_ResortGorgeous_EventScript_Destin_Text_0, FiveIsland_ResortGorgeous_EventScript_Destin_Text_1
# 103 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_EventScript_Destin_Text_2, MSGBOX_AUTOCLOSE
	return


FiveIsland_ResortGorgeous_EventScript_Toby::
# 107 "data/maps/FiveIsland/scripts.pory"
	trainerbattle_single TRAINER_TOBY, FiveIsland_ResortGorgeous_EventScript_Toby_Text_0, FiveIsland_ResortGorgeous_EventScript_Toby_Text_1
# 108 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_EventScript_Toby_Text_2, MSGBOX_AUTOCLOSE
	return


FiveIsland_MemorialPillar_EventScript_Milo::
# 112 "data/maps/FiveIsland/scripts.pory"
	trainerbattle_single TRAINER_MILO, FiveIsland_MemorialPillar_EventScript_Milo_Text_0, FiveIsland_MemorialPillar_EventScript_Milo_Text_1
# 113 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_MemorialPillar_EventScript_Milo_Text_2, MSGBOX_AUTOCLOSE
	return


FiveIsland_MemorialPillar_EventScript_Chaz::
# 117 "data/maps/FiveIsland/scripts.pory"
	trainerbattle_single TRAINER_CHAZ, FiveIsland_MemorialPillar_EventScript_Chaz_Text_0, FiveIsland_MemorialPillar_EventScript_Chaz_Text_1
# 118 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_MemorialPillar_EventScript_Chaz_Text_2, MSGBOX_AUTOCLOSE
	return


FiveIsland_MemorialPillar_EventScript_Harold::
# 122 "data/maps/FiveIsland/scripts.pory"
	trainerbattle_single TRAINER_HAROLD, FiveIsland_MemorialPillar_EventScript_Harold_Text_0, FiveIsland_MemorialPillar_EventScript_Harold_Text_1
# 123 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_MemorialPillar_EventScript_Harold_Text_2, MSGBOX_AUTOCLOSE
	return


FiveIsland_MemorialPillar_EventScript_ItemMetalCoat::
	end


FiveIsland_WaterLabyrinth_EventScript_Selphy_Text_0:
# 68 "data/maps/FiveIsland/scripts.pory"
	.string "This area is off-limits right now$"

FiveIsland_WaterLabyrinth_EventScript_Alize_Text_0:
# 72 "data/maps/FiveIsland/scripts.pory"
	.string "This is an excellent environment for\n"
	.string "raising POKéMON!$"

FiveIsland_WaterLabyrinth_EventScript_Alize_Text_1:
# 72 "data/maps/FiveIsland/scripts.pory"
	.string "Your POKéMON are growing up admirably\n"
	.string "well!$"

FiveIsland_WaterLabyrinth_EventScript_Alize_Text_2:
# 73 "data/maps/FiveIsland/scripts.pory"
	.string "You know, I think you have the talent\n"
	.string "to be a good Pokémon Breeder.$"

FiveIsland_ResortGorgeous_EventScript_Daisy_Text_0:
# 77 "data/maps/FiveIsland/scripts.pory"
	.string "With these hands, I will create my\n"
	.string "victory!$"

FiveIsland_ResortGorgeous_EventScript_Daisy_Text_1:
# 77 "data/maps/FiveIsland/scripts.pory"
	.string "The shame of this… I'm red-faced…$"

FiveIsland_ResortGorgeous_EventScript_Daisy_Text_2:
# 78 "data/maps/FiveIsland/scripts.pory"
	.string "Uh-oh, my paint tubes have scattered\n"
	.string "everywhere!$"

FiveIsland_ResortGorgeous_EventScript_Celina_Text_0:
# 82 "data/maps/FiveIsland/scripts.pory"
	.string "Excuse me! I'm trying to paint. Please\n"
	.string "keep out of my sight!$"

FiveIsland_ResortGorgeous_EventScript_Celina_Text_1:
# 82 "data/maps/FiveIsland/scripts.pory"
	.string "This loss… I feel like I'm whiting out…$"

FiveIsland_ResortGorgeous_EventScript_Celina_Text_2:
# 83 "data/maps/FiveIsland/scripts.pory"
	.string "Gillian? Please tilt your head slightly…\n"
	.string "There! That's the look I want!$"

FiveIsland_ResortGorgeous_EventScript_Rayna_Text_0:
# 87 "data/maps/FiveIsland/scripts.pory"
	.string "Hmm… The angle, it is not quite there…$"

FiveIsland_ResortGorgeous_EventScript_Rayna_Text_1:
# 87 "data/maps/FiveIsland/scripts.pory"
	.string "Oh… My feelings, they are blue…$"

FiveIsland_ResortGorgeous_EventScript_Rayna_Text_2:
# 88 "data/maps/FiveIsland/scripts.pory"
	.string "The sky and the sea… They are so fickle.\n"
	.string "Their changing expressions make them\l"
	.string "difficult to capture.$"

FiveIsland_ResortGorgeous_EventScript_Jacki_Text_0:
# 92 "data/maps/FiveIsland/scripts.pory"
	.string "I am visiting my friend's retreat, if you\n"
	.string "must know.$"

FiveIsland_ResortGorgeous_EventScript_Jacki_Text_1:
# 92 "data/maps/FiveIsland/scripts.pory"
	.string "Oh, my, so strong$"

FiveIsland_ResortGorgeous_EventScript_Jacki_Text_2:
# 93 "data/maps/FiveIsland/scripts.pory"
	.string "I find it pleasurable to leisurely\n"
	.string "battle in the gentle sea breeze.$"

FiveIsland_ResortGorgeous_EventScript_Gillian_Text_0:
# 97 "data/maps/FiveIsland/scripts.pory"
	.string "I'm thinking of having a pool made\n"
	.string "specially for Pokémon.$"

FiveIsland_ResortGorgeous_EventScript_Gillian_Text_1:
# 97 "data/maps/FiveIsland/scripts.pory"
	.string "Oh, my goodness gracious!$"

FiveIsland_ResortGorgeous_EventScript_Gillian_Text_2:
# 98 "data/maps/FiveIsland/scripts.pory"
	.string "A pool would be nice, but I must say, a\n"
	.string "sun-room may be sublime.$"

FiveIsland_ResortGorgeous_EventScript_Destin_Text_0:
# 102 "data/maps/FiveIsland/scripts.pory"
	.string "I'm a good runner. I'm really fast!$"

FiveIsland_ResortGorgeous_EventScript_Destin_Text_1:
# 102 "data/maps/FiveIsland/scripts.pory"
	.string "Oops! I rushed things!$"

FiveIsland_ResortGorgeous_EventScript_Destin_Text_2:
# 103 "data/maps/FiveIsland/scripts.pory"
	.string "When I run with the wind, it feels like I\n"
	.string "could fly!$"

FiveIsland_ResortGorgeous_EventScript_Toby_Text_0:
# 107 "data/maps/FiveIsland/scripts.pory"
	.string "I say, this marine life here at this\n"
	.string "resort agrees with me.$"

FiveIsland_ResortGorgeous_EventScript_Toby_Text_1:
# 107 "data/maps/FiveIsland/scripts.pory"
	.string "That's a shocker! You must be joking.$"

FiveIsland_ResortGorgeous_EventScript_Toby_Text_2:
# 108 "data/maps/FiveIsland/scripts.pory"
	.string "Getting so serious over this… How\n"
	.string "nonsensical.$"

FiveIsland_MemorialPillar_EventScript_Milo_Text_0:
# 112 "data/maps/FiveIsland/scripts.pory"
	.string "I'm the eldest of the bird brothers. The\n"
	.string "best thing about birds… it has to be\l"
	.string "the beak.$"

FiveIsland_MemorialPillar_EventScript_Milo_Text_1:
# 112 "data/maps/FiveIsland/scripts.pory"
	.string "Oh, so sharp!$"

FiveIsland_MemorialPillar_EventScript_Milo_Text_2:
# 113 "data/maps/FiveIsland/scripts.pory"
	.string "You can fly to four island from here.$"

FiveIsland_MemorialPillar_EventScript_Chaz_Text_0:
# 117 "data/maps/FiveIsland/scripts.pory"
	.string "I'm the middle kid of the bird brothers.\n"
	.string "The best thing about birds… it has to\l"
	.string "be the wings.$"

FiveIsland_MemorialPillar_EventScript_Chaz_Text_1:
# 117 "data/maps/FiveIsland/scripts.pory"
	.string "Flap, flap!$"

FiveIsland_MemorialPillar_EventScript_Chaz_Text_2:
# 118 "data/maps/FiveIsland/scripts.pory"
	.string "There was a really somber guy over that\n"
	.string "way.$"

FiveIsland_MemorialPillar_EventScript_Harold_Text_0:
# 122 "data/maps/FiveIsland/scripts.pory"
	.string "I'm the youngest of the bird brothers.\n"
	.string "The best thing about birds… it has to\l"
	.string "be the down.$"

FiveIsland_MemorialPillar_EventScript_Harold_Text_1:
# 122 "data/maps/FiveIsland/scripts.pory"
	.string "Down is so comfy… it makes me drowsy…$"

FiveIsland_MemorialPillar_EventScript_Harold_Text_2:
# 123 "data/maps/FiveIsland/scripts.pory"
	.string "It fills me with happiness when bird\n"
	.string "pokémon beg playfully…$"
