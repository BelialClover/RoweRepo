# 1 "data/maps/SootopolisCity_Mart/scripts.pory"

# 2 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_MapScripts:: @ 8226794
# 3 "data/maps/SootopolisCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_Mart/scripts.pory"

# 5 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Clerk:: @ 8226795
# 6 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 13 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 14 "data/maps/SootopolisCity_Mart/scripts.pory"

# 15 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatMan:: @ 82267C2
# 16 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 17 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 18 "data/maps/SootopolisCity_Mart/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
# 19 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_ge SootopolisCity_Mart_EventScript_FatManNoLegendaries
# 20 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_FatManNoLegendaries
# 21 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_TooScaryOutside, MSGBOX_DEFAULT
# 22 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 23 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 24 "data/maps/SootopolisCity_Mart/scripts.pory"

# 25 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatManNoLegendaries:: @ 82267E2
# 26 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_PPUpIsGreat, MSGBOX_DEFAULT
# 27 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 28 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 29 "data/maps/SootopolisCity_Mart/scripts.pory"

# 30 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Gentleman:: @ 82267EC
# 31 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 32 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 33 "data/maps/SootopolisCity_Mart/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
# 34 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_ge SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
# 35 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
# 36 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_DidSomethingAwaken, MSGBOX_DEFAULT
# 37 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 38 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 39 "data/maps/SootopolisCity_Mart/scripts.pory"

# 40 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_GentlemanNoLegendaries:: @ 822680C
# 41 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_FullRestoreItemOfDreams, MSGBOX_DEFAULT
# 42 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 43 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 44 "data/maps/SootopolisCity_Mart/scripts.pory"

# 45 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_PPUpIsGreat: @ 8226816
# 46 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "PP UP is great!\p"
# 47 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "It raises the Power Points, the PP,\n"
# 48 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "of a Pokémon move.$"
# 49 "data/maps/SootopolisCity_Mart/scripts.pory"

# 50 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_TooScaryOutside: @ 822685D
# 51 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "What…\n"
# 52 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "What is happening?\p"
# 53 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "I really want to know, but it's too\n"
# 54 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "scary to go outside.$"
# 55 "data/maps/SootopolisCity_Mart/scripts.pory"

# 56 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_FullRestoreItemOfDreams: @ 82268AF
# 57 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Do you know Full Restore?\p"
# 58 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Full restoration of HP!\n"
# 59 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Eradication of all status problems!\p"
# 60 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "It's truly an item of your dreams!$"
# 61 "data/maps/SootopolisCity_Mart/scripts.pory"

# 62 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_DidSomethingAwaken: @ 8226928
# 63 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "This weather…\n"
# 64 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Did something awaken?$"
