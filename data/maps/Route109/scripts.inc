# 1 "data/maps/Route109/scripts.pory"

# 2 "data/maps/Route109/scripts.pory"
@ NOTE: Route 109's sail to Dewford script references local IDs from Dewford's map. 
# 3 "data/maps/Route109/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 4 "data/maps/Route109/scripts.pory"

# 5 "data/maps/Route109/scripts.pory"
Route109_MapScripts:: @ 81EE75F
# 6 "data/maps/Route109/scripts.pory"
	.byte 0
# 7 "data/maps/Route109/scripts.pory"

# 8 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford:: @ 81EE760
# 9 "data/maps/Route109/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 10 "data/maps/Route109/scripts.pory"
	setobjectpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 11 "data/maps/Route109/scripts.pory"
	setobjectpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109, 0
# 12 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_R109, Route109_Movement_BrineyEnterBoat
# 13 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 14 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_BRINEY_R109
# 15 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 16 "data/maps/Route109/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
# 17 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_EnterBoatWest
# 18 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_EnterBoatEast
# 19 "data/maps/Route109/scripts.pory"
	end
# 20 "data/maps/Route109/scripts.pory"

# 21 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatSouth:: @ 81EE7A5
# 22 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
# 23 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 25 "data/maps/Route109/scripts.pory"
	end
# 26 "data/maps/Route109/scripts.pory"

# 27 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatEast:: @ 81EE7B5
# 28 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 29 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 31 "data/maps/Route109/scripts.pory"
	end
# 32 "data/maps/Route109/scripts.pory"

# 33 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatWest:: @ 81EE7C5
# 34 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 35 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 37 "data/maps/Route109/scripts.pory"
	end
# 38 "data/maps/Route109/scripts.pory"

# 39 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford:: @ 81EE7D5
# 40 "data/maps/Route109/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 41 "data/maps/Route109/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 42 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BOAT_R109, Route109_Movement_SailToDewford
# 43 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_SailToDewford
# 44 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route109/scripts.pory"
	delay 50
# 46 "data/maps/Route109/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 47 "data/maps/Route109/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 48 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerExitBoat
# 49 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 51 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 52 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 53 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 54 "data/maps/Route109/scripts.pory"
	setobjectpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 55 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route109_Movement_BrineyExitBoat
# 56 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 58 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 59 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_BOAT_R109, MAP_ROUTE109
# 60 "data/maps/Route109/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 61 "data/maps/Route109/scripts.pory"
	closemessage
# 62 "data/maps/Route109/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 63 "data/maps/Route109/scripts.pory"
	resetobjectpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 64 "data/maps/Route109/scripts.pory"
	resetobjectpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 65 "data/maps/Route109/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 66 "data/maps/Route109/scripts.pory"
	release
# 67 "data/maps/Route109/scripts.pory"
	end
# 68 "data/maps/Route109/scripts.pory"

# 69 "data/maps/Route109/scripts.pory"
Route109_Movement_SailToDewford: @ 81EE84F
# 70 "data/maps/Route109/scripts.pory"
	walk_in_place_fastest_down
# 71 "data/maps/Route109/scripts.pory"
	walk_down
# 72 "data/maps/Route109/scripts.pory"
	walk_down
# 73 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 74 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 75 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 76 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 77 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 78 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 79 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 80 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 81 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 82 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 83 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 84 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 85 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 86 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 87 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 88 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 89 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 90 "data/maps/Route109/scripts.pory"
	walk_fastest_down
