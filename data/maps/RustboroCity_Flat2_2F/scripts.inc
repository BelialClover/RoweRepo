# 1 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_MapScripts:: @ 8215FD7
# 3 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 5 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_OldMan:: @ 8215FD8
# 6 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays, MSGBOX_NPC
# 7 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 8 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 9 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_NinjaBoy:: @ 8215FE1
# 10 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	lock
# 11 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	faceplayer
# 12 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_PREMIER_BALL_RUSTBORO, RustboroCity_Flat2_2F_EventScript_GavePremierBall
# 13 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt, MSGBOX_DEFAULT
# 14 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	giveitem ITEM_PREMIER_BALL
# 15 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 16 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 17 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	setflag FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
# 18 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	release
# 19 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 20 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 21 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_GavePremierBall:: @ 8216010
# 22 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo, MSGBOX_DEFAULT
# 23 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	release
# 24 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 25 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 26 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays: @ 821601A
# 27 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "Way back in the old days, Devon was just\n"
# 28 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "a teeny, tiny company.$"
# 29 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 30 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt: @ 821605A
# 31 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "My daddy's working at the Corporation.\p"
# 32 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "My daddy made this!\n"
# 33 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "But I can't use it, so you can have it.$"
# 34 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 35 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo: @ 82160BD
# 36 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "My daddy's working at the Corporation.\p"
# 37 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "When I grow up, I'm going to work for\n"
# 38 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "Devon, too.$"
