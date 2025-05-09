EightIsland_MapScripts::
# 2 "data/maps/EightIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EightIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EightIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/EightIsland/scripts.pory"
	setflag FLAG_VISITED_EIGHT_ISLAND
	return


EightIsland_EventScript_Boy::
# 8 "data/maps/EightIsland/scripts.pory"
	lock
# 9 "data/maps/EightIsland/scripts.pory"
	faceplayer
# 10 "data/maps/EightIsland/scripts.pory"
	msgbox EightIsland_EventScript_Boy_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/EightIsland/scripts.pory"
	release
	end


EightIsland_EventScript_Girl::
# 16 "data/maps/EightIsland/scripts.pory"
	lock
# 17 "data/maps/EightIsland/scripts.pory"
	faceplayer
# 18 "data/maps/EightIsland/scripts.pory"
	msgbox EightIsland_EventScript_Girl_Text_0, MSGBOX_DEFAULT
# 19 "data/maps/EightIsland/scripts.pory"
	release
	end


EightIsland_EventScript_Cooltrainer::
# 24 "data/maps/EightIsland/scripts.pory"
	lock
# 25 "data/maps/EightIsland/scripts.pory"
	faceplayer
# 26 "data/maps/EightIsland/scripts.pory"
	msgbox EightIsland_EventScript_Cooltrainer_Text_0, MSGBOX_DEFAULT
# 27 "data/maps/EightIsland/scripts.pory"
	release
	end


EightIsland_EventScript_Cooltrainer_2::
# 32 "data/maps/EightIsland/scripts.pory"
	lock
# 33 "data/maps/EightIsland/scripts.pory"
	faceplayer
# 34 "data/maps/EightIsland/scripts.pory"
	msgbox EightIsland_EventScript_Cooltrainer_2_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/EightIsland/scripts.pory"
	release
	end


EightIsland_EventScript_OldMan::
# 40 "data/maps/EightIsland/scripts.pory"
	lock
# 41 "data/maps/EightIsland/scripts.pory"
	faceplayer
# 42 "data/maps/EightIsland/scripts.pory"
	msgbox EightIsland_EventScript_OldMan_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/EightIsland/scripts.pory"
	release
	end


EightIsland_EventScript_IslandSign::
# 48 "data/maps/EightIsland/scripts.pory"
	msgbox EightIsland_EventScript_IslandSign_Text_0, MSGBOX_SIGN
	end


OneIsland_EventScript_Island_GymSign::
# 53 "data/maps/EightIsland/scripts.pory"
	msgbox OneIsland_EventScript_Island_GymSign_Text_0, MSGBOX_SIGN
	end


TwoIsland_EventScript_Island_GymSign::
# 58 "data/maps/EightIsland/scripts.pory"
	msgbox TwoIsland_EventScript_Island_GymSign_Text_0, MSGBOX_SIGN
	end


ThreeIsland_EventScript_Island_GymSign::
# 63 "data/maps/EightIsland/scripts.pory"
	msgbox ThreeIsland_EventScript_Island_GymSign_Text_0, MSGBOX_SIGN
	end


FourIsland_EventScript_Island_GymSign::
# 68 "data/maps/EightIsland/scripts.pory"
	msgbox FourIsland_EventScript_Island_GymSign_Text_0, MSGBOX_SIGN
	end


FiveIsland_EventScript_Island_GymSign::
# 73 "data/maps/EightIsland/scripts.pory"
	msgbox FiveIsland_EventScript_Island_GymSign_Text_0, MSGBOX_SIGN
	end


SixIsland_EventScript_Island_GymSign::
# 78 "data/maps/EightIsland/scripts.pory"
	msgbox SixIsland_EventScript_Island_GymSign_Text_0, MSGBOX_SIGN
	end


SevenIsland_EventScript_Island_GymSign::
# 83 "data/maps/EightIsland/scripts.pory"
	msgbox SevenIsland_EventScript_Island_GymSign_Text_0, MSGBOX_SIGN
	end


EightIsland_EventScript_Island_GymSign::
# 88 "data/maps/EightIsland/scripts.pory"
	msgbox EightIsland_EventScript_Island_GymSign_Text_0, MSGBOX_SIGN
	end


