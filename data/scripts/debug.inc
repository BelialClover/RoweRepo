Debug_ShowFieldMessageStringVar4::
# 2 "data/scripts/debug.pory"
	special ShowFieldMessageStringVar4
# 3 "data/scripts/debug.pory"
	waitmessage
# 4 "data/scripts/debug.pory"
	waitbuttonpress
# 5 "data/scripts/debug.pory"
	releaseall
	end


Debug_CheatStart::
# 10 "data/scripts/debug.pory"
	trainerbattle_single TRAINER_DEBUG_OPPONENT, Debug_CheatStart_Text_0, Debug_CheatStart_Text_1
# 11 "data/scripts/debug.pory"
	msgbox Debug_CheatStart_Text_2, MSGBOX_AUTOCLOSE
	return


Debug_CheatStart_Text_0:
# 10 "data/scripts/debug.pory"
	.string "Debug Battle Start!$"

Debug_CheatStart_Text_1:
# 10 "data/scripts/debug.pory"
	.string "Is this for real?$"

Debug_CheatStart_Text_2:
# 11 "data/scripts/debug.pory"
	.string "...$"
