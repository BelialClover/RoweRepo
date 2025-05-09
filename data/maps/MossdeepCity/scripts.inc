# 1 "data/maps/MossdeepCity/scripts.pory"

# 2 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_1, 10
# 3 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_2, 11
# 4 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_3, 12
# 5 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_4, 13
# 6 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_MAXIE, 14
# 7 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_SCOTT, 16
# 8 "data/maps/MossdeepCity/scripts.pory"

# 9 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_MapScripts:: @ 81E4A96
# 10 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
# 11 "data/maps/MossdeepCity/scripts.pory"
	.byte 0
# 12 "data/maps/MossdeepCity/scripts.pory"

# 13 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition: @ 81E4A9C
# 14 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_ROUTE124
# 15 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 16 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 17 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 18 "data/maps/MossdeepCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 19 "data/maps/MossdeepCity/scripts.pory"
	end
# 20 "data/maps/MossdeepCity/scripts.pory"

# 21 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF:: @ 81E4AB2
# 22 "data/maps/MossdeepCity/scripts.pory"
	lock
# 23 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 24 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 25 "data/maps/MossdeepCity/scripts.pory"
	release
# 26 "data/maps/MossdeepCity/scripts.pory"
	end
# 27 "data/maps/MossdeepCity/scripts.pory"

# 28 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone:: @ 81E4AC7
# 29 "data/maps/MossdeepCity/scripts.pory"
	lock
# 30 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 31 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 32 "data/maps/MossdeepCity/scripts.pory"
	release
# 33 "data/maps/MossdeepCity/scripts.pory"
	end
# 34 "data/maps/MossdeepCity/scripts.pory"

# 35 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor:: @ 81E4AD1
# 36 "data/maps/MossdeepCity/scripts.pory"
	lock
# 37 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 38 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 39 "data/maps/MossdeepCity/scripts.pory"
	release
# 40 "data/maps/MossdeepCity/scripts.pory"
	end
# 41 "data/maps/MossdeepCity/scripts.pory"

# 42 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone:: @ 81E4AE6
# 43 "data/maps/MossdeepCity/scripts.pory"
	lock
# 44 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 45 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 46 "data/maps/MossdeepCity/scripts.pory"
	release
# 47 "data/maps/MossdeepCity/scripts.pory"
	end
# 48 "data/maps/MossdeepCity/scripts.pory"

# 49 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy:: @ 81E4AF0
# 50 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 51 "data/maps/MossdeepCity/scripts.pory"
	end
# 52 "data/maps/MossdeepCity/scripts.pory"

# 53 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM:: @ 81E4AF9
# 54 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 55 "data/maps/MossdeepCity/scripts.pory"
	end
# 56 "data/maps/MossdeepCity/scripts.pory"

# 57 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl:: @ 81E4B02
# 58 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 59 "data/maps/MossdeepCity/scripts.pory"
	end
# 60 "data/maps/MossdeepCity/scripts.pory"

# 61 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman:: @ 81E4B0B
# 62 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 63 "data/maps/MossdeepCity/scripts.pory"
	end
# 64 "data/maps/MossdeepCity/scripts.pory"

# 65 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_WhiteRock:: @ 81E4B14
# 66 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
# 67 "data/maps/MossdeepCity/scripts.pory"
	end
# 68 "data/maps/MossdeepCity/scripts.pory"

# 69 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign:: @ 81E4B1D
# 70 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 71 "data/maps/MossdeepCity/scripts.pory"
	end
# 72 "data/maps/MossdeepCity/scripts.pory"

# 73 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign:: @ 81E4B26
# 74 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 75 "data/maps/MossdeepCity/scripts.pory"
	end
# 76 "data/maps/MossdeepCity/scripts.pory"

# 77 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign:: @ 81E4B2F
# 78 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 79 "data/maps/MossdeepCity/scripts.pory"
	end
# 80 "data/maps/MossdeepCity/scripts.pory"

# 81 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep:: @ 81E4B38
# 82 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 83 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 84 "data/maps/MossdeepCity/scripts.pory"
	end