Common_EventScript_New_Mauville_Sign::
# 93 "data/maps/EightIsland/scripts.pory"
	msgbox Common_EventScript_New_Mauville_Sign_Text_0, MSGBOX_SIGN
	end


FiveIsland_EventScript_Sailor::
# 99 "data/maps/EightIsland/scripts.pory"
	lock
# 100 "data/maps/EightIsland/scripts.pory"
	faceplayer
# 101 "data/maps/EightIsland/scripts.pory"
	goto_if_unset FLAG_SAILED_FROM_SLATEPORT, FiveIsland_EventScript_Sailor_2
# 105 "data/maps/EightIsland/scripts.pory"
	msgbox FiveIsland_EventScript_Sailor_Text_1, MSGBOX_YESNO
FiveIsland_EventScript_Sailor_1:
# 108 "data/maps/EightIsland/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FiveIsland_EventScript_Sailor_6
# 112 "data/maps/EightIsland/scripts.pory"
	msgbox FiveIsland_EventScript_Sailor_Text_3, MSGBOX_DEFAULT
# 113 "data/maps/EightIsland/scripts.pory"
	closemessage
# 114 "data/maps/EightIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestDown
# 115 "data/maps/EightIsland/scripts.pory"
	waitmovement 0
# 116 "data/maps/EightIsland/scripts.pory"
	delay 30
# 117 "data/maps/EightIsland/scripts.pory"
	hideobjectat 3, MAP_FIVE_ISLAND
# 118 "data/maps/EightIsland/scripts.pory"
	special HideFollower
# 119 "data/maps/EightIsland/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 120 "data/maps/EightIsland/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 121 "data/maps/EightIsland/scripts.pory"
	goto_if_unset FLAG_SAILED_FROM_SLATEPORT, FiveIsland_EventScript_Sailor_10
# 125 "data/maps/EightIsland/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 255, 8, 11
FiveIsland_EventScript_Sailor_9:
# 127 "data/maps/EightIsland/scripts.pory"
	waitstate
FiveIsland_EventScript_Sailor_5:
# 129 "data/maps/EightIsland/scripts.pory"
	release
	end

FiveIsland_EventScript_Sailor_2:
# 102 "data/maps/EightIsland/scripts.pory"
	msgbox FiveIsland_EventScript_Sailor_Text_0, MSGBOX_YESNO
	goto FiveIsland_EventScript_Sailor_1

FiveIsland_EventScript_Sailor_6:
# 109 "data/maps/EightIsland/scripts.pory"
	msgbox FiveIsland_EventScript_Sailor_Text_2, MSGBOX_DEFAULT
	goto FiveIsland_EventScript_Sailor_5

FiveIsland_EventScript_Sailor_10:
# 122 "data/maps/EightIsland/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 255, 8, 11
	goto FiveIsland_EventScript_Sailor_9


SixIsland_EventScript_Sailor::
# 135 "data/maps/EightIsland/scripts.pory"
	lock
# 136 "data/maps/EightIsland/scripts.pory"
	faceplayer
# 137 "data/maps/EightIsland/scripts.pory"
	goto_if_unset FLAG_SAILED_FROM_SLATEPORT, SixIsland_EventScript_Sailor_2
# 141 "data/maps/EightIsland/scripts.pory"
	msgbox SixIsland_EventScript_Sailor_Text_1, MSGBOX_YESNO
SixIsland_EventScript_Sailor_1:
# 144 "data/maps/EightIsland/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SixIsland_EventScript_Sailor_6
# 148 "data/maps/EightIsland/scripts.pory"
	msgbox FiveIsland_EventScript_Sailor_Text_3, MSGBOX_DEFAULT
# 149 "data/maps/EightIsland/scripts.pory"
	closemessage
# 150 "data/maps/EightIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestDown
# 151 "data/maps/EightIsland/scripts.pory"
	waitmovement 0
# 152 "data/maps/EightIsland/scripts.pory"
	delay 30
# 153 "data/maps/EightIsland/scripts.pory"
	hideobjectat 3, MAP_SIX_ISLAND