# 91 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 93 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 94 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 95 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 96 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 97 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 98 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 99 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 100 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 101 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 102 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 103 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 104 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 105 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 106 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 107 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 108 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 109 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 110 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 111 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 112 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 113 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 114 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 115 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 116 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 117 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 118 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 119 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 120 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 121 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 122 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 123 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 124 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 125 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 126 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 127 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 128 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 129 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 130 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 131 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 132 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 133 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 134 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 135 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 136 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 137 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 138 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 139 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 140 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 141 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 142 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 143 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 144 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 145 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 146 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 147 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 148 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 149 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 150 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 151 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 152 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 153 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 154 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 155 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 156 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 157 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 158 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 159 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 160 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 161 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 162 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 163 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 164 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 165 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 166 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 167 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 168 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 169 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 170 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 171 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 172 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 173 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 174 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 175 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 176 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 177 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 178 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 179 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 180 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 181 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 182 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 183 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 184 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 185 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 186 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 187 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 188 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 189 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 190 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 191 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 192 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 193 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 194 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 195 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 196 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 197 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 198 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 199 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 200 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 201 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 202 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 203 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 204 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 205 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 206 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 207 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 208 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 209 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 210 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 211 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 212 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 213 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 214 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 215 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 216 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 217 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 218 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 219 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 220 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 221 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 222 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 223 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 224 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 225 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 226 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 227 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 228 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 229 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 230 "data/maps/Route109/scripts.pory"
	walk_fastest_left
# 231 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 232 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 233 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 234 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 235 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 236 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 237 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 238 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 239 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 240 "data/maps/Route109/scripts.pory"
	walk_left
# 241 "data/maps/Route109/scripts.pory"
	walk_left
# 242 "data/maps/Route109/scripts.pory"
	walk_in_place_fastest_down
# 243 "data/maps/Route109/scripts.pory"
	step_end
# 244 "data/maps/Route109/scripts.pory"

# 245 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatSouth: @ 81EE8FD
# 246 "data/maps/Route109/scripts.pory"
	walk_down
# 247 "data/maps/Route109/scripts.pory"
	walk_down
# 248 "data/maps/Route109/scripts.pory"
	step_end
# 249 "data/maps/Route109/scripts.pory"

# 250 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerExitBoat: @ 81EE900
# 251 "data/maps/Route109/scripts.pory"
	walk_down
# 252 "data/maps/Route109/scripts.pory"
	walk_down
# 253 "data/maps/Route109/scripts.pory"
	walk_left
# 254 "data/maps/Route109/scripts.pory"
	walk_in_place_fastest_right
# 255 "data/maps/Route109/scripts.pory"
	step_end
# 256 "data/maps/Route109/scripts.pory"

# 257 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatEast: @ 81EE905
# 258 "data/maps/Route109/scripts.pory"
	walk_right
# 259 "data/maps/Route109/scripts.pory"
	walk_down
# 260 "data/maps/Route109/scripts.pory"
	step_end
# 261 "data/maps/Route109/scripts.pory"

# 262 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatWest: @ 81EE908
# 263 "data/maps/Route109/scripts.pory"
	walk_left
# 264 "data/maps/Route109/scripts.pory"
	walk_down
# 265 "data/maps/Route109/scripts.pory"
	step_end
# 266 "data/maps/Route109/scripts.pory"

# 267 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyEnterBoat: @ 81EE90B
# 268 "data/maps/Route109/scripts.pory"
	walk_down
# 269 "data/maps/Route109/scripts.pory"
	step_end
# 270 "data/maps/Route109/scripts.pory"

# 271 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyExitBoat: @ 81EE90D
# 272 "data/maps/Route109/scripts.pory"
	walk_down
# 273 "data/maps/Route109/scripts.pory"
	walk_in_place_fastest_left
# 274 "data/maps/Route109/scripts.pory"
	step_end
# 275 "data/maps/Route109/scripts.pory"

# 276 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney:: @ 81EE910
# 277 "data/maps/Route109/scripts.pory"
	lock
# 278 "data/maps/Route109/scripts.pory"
	faceplayer
# 279 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_HaveNotDeliveredDevonGood
# 280 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 281 "data/maps/Route109/scripts.pory"
	end
# 282 "data/maps/Route109/scripts.pory"

