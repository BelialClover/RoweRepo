# 1 "data/maps/LilycoveCity_House2/scripts.pory"

# 2 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_MapScripts:: @ 821ED74
# 3 "data/maps/LilycoveCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_House2/scripts.pory"

# 5 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_EventScript_FatMan:: @ 821ED75
# 6 "data/maps/LilycoveCity_House2/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_House2/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM44, LilycoveCity_House2_EventScript_ReceivedRest
# 9 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_Text_NotAwakeYetHaveThis, MSGBOX_DEFAULT
# 10 "data/maps/LilycoveCity_House2/scripts.pory"
	giveitem ITEM_TM44
# 11 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
# 12 "data/maps/LilycoveCity_House2/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 13 "data/maps/LilycoveCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_TM44
# 14 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_Text_SleepIsEssential, MSGBOX_DEFAULT
# 15 "data/maps/LilycoveCity_House2/scripts.pory"
	release
# 16 "data/maps/LilycoveCity_House2/scripts.pory"
	end
# 17 "data/maps/LilycoveCity_House2/scripts.pory"

# 18 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_EventScript_ReceivedRest:: @ 821EDAC
# 19 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_Text_SleepIsEssential, MSGBOX_DEFAULT
# 20 "data/maps/LilycoveCity_House2/scripts.pory"
	release
# 21 "data/maps/LilycoveCity_House2/scripts.pory"
	end
# 22 "data/maps/LilycoveCity_House2/scripts.pory"

# 23 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_Text_NotAwakeYetHaveThis: @ 821EDB6
# 24 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Huh? What? What's that?\p"
# 25 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "I'm not near awake yet…\n"
# 26 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "You can have this…$"
# 27 "data/maps/LilycoveCity_House2/scripts.pory"

# 28 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_Text_SleepIsEssential: @ 821EDF9
# 29 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Yawn…\p"
# 30 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Sleep is essential for good health…\n"
# 31 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Sleep and regain health…$"