# 154 "data/maps/EightIsland/scripts.pory"
	special HideFollower
# 155 "data/maps/EightIsland/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 156 "data/maps/EightIsland/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 157 "data/maps/EightIsland/scripts.pory"
	goto_if_unset FLAG_SAILED_FROM_SLATEPORT, SixIsland_EventScript_Sailor_10
# 161 "data/maps/EightIsland/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 255, 8, 11
SixIsland_EventScript_Sailor_9:
# 163 "data/maps/EightIsland/scripts.pory"
	waitstate
SixIsland_EventScript_Sailor_5:
# 165 "data/maps/EightIsland/scripts.pory"
	release
	end

SixIsland_EventScript_Sailor_2:
# 138 "data/maps/EightIsland/scripts.pory"
	msgbox SixIsland_EventScript_Sailor_Text_0, MSGBOX_YESNO
	goto SixIsland_EventScript_Sailor_1

SixIsland_EventScript_Sailor_6:
# 145 "data/maps/EightIsland/scripts.pory"
	msgbox FiveIsland_EventScript_Sailor_Text_2, MSGBOX_DEFAULT
	goto SixIsland_EventScript_Sailor_5

SixIsland_EventScript_Sailor_10:
# 158 "data/maps/EightIsland/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 255, 8, 11
	goto SixIsland_EventScript_Sailor_9


SevenIsland_EventScript_Sailor::
# 171 "data/maps/EightIsland/scripts.pory"
	lock
# 172 "data/maps/EightIsland/scripts.pory"
	faceplayer
# 173 "data/maps/EightIsland/scripts.pory"
	goto_if_unset FLAG_SAILED_FROM_SLATEPORT, SevenIsland_EventScript_Sailor_2
# 177 "data/maps/EightIsland/scripts.pory"
	msgbox SevenIsland_EventScript_Sailor_Text_1, MSGBOX_YESNO
SevenIsland_EventScript_Sailor_1:
# 180 "data/maps/EightIsland/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SevenIsland_EventScript_Sailor_6
# 184 "data/maps/EightIsland/scripts.pory"
	msgbox FiveIsland_EventScript_Sailor_Text_3, MSGBOX_DEFAULT
# 185 "data/maps/EightIsland/scripts.pory"
	closemessage
# 186 "data/maps/EightIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestDown
# 187 "data/maps/EightIsland/scripts.pory"
	waitmovement 0
# 188 "data/maps/EightIsland/scripts.pory"
	delay 30
# 189 "data/maps/EightIsland/scripts.pory"
	hideobjectat 1, MAP_SEVEN_ISLAND
# 190 "data/maps/EightIsland/scripts.pory"
	special HideFollower
# 191 "data/maps/EightIsland/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 192 "data/maps/EightIsland/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 193 "data/maps/EightIsland/scripts.pory"
	goto_if_unset FLAG_SAILED_FROM_SLATEPORT, SevenIsland_EventScript_Sailor_10
# 197 "data/maps/EightIsland/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 255, 8, 11
SevenIsland_EventScript_Sailor_9:
# 199 "data/maps/EightIsland/scripts.pory"
	waitstate
SevenIsland_EventScript_Sailor_5:
# 201 "data/maps/EightIsland/scripts.pory"
	release
	end

SevenIsland_EventScript_Sailor_2:
# 174 "data/maps/EightIsland/scripts.pory"
	msgbox SevenIsland_EventScript_Sailor_Text_0, MSGBOX_YESNO
	goto SevenIsland_EventScript_Sailor_1

SevenIsland_EventScript_Sailor_6:
# 181 "data/maps/EightIsland/scripts.pory"
	msgbox FiveIsland_EventScript_Sailor_Text_2, MSGBOX_DEFAULT
	goto SevenIsland_EventScript_Sailor_5

SevenIsland_EventScript_Sailor_10:
# 194 "data/maps/EightIsland/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 255, 8, 11
	goto SevenIsland_EventScript_Sailor_9


EightIsland_EventScript_Sailor::
# 207 "data/maps/EightIsland/scripts.pory"
	lock
# 208 "data/maps/EightIsland/scripts.pory"
	faceplayer