# 283 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood:: @ 81EE921
# 284 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 285 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 286 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, NO
# 287 "data/maps/Route109/scripts.pory"
	goto_if_eq Route109_EventScript_StayHere
# 288 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 289 "data/maps/Route109/scripts.pory"
	end
# 290 "data/maps/Route109/scripts.pory"

# 291 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods:: @ 81EE93F
# 292 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 293 "data/maps/Route109/scripts.pory"
	waitmessage
# 294 "data/maps/Route109/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, 0
# 295 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 296 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_SailToDewford
# 297 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_ChoseNotToSail
# 298 "data/maps/Route109/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
# 299 "data/maps/Route109/scripts.pory"
	end
# 300 "data/maps/Route109/scripts.pory"

# 301 "data/maps/Route109/scripts.pory"
Route109_EventScript_SailToDewford:: @ 81EE972
# 302 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 303 "data/maps/Route109/scripts.pory"
	closemessage
# 304 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 305 "data/maps/Route109/scripts.pory"
	end
# 306 "data/maps/Route109/scripts.pory"

# 307 "data/maps/Route109/scripts.pory"
Route109_EventScript_StayHere:: @ 81EE981
# 308 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 309 "data/maps/Route109/scripts.pory"
	release
# 310 "data/maps/Route109/scripts.pory"
	end
# 311 "data/maps/Route109/scripts.pory"

# 312 "data/maps/Route109/scripts.pory"
Route109_EventScript_ChoseNotToSail:: @ 81EE98B
# 313 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 314 "data/maps/Route109/scripts.pory"
	release
# 315 "data/maps/Route109/scripts.pory"
	end
# 316 "data/maps/Route109/scripts.pory"

# 317 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseGirl:: @ 81EE995
# 318 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
# 319 "data/maps/Route109/scripts.pory"
	end
# 320 "data/maps/Route109/scripts.pory"

# 321 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy:: @ 81EE99E
# 322 "data/maps/Route109/scripts.pory"
	lock
# 323 "data/maps/Route109/scripts.pory"
	faceplayer
# 324 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 325 "data/maps/Route109/scripts.pory"
	closemessage
# 326 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 327 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 328 "data/maps/Route109/scripts.pory"
	release
# 329 "data/maps/Route109/scripts.pory"
	end
# 330 "data/maps/Route109/scripts.pory"

# 331 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl:: @ 81EE9B5
# 332 "data/maps/Route109/scripts.pory"
	lock
# 333 "data/maps/Route109/scripts.pory"
	faceplayer
# 334 "data/maps/Route109/scripts.pory"
	special GetPlayerBigGuyGirlString
# 335 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
# 336 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 337 "data/maps/Route109/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 338 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, 0
# 339 "data/maps/Route109/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 340 "data/maps/Route109/scripts.pory"
	closemessage
# 341 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 342 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 343 "data/maps/Route109/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 344 "data/maps/Route109/scripts.pory"
	release
# 345 "data/maps/Route109/scripts.pory"
	end
# 346 "data/maps/Route109/scripts.pory"

# 347 "data/maps/Route109/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand:: @ 81EE9F2
# 348 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 349 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 350 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 351 "data/maps/Route109/scripts.pory"
	release
# 352 "data/maps/Route109/scripts.pory"
	end
# 353 "data/maps/Route109/scripts.pory"

# 354 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman:: @ 81EEA06
# 355 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 356 "data/maps/Route109/scripts.pory"
	end
# 357 "data/maps/Route109/scripts.pory"

# 358 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan:: @ 81EEA0F
# 359 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 360 "data/maps/Route109/scripts.pory"
	end
# 361 "data/maps/Route109/scripts.pory"

# 362 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon:: @ 81EEA18
# 363 "data/maps/Route109/scripts.pory"
	lock
# 364 "data/maps/Route109/scripts.pory"
	faceplayer
# 365 "data/maps/Route109/scripts.pory"
	waitse
# 366 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 367 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 368 "data/maps/Route109/scripts.pory"
	waitmoncry