# 85 "data/maps/MossdeepCity/scripts.pory"

# 86 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter:: @ 81E4B41
# 87 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 88 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
# 89 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 91 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 92 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 93 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 94 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
# 96 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 97 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 98 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 99 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 100 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MAXIE
# 102 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 103 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 104 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 105 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 106 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 107 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 108 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 109 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 110 "data/maps/MossdeepCity/scripts.pory"
	end
# 111 "data/maps/MossdeepCity/scripts.pory"

# 112 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieGestureToSpaceCenter: @ 81E4BAD
# 113 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 114 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 115 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 116 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 117 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 118 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 119 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 120 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 121 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 122 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 123 "data/maps/MossdeepCity/scripts.pory"

# 124 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter: @ 81E4BB7
# 125 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 126 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 127 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 128 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 129 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 130 "data/maps/MossdeepCity/scripts.pory"

# 131 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieEnterSpaceCenter: @ 81E4BBC
# 132 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 133 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 135 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 136 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 137 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 138 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 139 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 140 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 141 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 142 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 143 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 144 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 145 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 146 "data/maps/MossdeepCity/scripts.pory"

# 147 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter: @ 81E4BCA
# 148 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 149 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 150 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 151 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 152 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 153 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 154 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 155 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 156 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 157 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 158 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 159 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 160 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 161 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 162 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 163 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 164 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 165 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 166 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 167 "data/maps/MossdeepCity/scripts.pory"

# 168 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter: @ 81E4BDD
# 169 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 170 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 171 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 172 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 173 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 174 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 177 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 178 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 179 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 180 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 181 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 182 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 183 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 184 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 185 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 186 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 187 "data/maps/MossdeepCity/scripts.pory"

# 188 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter: @ 81E4BEF
# 189 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 190 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 191 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 192 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 193 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 194 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 195 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 196 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 197 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 198 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 199 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 200 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 201 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 202 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 203 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 204 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 205 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 206 "data/maps/MossdeepCity/scripts.pory"

# 207 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter: @ 81E4C00
# 208 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 209 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 210 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 211 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 212 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 213 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 214 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 215 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 216 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 217 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 218 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 219 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 220 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 221 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 222 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 223 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 224 "data/maps/MossdeepCity/scripts.pory"

# 225 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man:: @ 81E4C10
# 226 "data/maps/MossdeepCity/scripts.pory"
	lock
# 227 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 228 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 229 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 230 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 231 "data/maps/MossdeepCity/scripts.pory"
	release
# 232 "data/maps/MossdeepCity/scripts.pory"
	end
# 233 "data/maps/MossdeepCity/scripts.pory"

# 234 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy:: @ 81E4C26
# 235 "data/maps/MossdeepCity/scripts.pory"
	lock
# 236 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 237 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
# 238 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 239 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, NO
# 240 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq MossdeepCity_EventScript_DeclineKingsRock
# 241 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 242 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 243 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 244 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 245 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 246 "data/maps/MossdeepCity/scripts.pory"
	release
# 247 "data/maps/MossdeepCity/scripts.pory"
	end
# 248 "data/maps/MossdeepCity/scripts.pory"

# 249 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock:: @ 81E4C68
# 250 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 251 "data/maps/MossdeepCity/scripts.pory"
	release
# 252 "data/maps/MossdeepCity/scripts.pory"
	end
# 253 "data/maps/MossdeepCity/scripts.pory"

# 254 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock:: @ 81E4C72
# 255 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 256 "data/maps/MossdeepCity/scripts.pory"
	release
# 257 "data/maps/MossdeepCity/scripts.pory"
	end
# 258 "data/maps/MossdeepCity/scripts.pory"

# 259 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt:: @ 81E4C7C
# 260 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 261 "data/maps/MossdeepCity/scripts.pory"
	end
# 262 "data/maps/MossdeepCity/scripts.pory"

# 263 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott:: @ 81E4C85
# 264 "data/maps/MossdeepCity/scripts.pory"
	lock