# 209 "data/maps/EightIsland/scripts.pory"
	goto_if_unset FLAG_SAILED_FROM_SLATEPORT, EightIsland_EventScript_Sailor_2
# 213 "data/maps/EightIsland/scripts.pory"
	msgbox EightIsland_EventScript_Sailor_Text_1, MSGBOX_YESNO
EightIsland_EventScript_Sailor_1:
# 216 "data/maps/EightIsland/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EightIsland_EventScript_Sailor_6
# 220 "data/maps/EightIsland/scripts.pory"
	msgbox FiveIsland_EventScript_Sailor_Text_3, MSGBOX_DEFAULT
# 221 "data/maps/EightIsland/scripts.pory"
	closemessage
# 222 "data/maps/EightIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestDown
# 223 "data/maps/EightIsland/scripts.pory"
	waitmovement 0
# 224 "data/maps/EightIsland/scripts.pory"
	delay 30
# 225 "data/maps/EightIsland/scripts.pory"
	hideobjectat 1, MAP_EIGHT_ISLAND
# 226 "data/maps/EightIsland/scripts.pory"
	special HideFollower
# 227 "data/maps/EightIsland/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 228 "data/maps/EightIsland/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 229 "data/maps/EightIsland/scripts.pory"
	goto_if_unset FLAG_SAILED_FROM_SLATEPORT, EightIsland_EventScript_Sailor_10
# 233 "data/maps/EightIsland/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 255, 8, 11
EightIsland_EventScript_Sailor_9:
# 235 "data/maps/EightIsland/scripts.pory"
	waitstate
EightIsland_EventScript_Sailor_5:
# 237 "data/maps/EightIsland/scripts.pory"
	release
	end

EightIsland_EventScript_Sailor_2:
# 210 "data/maps/EightIsland/scripts.pory"
	msgbox EightIsland_EventScript_Sailor_Text_0, MSGBOX_YESNO
	goto EightIsland_EventScript_Sailor_1

EightIsland_EventScript_Sailor_6:
# 217 "data/maps/EightIsland/scripts.pory"
	msgbox FiveIsland_EventScript_Sailor_Text_2, MSGBOX_DEFAULT
	goto EightIsland_EventScript_Sailor_5

EightIsland_EventScript_Sailor_10:
# 230 "data/maps/EightIsland/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 255, 8, 11
	goto EightIsland_EventScript_Sailor_9


EightIsland_EventScript_Boy_Text_0:
# 10 "data/maps/EightIsland/scripts.pory"
	.string "Someone told me that you could find\n"
	.string "Dragon-types in that cave, I wonder if\l"
	.string "I can find a Dratini.$"

EightIsland_EventScript_Girl_Text_0:
# 18 "data/maps/EightIsland/scripts.pory"
	.string "This Island was discovered by the gym\n"
	.string "leader Clair after being told that she\l"
	.string "would not be one of the Sevii Leaders\l"
	.string "because there were only 7 Islands.$"

EightIsland_EventScript_Cooltrainer_Text_0:
# 26 "data/maps/EightIsland/scripts.pory"
	.string "I bought some good held items in that\n"
	.string "shop, you should give it a look.$"

EightIsland_EventScript_Cooltrainer_2_Text_0:
# 34 "data/maps/EightIsland/scripts.pory"
	.string "I bought evolution stones that helped\n"
	.string "me evolve my Eevee.$"

EightIsland_EventScript_OldMan_Text_0:
# 42 "data/maps/EightIsland/scripts.pory"
	.string "They say that the cave there is really\n"
	.string "old but there is no way to know since\l"
	.string "this island was just discovered.$"

EightIsland_EventScript_IslandSign_Text_0:
# 48 "data/maps/EightIsland/scripts.pory"
	.string "Eight Island\n"
	.string "A Quiet Mountain Retreat$"

OneIsland_EventScript_Island_GymSign_Text_0:
# 53 "data/maps/EightIsland/scripts.pory"
	.string "One Island Pokémon Gym\n"
	.string "Leader: Falkner\l"
	.string "“The Elegant Master of Flying Pokémon”$"

