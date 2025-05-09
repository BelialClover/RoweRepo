# 1 "data/maps/SootopolisCity_House1/scripts.pory"

# 2 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_MapScripts:: @ 822694C
# 3 "data/maps/SootopolisCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_House1/scripts.pory"

# 5 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_BrickBreakBlackBelt:: @ 822694D
# 6 "data/maps/SootopolisCity_House1/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM31, SootopolisCity_House1_EventScript_ReceivedBrickBreak
# 9 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_DevelopedThisTM, MSGBOX_DEFAULT
# 10 "data/maps/SootopolisCity_House1/scripts.pory"
	giveitem ITEM_TM31
# 11 "data/maps/SootopolisCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
# 12 "data/maps/SootopolisCity_House1/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 13 "data/maps/SootopolisCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_TM31
# 14 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
# 15 "data/maps/SootopolisCity_House1/scripts.pory"
	release
# 16 "data/maps/SootopolisCity_House1/scripts.pory"
	end
# 17 "data/maps/SootopolisCity_House1/scripts.pory"

# 18 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_ReceivedBrickBreak:: @ 8226984
# 19 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
# 20 "data/maps/SootopolisCity_House1/scripts.pory"
	release
# 21 "data/maps/SootopolisCity_House1/scripts.pory"
	end
# 22 "data/maps/SootopolisCity_House1/scripts.pory"

# 23 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_Kecleon:: @ 822698E
# 24 "data/maps/SootopolisCity_House1/scripts.pory"
	lock
# 25 "data/maps/SootopolisCity_House1/scripts.pory"
	faceplayer
# 26 "data/maps/SootopolisCity_House1/scripts.pory"
	waitse
# 27 "data/maps/SootopolisCity_House1/scripts.pory"
	playmoncry SPECIES_KECLEON, 0
# 28 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_Kecleon, MSGBOX_DEFAULT
# 29 "data/maps/SootopolisCity_House1/scripts.pory"
	waitmoncry
# 30 "data/maps/SootopolisCity_House1/scripts.pory"
	release
# 31 "data/maps/SootopolisCity_House1/scripts.pory"
	end
# 32 "data/maps/SootopolisCity_House1/scripts.pory"

# 33 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_DevelopedThisTM: @ 82269A1
# 34 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "For thirty years I've remained in\n"
# 35 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "Sootopolis honing my skills.\p"
# 36 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "I developed a shattering TM.\n"
# 37 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "I bequeath it to you!$"
# 38 "data/maps/SootopolisCity_House1/scripts.pory"

# 39 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_ExplainBrickBreak: @ 8226A13
# 40 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "TM31 contains Brick Break! It's a move\n"
# 41 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "so horrible that I can't describe it.$"
# 42 "data/maps/SootopolisCity_House1/scripts.pory"

# 43 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_Kecleon: @ 8226A60
# 44 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "Kecleon: Puu puhyaah.$"
