# 1 "data/maps/Route2/scripts.pory"

# 2 "data/maps/Route2/scripts.pory"
Route2_MapScripts::
# 3 "data/maps/Route2/scripts.pory"
	.byte 0
# 4 "data/maps/Route2/scripts.pory"
	
# 5 "data/maps/Route2/scripts.pory"
Route2_EventScript_ClosedDoor::
# 6 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_ClosedDoor, MSGBOX_SIGN
# 7 "data/maps/Route2/scripts.pory"
	end
# 8 "data/maps/Route2/scripts.pory"

# 9 "data/maps/Route2/scripts.pory"
Route2_EventScript_RouteSign:: @ 8167F65
# 10 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_RouteSign, MSGBOX_SIGN
# 11 "data/maps/Route2/scripts.pory"
	end
# 12 "data/maps/Route2/scripts.pory"

# 13 "data/maps/Route2/scripts.pory"
Route2_EventScript_DiglettsCaveSign:: @ 8167F6E
# 14 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_DiglettsCave, MSGBOX_SIGN
# 15 "data/maps/Route2/scripts.pory"
	end
# 16 "data/maps/Route2/scripts.pory"
	
# 17 "data/maps/Route2/scripts.pory"
Route2_EventScript_DancingBoy::
# 18 "data/maps/Route2/scripts.pory"
	lock
# 19 "data/maps/Route2/scripts.pory"
	faceplayer
# 20 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_DancingBoy, MSGBOX_NPC
# 21 "data/maps/Route2/scripts.pory"
	release
# 22 "data/maps/Route2/scripts.pory"
	end
# 23 "data/maps/Route2/scripts.pory"
	
# 24 "data/maps/Route2/scripts.pory"
Route2_EventScript_DancingNPC::
# 25 "data/maps/Route2/scripts.pory"
	lock
# 26 "data/maps/Route2/scripts.pory"
	faceplayer
# 27 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_DancingNPC, MSGBOX_NPC
# 28 "data/maps/Route2/scripts.pory"
	release
# 29 "data/maps/Route2/scripts.pory"
	end
# 30 "data/maps/Route2/scripts.pory"

# 31 "data/maps/Route2/scripts.pory"
Route2_Text_RouteSign:: @ 818345E
# 32 "data/maps/Route2/scripts.pory"
    .string "Route 2\n"
# 33 "data/maps/Route2/scripts.pory"
    .string "Viridian City - Pewter City$"
# 34 "data/maps/Route2/scripts.pory"

# 35 "data/maps/Route2/scripts.pory"
Route2_Text_DiglettsCave:: @ 8183482
# 36 "data/maps/Route2/scripts.pory"
    .string "Diglett's Cave$"
# 37 "data/maps/Route2/scripts.pory"
	
# 38 "data/maps/Route2/scripts.pory"
Route2_Text_ClosedDoor:: @ 8183482
# 39 "data/maps/Route2/scripts.pory"
    .string "The door is closed$"
# 40 "data/maps/Route2/scripts.pory"
	
# 41 "data/maps/Route2/scripts.pory"
Route2_Text_DancingBoy:: @ 8183482
# 42 "data/maps/Route2/scripts.pory"
    .string "Today I'm dancing for no reason and\n"
# 43 "data/maps/Route2/scripts.pory"
    .string "someday i will disappear for no reason.$"
# 44 "data/maps/Route2/scripts.pory"
	
# 45 "data/maps/Route2/scripts.pory"
Route2_Text_DancingNPC:: @ 8183482
# 46 "data/maps/Route2/scripts.pory"
    .string "Today my script is not working for no\n"
# 47 "data/maps/Route2/scripts.pory"
    .string "reason and someday my script will\l"
# 48 "data/maps/Route2/scripts.pory"
    .string "work for no reason.$"