# 369 "data/maps/Route109/scripts.pory"
	release
# 370 "data/maps/Route109/scripts.pory"
	end
# 371 "data/maps/Route109/scripts.pory"

# 372 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign:: @ 81EEA2B
# 373 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 374 "data/maps/Route109/scripts.pory"
	end
# 375 "data/maps/Route109/scripts.pory"

# 376 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign:: @ 81EEA34
# 377 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 378 "data/maps/Route109/scripts.pory"
	end
# 379 "data/maps/Route109/scripts.pory"

# 380 "data/maps/Route109/scripts.pory"
Route109_EventScript_David:: @ 81EEA3D
# 381 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 382 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 383 "data/maps/Route109/scripts.pory"
	end
# 384 "data/maps/Route109/scripts.pory"

# 385 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice:: @ 81EEA54
# 386 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 387 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 388 "data/maps/Route109/scripts.pory"
	end
# 389 "data/maps/Route109/scripts.pory"

# 390 "data/maps/Route109/scripts.pory"
Route109_EventScript_Huey:: @ 81EEA6B
# 391 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 392 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 393 "data/maps/Route109/scripts.pory"
	end
# 394 "data/maps/Route109/scripts.pory"

# 395 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond:: @ 81EEA82
# 396 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 397 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 398 "data/maps/Route109/scripts.pory"
	end
# 399 "data/maps/Route109/scripts.pory"

# 400 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky:: @ 81EEA99
# 401 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
# 402 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 403 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, TRUE
# 404 "data/maps/Route109/scripts.pory"
	goto_if_eq Route109_EventScript_RickyRematch
# 405 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 406 "data/maps/Route109/scripts.pory"
	release
# 407 "data/maps/Route109/scripts.pory"
	end
# 408 "data/maps/Route109/scripts.pory"

# 409 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle:: @ 81EEAC5
# 410 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 411 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 413 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 414 "data/maps/Route109/scripts.pory"
	release
# 415 "data/maps/Route109/scripts.pory"
	end
# 416 "data/maps/Route109/scripts.pory"

# 417 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRematch:: @ 81EEAE4
# 418 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 419 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 420 "data/maps/Route109/scripts.pory"
	end
# 421 "data/maps/Route109/scripts.pory"

# 422 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola:: @ 81EEAFB
# 423 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
# 424 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 425 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, TRUE
# 426 "data/maps/Route109/scripts.pory"
	goto_if_eq Route109_EventScript_LolaRematch
# 427 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 428 "data/maps/Route109/scripts.pory"
	release
# 429 "data/maps/Route109/scripts.pory"
	end
# 430 "data/maps/Route109/scripts.pory"

# 431 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle:: @ 81EEB27
# 432 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 433 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 434 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 435 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 436 "data/maps/Route109/scripts.pory"
	release
# 437 "data/maps/Route109/scripts.pory"
	end
# 438 "data/maps/Route109/scripts.pory"

# 439 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRematch:: @ 81EEB46
# 440 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 441 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 442 "data/maps/Route109/scripts.pory"
	end
# 443 "data/maps/Route109/scripts.pory"

# 444 "data/maps/Route109/scripts.pory"
Route109_EventScript_Austina:: @ 81EEB5D
# 445 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 446 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 447 "data/maps/Route109/scripts.pory"
	end
# 448 "data/maps/Route109/scripts.pory"

# 449 "data/maps/Route109/scripts.pory"
Route109_EventScript_Gwen:: @ 81EEB74
# 450 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 451 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
# 452 "data/maps/Route109/scripts.pory"
	end
# 453 "data/maps/Route109/scripts.pory"

# 454 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter:: @ 81EEB8B
# 455 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 456 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 457 "data/maps/Route109/scripts.pory"
	end
# 458 "data/maps/Route109/scripts.pory"

# 459 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul:: @ 81EEBA2
# 460 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 461 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 462 "data/maps/Route109/scripts.pory"
	end
