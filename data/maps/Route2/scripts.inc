Route2_MapScripts::
	.byte 0
	
Route2_EventScript_ClosedDoor::
	msgbox Route2_Text_ClosedDoor, MSGBOX_SIGN
	end

Route2_EventScript_RouteSign:: @ 8167F65
	msgbox Route2_Text_RouteSign, MSGBOX_SIGN
	end

Route2_EventScript_DiglettsCaveSign:: @ 8167F6E
	msgbox Route2_Text_DiglettsCave, MSGBOX_SIGN
	end
	
Route2_EventScript_DancingBoy::
	lock
	faceplayer
	msgbox Route2_Text_DancingBoy, MSGBOX_NPC
	release
	end
	
Route2_EventScript_DancingNPC::
	lock
	faceplayer
	msgbox Route2_Text_DancingNPC, MSGBOX_NPC
	release
	end

Route2_Text_RouteSign:: @ 818345E
    .string "Route 2\n"
    .string "Viridian City - Pewter City$"

Route2_Text_DiglettsCave:: @ 8183482
    .string "Diglett's Cave$"
	
Route2_Text_ClosedDoor:: @ 8183482
    .string "The door is closed$"
	
Route2_Text_DancingBoy:: @ 8183482
    .string "Today I'm dancing for no reason and\n"
    .string "someday i will disappear for no reason.$"
	
Route2_Text_DancingNPC:: @ 8183482
    .string "Today my script is not working for no\n"
    .string "reason and someday my script will\l"
    .string "work for no reason.$"