TwoIsland_EventScript_Island_GymSign_Text_0:
# 58 "data/maps/EightIsland/scripts.pory"
	.string "Two Island Pokémon Gym\n"
	.string "Leader: Bugsy\l"
	.string "“The Walking Bug Pokémon Encyclopedia”$"

ThreeIsland_EventScript_Island_GymSign_Text_0:
# 63 "data/maps/EightIsland/scripts.pory"
	.string "Three Island Pokémon Gym\n"
	.string "Leader: Whitney\l"
	.string "“The Incredibly Pretty Girl”$"

FourIsland_EventScript_Island_GymSign_Text_0:
# 68 "data/maps/EightIsland/scripts.pory"
	.string "Four Island Pokémon Gym\n"
	.string "Leader: Morty\l"
	.string "“The Mystic Seer of the Future”$"

FiveIsland_EventScript_Island_GymSign_Text_0:
# 73 "data/maps/EightIsland/scripts.pory"
	.string "Five Island Pokémon Gym\n"
	.string "Leader: Chuck\l"
	.string "“His Roaring Fists Do the Talking”$"

SixIsland_EventScript_Island_GymSign_Text_0:
# 78 "data/maps/EightIsland/scripts.pory"
	.string "Six Island Pokémon Gym\n"
	.string "Leader: Jasmine\l"
	.string "“The Steel-Clad Defense Girl”$"

SevenIsland_EventScript_Island_GymSign_Text_0:
# 83 "data/maps/EightIsland/scripts.pory"
	.string "Seven Island Pokémon Gym\n"
	.string "Leader: Pryce\l"
	.string "“The Teacher of Winter's Harshness”$"

EightIsland_EventScript_Island_GymSign_Text_0:
# 88 "data/maps/EightIsland/scripts.pory"
	.string "Eight Island Pokémon Gym\n"
	.string "Leader: Clair\l"
	.string "“The Blessed User of Dragon Pokémon”$"

Common_EventScript_New_Mauville_Sign_Text_0:
# 93 "data/maps/EightIsland/scripts.pory"
	.string "New Mauville\n"
	.string "This project died in development.$"

FiveIsland_EventScript_Sailor_Text_0:
# 102 "data/maps/EightIsland/scripts.pory"
	.string "Do you want to return to Lilycove?$"

FiveIsland_EventScript_Sailor_Text_1:
# 105 "data/maps/EightIsland/scripts.pory"
	.string "Do you want to return to Slateport?$"

FiveIsland_EventScript_Sailor_Text_2:
# 109 "data/maps/EightIsland/scripts.pory"
	.string "Aye, right, as you like, then.$"

FiveIsland_EventScript_Sailor_Text_3:
# 112 "data/maps/EightIsland/scripts.pory"
	.string "Aye, right, then!\n"
	.string "Sail home we will!$"

SixIsland_EventScript_Sailor_Text_0:
# 138 "data/maps/EightIsland/scripts.pory"
	.string "I heard there is a Forest nearby, have\n"
	.string "you visited it?\p"
	.string "Do you want to return to Lilycove?$"

SixIsland_EventScript_Sailor_Text_1:
# 141 "data/maps/EightIsland/scripts.pory"
	.string "I heard there is a Forest nearby, have\n"
	.string "you visited it?\p"
	.string "Do you want to return to Slateport?$"

SevenIsland_EventScript_Sailor_Text_0:
# 174 "data/maps/EightIsland/scripts.pory"
	.string "Why is the Gym not on the Island?\p"
	.string "Do you want to return to Lilycove?$"

SevenIsland_EventScript_Sailor_Text_1:
# 177 "data/maps/EightIsland/scripts.pory"
	.string "Why is the Gym not on the Island?\p"
	.string "Do you want to return to Slateport?$"

EightIsland_EventScript_Sailor_Text_0:
# 210 "data/maps/EightIsland/scripts.pory"
	.string "That's an strange cave, eh?\p"
	.string "Do you want to return to Lilycove?$"

EightIsland_EventScript_Sailor_Text_1:
# 213 "data/maps/EightIsland/scripts.pory"
	.string "That's an strange cave, eh?\p"
	.string "Do you want to return to Slateport?$"