# 463 "data/maps/Route109/scripts.pory"

# 464 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel:: @ 81EEBBD
# 465 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 466 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 467 "data/maps/Route109/scripts.pory"
	end
# 468 "data/maps/Route109/scripts.pory"

# 469 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler:: @ 81EEBD8
# 470 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 471 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 472 "data/maps/Route109/scripts.pory"
	end
# 473 "data/maps/Route109/scripts.pory"

# 474 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey:: @ 81EEBEF
# 475 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 476 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 477 "data/maps/Route109/scripts.pory"
	end
# 478 "data/maps/Route109/scripts.pory"

# 479 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah:: @ 81EEC06
# 480 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 481 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 482 "data/maps/Route109/scripts.pory"
	end
# 483 "data/maps/Route109/scripts.pory"

# 484 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods: @ 81EEC1D
# 485 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 486 "data/maps/Route109/scripts.pory"
	.string "We've made land in Slateport!\p"
# 487 "data/maps/Route109/scripts.pory"
	.string "I suppose you're going to visit Capt.\n"
# 488 "data/maps/Route109/scripts.pory"
	.string "Stern and deliver the Devon Goods?$"
# 489 "data/maps/Route109/scripts.pory"

# 490 "data/maps/Route109/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion: @ 81EEC96
# 491 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: I thought you're supposed\n"
# 492 "data/maps/Route109/scripts.pory"
	.string "to deliver the Devon Goods.\p"
# 493 "data/maps/Route109/scripts.pory"
	.string "Would you like to sail back to\n"
# 494 "data/maps/Route109/scripts.pory"
	.string "Dewford, then?$"
# 495 "data/maps/Route109/scripts.pory"

# 496 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDewfordItIs: @ 81EED06
# 497 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Dewford it is, then!\p"
# 498 "data/maps/Route109/scripts.pory"
	.string "Anchors aweigh!\n"
# 499 "data/maps/Route109/scripts.pory"
	.string "Peeko, we're setting sail, my darling!$"
# 500 "data/maps/Route109/scripts.pory"

# 501 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods: @ 81EED5E
# 502 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Then you go on and deliver\n"
# 503 "data/maps/Route109/scripts.pory"
	.string "the Devon Goods. I'll be waiting.$"
# 504 "data/maps/Route109/scripts.pory"

# 505 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport: @ 81EEDA7
# 506 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy! We've made land in\n"
# 507 "data/maps/Route109/scripts.pory"
	.string "Slateport!\p"
# 508 "data/maps/Route109/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 509 "data/maps/Route109/scripts.pory"
	.string "you want to set sail again!$"
# 510 "data/maps/Route109/scripts.pory"

# 511 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyWhereAreWeBound: @ 81EEE17
# 512 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 513 "data/maps/Route109/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 514 "data/maps/Route109/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 515 "data/maps/Route109/scripts.pory"

# 516 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail: @ 81EEE72
# 517 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: You just tell me whenever\n"
# 518 "data/maps/Route109/scripts.pory"
	.string "you need to set sail again!$"
# 519 "data/maps/Route109/scripts.pory"

# 520 "data/maps/Route109/scripts.pory"
Route109_Text_ChillAtMyPapasSpot: @ 81EEEB4
# 521 "data/maps/Route109/scripts.pory"
	.string "Yo, Trainers!\n"
# 522 "data/maps/Route109/scripts.pory"
	.string "Whether you're hot to trot,\l"
# 523 "data/maps/Route109/scripts.pory"
	.string "or cool cat not,\l"
# 524 "data/maps/Route109/scripts.pory"
	.string "chill at my papa's spot!$"
# 525 "data/maps/Route109/scripts.pory"

# 526 "data/maps/Route109/scripts.pory"
Route109_Text_LittleKidsDartAround: @ 81EEF08
# 527 "data/maps/Route109/scripts.pory"
	.string "Little kids can dart around so quickly…\p"