# 265 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 266 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 267 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 268 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 269 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq MossdeepCity_EventScript_ScottExitNorth
# 270 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 271 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq MossdeepCity_EventScript_ScottExitEast
# 272 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 273 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 274 "data/maps/MossdeepCity/scripts.pory"
	release
# 275 "data/maps/MossdeepCity/scripts.pory"
	end
# 276 "data/maps/MossdeepCity/scripts.pory"

# 277 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth:: @ 81E4CB0
# 278 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 279 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitNorth
# 280 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 281 "data/maps/MossdeepCity/scripts.pory"
	return
# 282 "data/maps/MossdeepCity/scripts.pory"

# 283 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast:: @ 81E4CC2
# 284 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 285 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitEast
# 286 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 287 "data/maps/MossdeepCity/scripts.pory"
	return
# 288 "data/maps/MossdeepCity/scripts.pory"

# 289 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit: @ 81E4CD4
# 290 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 291 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 292 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_fastest_left
# 293 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 294 "data/maps/MossdeepCity/scripts.pory"

# 295 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitNorth: @ 81E4CD8
# 296 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 297 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 298 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 299 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 300 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 301 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 302 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 303 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 304 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 305 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 306 "data/maps/MossdeepCity/scripts.pory"

# 307 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast: @ 81E4CE2
# 308 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 309 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 310 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 311 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 312 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 313 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 314 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 315 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 316 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 317 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 318 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 319 "data/maps/MossdeepCity/scripts.pory"

# 320 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe: @ 81E4CED
# 321 "data/maps/MossdeepCity/scripts.pory"
	.string "I got this from Steven, but I don't\n"
# 322 "data/maps/MossdeepCity/scripts.pory"
	.string "know what it's good for.\p"
# 323 "data/maps/MossdeepCity/scripts.pory"
	.string "I think it's called King's Rock.\n"
# 324 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you want it?$"
# 325 "data/maps/MossdeepCity/scripts.pory"

# 326 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt: @ 81E4D5B
# 327 "data/maps/MossdeepCity/scripts.pory"
	.string "Why would you want it?\n"
# 328 "data/maps/MossdeepCity/scripts.pory"
	.string "You're weird.\p"
# 329 "data/maps/MossdeepCity/scripts.pory"
	.string "You can keep it, but keep it a secret\n"
# 330 "data/maps/MossdeepCity/scripts.pory"
	.string "from Steven.$"
# 331 "data/maps/MossdeepCity/scripts.pory"

# 332 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevensHouseOverThere: @ 81E4DB3
# 333 "data/maps/MossdeepCity/scripts.pory"
	.string "Steven's house is right over there!$"
# 334 "data/maps/MossdeepCity/scripts.pory"

# 335 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock: @ 81E4DD7
# 336 "data/maps/MossdeepCity/scripts.pory"
	.string "Yeah, you think so, too! What are you\n"
# 337 "data/maps/MossdeepCity/scripts.pory"
	.string "supposed to do with some weird rock?$"
# 338 "data/maps/MossdeepCity/scripts.pory"

# 339 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching: @ 81E4E22
# 340 "data/maps/MossdeepCity/scripts.pory"
	.string "Around Mossdeep, you can see wild\n"
# 341 "data/maps/MossdeepCity/scripts.pory"
	.string "Wailmer.\p"
# 342 "data/maps/MossdeepCity/scripts.pory"
	.string "It's called, uh…\n"
# 343 "data/maps/MossdeepCity/scripts.pory"
	.string "What was it now…\p"
# 344 "data/maps/MossdeepCity/scripts.pory"
	.string "Wai, Wai, Wai…\p"
# 345 "data/maps/MossdeepCity/scripts.pory"
	.string "Wailmer watching!$"
# 346 "data/maps/MossdeepCity/scripts.pory"

# 347 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter: @ 81E4E90
# 348 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's Space Center has been\n"
# 349 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.\p"
# 350 "data/maps/MossdeepCity/scripts.pory"
	.string "There's been some kind of an uproar\n"
