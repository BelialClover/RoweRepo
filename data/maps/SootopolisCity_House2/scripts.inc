# 1 "data/maps/SootopolisCity_House2/scripts.pory"

# 2 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_MapScripts:: @ 8226A76
# 3 "data/maps/SootopolisCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_House2/scripts.pory"

# 5 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_EventScript_ExpertF:: @ 8226A77
# 6 "data/maps/SootopolisCity_House2/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_House2/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs, MSGBOX_YESNO
# 9 "data/maps/SootopolisCity_House2/scripts.pory"
	compare VAR_RESULT, YES
# 10 "data/maps/SootopolisCity_House2/scripts.pory"
	call_if_eq SootopolisCity_House2_EventScript_KnowAboutOrbs
# 11 "data/maps/SootopolisCity_House2/scripts.pory"
	compare VAR_RESULT, NO
# 12 "data/maps/SootopolisCity_House2/scripts.pory"
	call_if_eq SootopolisCity_House2_EventScript_DontKnowAboutOrbs
# 13 "data/maps/SootopolisCity_House2/scripts.pory"
	release
# 14 "data/maps/SootopolisCity_House2/scripts.pory"
	end
# 15 "data/maps/SootopolisCity_House2/scripts.pory"

# 16 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_EventScript_KnowAboutOrbs:: @ 8226A99
# 17 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_YesTwoOrbsSideBySide, MSGBOX_DEFAULT
# 18 "data/maps/SootopolisCity_House2/scripts.pory"
	return
# 19 "data/maps/SootopolisCity_House2/scripts.pory"

# 20 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_EventScript_DontKnowAboutOrbs:: @ 8226AA2
# 21 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_OughtToVisitAndSee, MSGBOX_DEFAULT
# 22 "data/maps/SootopolisCity_House2/scripts.pory"
	return
# 23 "data/maps/SootopolisCity_House2/scripts.pory"

# 24 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs: @ 8226AAB
# 25 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Mt. Pyre…\p"
# 26 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "At its peak are two orbs placed side\n"
# 27 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "by side. Did you know?$"
# 28 "data/maps/SootopolisCity_House2/scripts.pory"

# 29 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_Text_YesTwoOrbsSideBySide: @ 8226AF1
# 30 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Yes, two orbs side by side…\p"
# 31 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "The sight of them together…\n"
# 32 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "It is somehow soothing…$"
# 33 "data/maps/SootopolisCity_House2/scripts.pory"

# 34 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_Text_OughtToVisitAndSee: @ 8226B41
# 35 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Is that so?\n"
# 36 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Perhaps you ought to visit and see…$"