# 528 "data/maps/Route109/scripts.pory"
	.string "You don't dare take your eyes off them\n"
# 529 "data/maps/Route109/scripts.pory"
	.string "for an instant. It's very taxing.\p"
# 530 "data/maps/Route109/scripts.pory"
	.string "Mine are with my Pokémon, so they\n"
# 531 "data/maps/Route109/scripts.pory"
	.string "should be okay, but…$"
# 532 "data/maps/Route109/scripts.pory"

# 533 "data/maps/Route109/scripts.pory"
Route109_Text_SandCastleTakingLongTime: @ 81EEFB0
# 534 "data/maps/Route109/scripts.pory"
	.string "Our sand castle's taking a long time\n"
# 535 "data/maps/Route109/scripts.pory"
	.string "to make.$"
# 536 "data/maps/Route109/scripts.pory"

# 537 "data/maps/Route109/scripts.pory"
Route109_Text_YouCanHaveThis: @ 81EEFDE
# 538 "data/maps/Route109/scripts.pory"
	.string "You can have this!$"
# 539 "data/maps/Route109/scripts.pory"

# 540 "data/maps/Route109/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle: @ 81EEFF1
# 541 "data/maps/Route109/scripts.pory"
	.string "We're going to get all the sand from\n"
# 542 "data/maps/Route109/scripts.pory"
	.string "the beach and make a big castle!\p"
# 543 "data/maps/Route109/scripts.pory"
	.string "And then we're going to be a king and\n"
# 544 "data/maps/Route109/scripts.pory"
	.string "queen.\p"
# 545 "data/maps/Route109/scripts.pory"
	.string "We'll let you be a servant.$"
# 546 "data/maps/Route109/scripts.pory"

# 547 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter: @ 81EF080
# 548 "data/maps/Route109/scripts.pory"
	.string "The water around these parts is clean.\p"
# 549 "data/maps/Route109/scripts.pory"
	.string "But, I get my Zigzagoon to pick up\n"
# 550 "data/maps/Route109/scripts.pory"
	.string "litter from the shoreline at times.\p"
# 551 "data/maps/Route109/scripts.pory"
	.string "Dirty water becomes rain and joins our\n"
# 552 "data/maps/Route109/scripts.pory"
	.string "rivers, which we drink from…\p"
# 553 "data/maps/Route109/scripts.pory"
	.string "If we pollute the sea, it all comes\n"
# 554 "data/maps/Route109/scripts.pory"
	.string "back to haunt us eventually.$"
# 555 "data/maps/Route109/scripts.pory"

# 556 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonCry: @ 81EF173
# 557 "data/maps/Route109/scripts.pory"
	.string "Zigzagoon: Guguu?$"
# 558 "data/maps/Route109/scripts.pory"

# 559 "data/maps/Route109/scripts.pory"
Route109_Text_SeashoreHouseSign: @ 81EF185
# 560 "data/maps/Route109/scripts.pory"
	.string "Seashore House\p"
# 561 "data/maps/Route109/scripts.pory"
	.string "“May hot battles rage on hot sands!\n"
# 562 "data/maps/Route109/scripts.pory"
	.string "The place for hot Trainers!”$"
# 563 "data/maps/Route109/scripts.pory"

# 564 "data/maps/Route109/scripts.pory"
Route109_Text_TrainerTipsSign: @ 81EF1D5
# 565 "data/maps/Route109/scripts.pory"
	.string "Trainer Tips\p"
# 566 "data/maps/Route109/scripts.pory"
	.string "Pokémon at the same level may not\n"
# 567 "data/maps/Route109/scripts.pory"
	.string "always have identical stats.\p"
# 568 "data/maps/Route109/scripts.pory"
	.string "Pokémon raised by Trainers are said\n"
# 569 "data/maps/Route109/scripts.pory"
	.string "to grow stronger than wild Pokémon.$"