# 351 "data/maps/MossdeepCity/scripts.pory"
	.string "over a letter they received recently.$"
# 352 "data/maps/MossdeepCity/scripts.pory"

# 353 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets: @ 81E4F15
# 354 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's Space Center has been\n"
# 355 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.$"
# 356 "data/maps/MossdeepCity/scripts.pory"

# 357 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma: @ 81E4F50
# 358 "data/maps/MossdeepCity/scripts.pory"
	.string "I heard from a Sailor buddy that\n"
# 359 "data/maps/MossdeepCity/scripts.pory"
	.string "Team Aqua set up shop in Lilycove.\p"
# 360 "data/maps/MossdeepCity/scripts.pory"
	.string "I also heard that someone came along\n"
# 361 "data/maps/MossdeepCity/scripts.pory"
	.string "and wiped the floor with them!\p"
# 362 "data/maps/MossdeepCity/scripts.pory"
	.string "But Mossdeep here's been targeted\n"
# 363 "data/maps/MossdeepCity/scripts.pory"
	.string "by that Team Magma.\p"
# 364 "data/maps/MossdeepCity/scripts.pory"
	.string "If you want to know what they're up to,\n"
# 365 "data/maps/MossdeepCity/scripts.pory"
	.string "go visit the Space Center.$"
# 366 "data/maps/MossdeepCity/scripts.pory"

# 367 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand: @ 81E5051
# 368 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm a Sailor, so the sea's obviously\n"
# 369 "data/maps/MossdeepCity/scripts.pory"
	.string "more important to me.\p"
# 370 "data/maps/MossdeepCity/scripts.pory"
	.string "But you know? When I get back on land\n"
# 371 "data/maps/MossdeepCity/scripts.pory"
	.string "after a long voyage, I do feel relief!$"
# 372 "data/maps/MossdeepCity/scripts.pory"

# 373 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers: @ 81E50D9
# 374 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't it be nice?\p"
# 375 "data/maps/MossdeepCity/scripts.pory"
	.string "If the whole world was covered in\n"
# 376 "data/maps/MossdeepCity/scripts.pory"
	.string "plants and flowers like this island?$"
# 377 "data/maps/MossdeepCity/scripts.pory"

# 378 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive: @ 81E5135
# 379 "data/maps/MossdeepCity/scripts.pory"
	.string "All life needs the sea to live, even\n"
# 380 "data/maps/MossdeepCity/scripts.pory"
	.string "though it makes its home on the land.\p"
# 381 "data/maps/MossdeepCity/scripts.pory"
	.string "Life, having run its course, becomes\n"
# 382 "data/maps/MossdeepCity/scripts.pory"
	.string "soil and returns to the land.\p"
# 383 "data/maps/MossdeepCity/scripts.pory"
	.string "And the sea is always connected to\n"
# 384 "data/maps/MossdeepCity/scripts.pory"
	.string "the land.\p"
# 385 "data/maps/MossdeepCity/scripts.pory"
	.string "Yes, like the very shoreline here.$"
# 386 "data/maps/MossdeepCity/scripts.pory"

# 387 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating: @ 81E5213
# 388 "data/maps/MossdeepCity/scripts.pory"
	.string "A voyage on a ship is fine.\p"
# 389 "data/maps/MossdeepCity/scripts.pory"
	.string "But crossing the sea with Pokémon\n"
# 390 "data/maps/MossdeepCity/scripts.pory"
	.string "using Surf…\p"
# 391 "data/maps/MossdeepCity/scripts.pory"
	.string "Now that's an exhilarating trip!\n"
# 392 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't you agree, youngster?$"
# 393 "data/maps/MossdeepCity/scripts.pory"

# 394 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock: @ 81E529D
# 395 "data/maps/MossdeepCity/scripts.pory"
	.string "This rock has a special meaning to\n"
# 396 "data/maps/MossdeepCity/scripts.pory"
	.string "the people at the Space Center.\p"
# 397 "data/maps/MossdeepCity/scripts.pory"
	.string "They put it here as their wish for\n"
# 398 "data/maps/MossdeepCity/scripts.pory"
	.string "their rockets to fly safely.\p"
# 399 "data/maps/MossdeepCity/scripts.pory"
	.string "When you make a wish, what do you use?\n"
# 400 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you wish upon a star?\p"
# 401 "data/maps/MossdeepCity/scripts.pory"
	.string "I use a wish tag to make it happen.\n"
# 402 "data/maps/MossdeepCity/scripts.pory"
	.string "That's what I do.$"
# 403 "data/maps/MossdeepCity/scripts.pory"

# 404 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ItsAWhiteRock: @ 81E5396
# 405 "data/maps/MossdeepCity/scripts.pory"
	.string "It's a white rock.$"
# 406 "data/maps/MossdeepCity/scripts.pory"

# 407 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign: @ 81E53A9
# 408 "data/maps/MossdeepCity/scripts.pory"
	.string "Mossdeep City Pokémon Gym\n"
# 409 "data/maps/MossdeepCity/scripts.pory"
	.string "Leaders: Liza & Tate\p"
# 410 "data/maps/MossdeepCity/scripts.pory"
	.string "“The mystic combination!”$"
# 411 "data/maps/MossdeepCity/scripts.pory"

# 412 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign: @ 81E53F2
# 413 "data/maps/MossdeepCity/scripts.pory"
	.string "Mossdeep City\n"
# 414 "data/maps/MossdeepCity/scripts.pory"
	.string "“Our slogan: Cherish Pokémon!”$"
# 415 "data/maps/MossdeepCity/scripts.pory"

# 416 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign: @ 81E541F
# 417 "data/maps/MossdeepCity/scripts.pory"
	.string "Mossdeep Space Center\n"
# 418 "data/maps/MossdeepCity/scripts.pory"
	.string "“The closest place to space.”$"
# 419 "data/maps/MossdeepCity/scripts.pory"

# 420 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ScottSomethingWrongWithTown: @ 81E5453
# 421 "data/maps/MossdeepCity/scripts.pory"
	.string "Scott: {PLAYER}{KUN}, feeling good?\n"
# 422 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm doing great!\p"
# 423 "data/maps/MossdeepCity/scripts.pory"
	.string "I'd heard Mossdeep's Gym Leader is\n"
# 424 "data/maps/MossdeepCity/scripts.pory"
	.string "pretty strong, so I decided to come\l"
# 425 "data/maps/MossdeepCity/scripts.pory"
	.string "take a look-see for myself.\p"
# 426 "data/maps/MossdeepCity/scripts.pory"
	.string "But there's something wrong about\n"
# 427 "data/maps/MossdeepCity/scripts.pory"
	.string "this town.\p"
# 428 "data/maps/MossdeepCity/scripts.pory"
	.string "People are going on about a warning\n"
# 429 "data/maps/MossdeepCity/scripts.pory"
	.string "letter and the Space Center…\p"
# 430 "data/maps/MossdeepCity/scripts.pory"
	.string "I don't think it concerns me in any\n"
# 431 "data/maps/MossdeepCity/scripts.pory"
	.string "way, though.$"
# 432 "data/maps/MossdeepCity/scripts.pory"

# 433 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader: @ 81E5581
# 434 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… It feels great letting the waves\n"
# 435 "data/maps/MossdeepCity/scripts.pory"
	.string "wash over my feet…\p"
# 436 "data/maps/MossdeepCity/scripts.pory"
	.string "Speaking of the waves, you know that\n"
# 437 "data/maps/MossdeepCity/scripts.pory"
	.string "island city Sootopolis?\p"
# 438 "data/maps/MossdeepCity/scripts.pory"
	.string "I think the Gym there had a new\n"
# 439 "data/maps/MossdeepCity/scripts.pory"
	.string "Leader come in.\p"
# 440 "data/maps/MossdeepCity/scripts.pory"
	.string "People tell me the new Leader once\n"
# 441 "data/maps/MossdeepCity/scripts.pory"
	.string "mentored Wallace.$"
