# 1 "data/maps/PewterCity/scripts.pory"

# 2 "data/maps/PewterCity/scripts.pory"
.equ LOCALID_MUSEUM_GUIDE, 2
# 3 "data/maps/PewterCity/scripts.pory"
.equ LOCALID_GYM_GUIDE,    5
# 4 "data/maps/PewterCity/scripts.pory"
.equ LOCALID_AIDE,         7
# 5 "data/maps/PewterCity/scripts.pory"

# 6 "data/maps/PewterCity/scripts.pory"
PewterCity_MapScripts::
# 7 "data/maps/PewterCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_OnTransition
# 8 "data/maps/PewterCity/scripts.pory"
	.byte 0
# 9 "data/maps/PewterCity/scripts.pory"

# 10 "data/maps/PewterCity/scripts.pory"
PewterCity_OnTransition::
# 11 "data/maps/PewterCity/scripts.pory"
	@ setworldmapflag FLAG_WORLD_MAP_PEWTER_CITY
# 12 "data/maps/PewterCity/scripts.pory"
	@ setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 0
# 13 "data/maps/PewterCity/scripts.pory"
	end
# 14 "data/maps/PewterCity/scripts.pory"

# 15 "data/maps/PewterCity/scripts.pory"
@ Impossible to speak to this NPC from a facing dir != DIR_EAST normally, so they arent checked
# 16 "data/maps/PewterCity/scripts.pory"
@ Additionally, no movement script exists for facing DIR_SOUTH, which would necessitate walking out of bounds
# 17 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuide::
# 18 "data/maps/PewterCity/scripts.pory"
	lock
# 19 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 20 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 21 "data/maps/PewterCity/scripts.pory"
	closemessage
# 22 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 23 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_WalkToGymEast
# 24 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 25 "data/maps/PewterCity/scripts.pory"
	closemessage
# 26 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 27 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 28 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 29 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_GYM_GUIDE
# 30 "data/maps/PewterCity/scripts.pory"
	@ clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 31 "data/maps/PewterCity/scripts.pory"
	release
# 32 "data/maps/PewterCity/scripts.pory"
	end
# 33 "data/maps/PewterCity/scripts.pory"

# 34 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymEast::
# 35 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWaitForGuideEast
# 36 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadEast
# 37 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 38 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymEast
# 39 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymEast
# 40 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 41 "data/maps/PewterCity/scripts.pory"
	return
# 42 "data/maps/PewterCity/scripts.pory"

# 43 "data/maps/PewterCity/scripts.pory"
@ Unused
# 44 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymWest::
# 45 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWaitForGuideWest
# 46 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadWest
# 47 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 48 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymWest
# 49 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymWest
# 50 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 51 "data/maps/PewterCity/scripts.pory"
	return
# 52 "data/maps/PewterCity/scripts.pory"

# 53 "data/maps/PewterCity/scripts.pory"
@ Unused
# 54 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymNorth::
# 55 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWaitForGuideNorth
# 56 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadNorth
# 57 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymNorth
# 59 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymNorth
# 60 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 61 "data/maps/PewterCity/scripts.pory"
	return
# 62 "data/maps/PewterCity/scripts.pory"

# 63 "data/maps/PewterCity/scripts.pory"
.macro walk_to_gym
# 64 "data/maps/PewterCity/scripts.pory"
	walk_left
# 65 "data/maps/PewterCity/scripts.pory"
	walk_left
# 66 "data/maps/PewterCity/scripts.pory"
	walk_left
# 67 "data/maps/PewterCity/scripts.pory"
	walk_up
# 68 "data/maps/PewterCity/scripts.pory"
	walk_left
# 69 "data/maps/PewterCity/scripts.pory"
	walk_left
# 70 "data/maps/PewterCity/scripts.pory"
	walk_left
# 71 "data/maps/PewterCity/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity/scripts.pory"
	walk_left
# 73 "data/maps/PewterCity/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity/scripts.pory"
	walk_left
# 75 "data/maps/PewterCity/scripts.pory"
	walk_left
# 76 "data/maps/PewterCity/scripts.pory"
	walk_left
# 77 "data/maps/PewterCity/scripts.pory"
	walk_left
# 78 "data/maps/PewterCity/scripts.pory"
	walk_left
# 79 "data/maps/PewterCity/scripts.pory"
	walk_left
# 80 "data/maps/PewterCity/scripts.pory"
	walk_left
# 81 "data/maps/PewterCity/scripts.pory"
	walk_left
# 82 "data/maps/PewterCity/scripts.pory"
	walk_left
# 83 "data/maps/PewterCity/scripts.pory"
	walk_up
# 84 "data/maps/PewterCity/scripts.pory"
	walk_up
# 85 "data/maps/PewterCity/scripts.pory"
	walk_up
# 86 "data/maps/PewterCity/scripts.pory"
	walk_up
# 87 "data/maps/PewterCity/scripts.pory"
	walk_up
# 88 "data/maps/PewterCity/scripts.pory"
	walk_up
# 89 "data/maps/PewterCity/scripts.pory"
	walk_up
# 90 "data/maps/PewterCity/scripts.pory"
	walk_up
# 91 "data/maps/PewterCity/scripts.pory"
	walk_up
# 92 "data/maps/PewterCity/scripts.pory"
	walk_up
# 93 "data/maps/PewterCity/scripts.pory"
	walk_left
# 94 "data/maps/PewterCity/scripts.pory"
	walk_left
# 95 "data/maps/PewterCity/scripts.pory"
	walk_left
# 96 "data/maps/PewterCity/scripts.pory"
	walk_left
# 97 "data/maps/PewterCity/scripts.pory"
	walk_left
# 98 "data/maps/PewterCity/scripts.pory"
	walk_left
# 99 "data/maps/PewterCity/scripts.pory"
	walk_left
# 100 "data/maps/PewterCity/scripts.pory"
	walk_left
# 101 "data/maps/PewterCity/scripts.pory"
	walk_left
# 102 "data/maps/PewterCity/scripts.pory"
	walk_left
# 103 "data/maps/PewterCity/scripts.pory"
	walk_left
# 104 "data/maps/PewterCity/scripts.pory"
	walk_left
# 105 "data/maps/PewterCity/scripts.pory"
	walk_left
# 106 "data/maps/PewterCity/scripts.pory"
	walk_left
# 107 "data/maps/PewterCity/scripts.pory"
	walk_left
# 108 "data/maps/PewterCity/scripts.pory"
	walk_left
# 109 "data/maps/PewterCity/scripts.pory"
	walk_down
# 110 "data/maps/PewterCity/scripts.pory"
	walk_down
# 111 "data/maps/PewterCity/scripts.pory"
	walk_down
# 112 "data/maps/PewterCity/scripts.pory"
	walk_down
# 113 "data/maps/PewterCity/scripts.pory"
	walk_down
# 114 "data/maps/PewterCity/scripts.pory"
	walk_down
# 115 "data/maps/PewterCity/scripts.pory"
	walk_down
# 116 "data/maps/PewterCity/scripts.pory"
	walk_down
# 117 "data/maps/PewterCity/scripts.pory"
	walk_right
# 118 "data/maps/PewterCity/scripts.pory"
	walk_right
# 119 "data/maps/PewterCity/scripts.pory"
	walk_right
# 120 "data/maps/PewterCity/scripts.pory"
	walk_right
# 121 "data/maps/PewterCity/scripts.pory"
	walk_right
# 122 "data/maps/PewterCity/scripts.pory"
	walk_right
# 123 "data/maps/PewterCity/scripts.pory"
	walk_right
# 124 "data/maps/PewterCity/scripts.pory"
	walk_right
# 125 "data/maps/PewterCity/scripts.pory"
.endm
# 126 "data/maps/PewterCity/scripts.pory"

# 127 "data/maps/PewterCity/scripts.pory"
.macro walk_to_gym_alt
# 128 "data/maps/PewterCity/scripts.pory"
	walk_left
# 129 "data/maps/PewterCity/scripts.pory"
	walk_left
# 130 "data/maps/PewterCity/scripts.pory"
	walk_left
# 131 "data/maps/PewterCity/scripts.pory"
	walk_left
# 132 "data/maps/PewterCity/scripts.pory"
	walk_left
# 133 "data/maps/PewterCity/scripts.pory"
	walk_left
# 134 "data/maps/PewterCity/scripts.pory"
	walk_left
# 135 "data/maps/PewterCity/scripts.pory"
	walk_left
# 136 "data/maps/PewterCity/scripts.pory"
	walk_left
# 137 "data/maps/PewterCity/scripts.pory"
	walk_left
# 138 "data/maps/PewterCity/scripts.pory"
	walk_left
# 139 "data/maps/PewterCity/scripts.pory"
	walk_left
# 140 "data/maps/PewterCity/scripts.pory"
	walk_left
# 141 "data/maps/PewterCity/scripts.pory"
	walk_left
# 142 "data/maps/PewterCity/scripts.pory"
	walk_left
# 143 "data/maps/PewterCity/scripts.pory"
	walk_up
# 144 "data/maps/PewterCity/scripts.pory"
	walk_up
# 145 "data/maps/PewterCity/scripts.pory"
	walk_up
# 146 "data/maps/PewterCity/scripts.pory"
	walk_up
# 147 "data/maps/PewterCity/scripts.pory"
	walk_up
# 148 "data/maps/PewterCity/scripts.pory"
	walk_up
# 149 "data/maps/PewterCity/scripts.pory"
	walk_up
# 150 "data/maps/PewterCity/scripts.pory"
	walk_left
# 151 "data/maps/PewterCity/scripts.pory"
	walk_left
# 152 "data/maps/PewterCity/scripts.pory"
	walk_left
# 153 "data/maps/PewterCity/scripts.pory"
	walk_left
# 154 "data/maps/PewterCity/scripts.pory"
	walk_left
# 155 "data/maps/PewterCity/scripts.pory"
	walk_left
# 156 "data/maps/PewterCity/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity/scripts.pory"
	walk_left
# 158 "data/maps/PewterCity/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity/scripts.pory"
	walk_left
# 160 "data/maps/PewterCity/scripts.pory"
	walk_down
# 161 "data/maps/PewterCity/scripts.pory"
	walk_down
# 162 "data/maps/PewterCity/scripts.pory"
	walk_down
# 163 "data/maps/PewterCity/scripts.pory"
	walk_down
# 164 "data/maps/PewterCity/scripts.pory"
	walk_down
# 165 "data/maps/PewterCity/scripts.pory"
	walk_down
# 166 "data/maps/PewterCity/scripts.pory"
	walk_right
# 167 "data/maps/PewterCity/scripts.pory"
.endm
# 168 "data/maps/PewterCity/scripts.pory"

# 169 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideEast::
# 170 "data/maps/PewterCity/scripts.pory"
	delay_16
# 171 "data/maps/PewterCity/scripts.pory"
	delay_16
# 172 "data/maps/PewterCity/scripts.pory"
	delay_4
# 173 "data/maps/PewterCity/scripts.pory"
	walk_down
# 174 "data/maps/PewterCity/scripts.pory"
	step_end
# 175 "data/maps/PewterCity/scripts.pory"

# 176 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymEast::
# 177 "data/maps/PewterCity/scripts.pory"
	walk_down
# 178 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 179 "data/maps/PewterCity/scripts.pory"
	step_end
# 180 "data/maps/PewterCity/scripts.pory"

# 181 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideWest::
# 182 "data/maps/PewterCity/scripts.pory"
	delay_16
# 183 "data/maps/PewterCity/scripts.pory"
	step_end
# 184 "data/maps/PewterCity/scripts.pory"

# 185 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymWest::
# 186 "data/maps/PewterCity/scripts.pory"
	walk_left
# 187 "data/maps/PewterCity/scripts.pory"
	walk_left
# 188 "data/maps/PewterCity/scripts.pory"
	walk_left
# 189 "data/maps/PewterCity/scripts.pory"
	walk_left
# 190 "data/maps/PewterCity/scripts.pory"
	walk_left
# 191 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 192 "data/maps/PewterCity/scripts.pory"
	step_end
# 193 "data/maps/PewterCity/scripts.pory"

# 194 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideNorth::
# 195 "data/maps/PewterCity/scripts.pory"
	delay_16
# 196 "data/maps/PewterCity/scripts.pory"
	step_end
# 197 "data/maps/PewterCity/scripts.pory"

# 198 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymNorth::
# 199 "data/maps/PewterCity/scripts.pory"
	walk_up
# 200 "data/maps/PewterCity/scripts.pory"
	walk_left
# 201 "data/maps/PewterCity/scripts.pory"
	walk_left
# 202 "data/maps/PewterCity/scripts.pory"
	walk_left
# 203 "data/maps/PewterCity/scripts.pory"
	walk_left
# 204 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 205 "data/maps/PewterCity/scripts.pory"
	step_end
# 206 "data/maps/PewterCity/scripts.pory"

# 207 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadEast::
# 208 "data/maps/PewterCity/scripts.pory"
	walk_down
# 209 "data/maps/PewterCity/scripts.pory"
	walk_left
# 210 "data/maps/PewterCity/scripts.pory"
	walk_up
# 211 "data/maps/PewterCity/scripts.pory"
	walk_in_place_up
# 212 "data/maps/PewterCity/scripts.pory"
	step_end
# 213 "data/maps/PewterCity/scripts.pory"

# 214 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymEast::
# 215 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 216 "data/maps/PewterCity/scripts.pory"
	walk_right
# 217 "data/maps/PewterCity/scripts.pory"
	walk_left
# 218 "data/maps/PewterCity/scripts.pory"
	step_end
# 219 "data/maps/PewterCity/scripts.pory"

# 220 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadWest::
# 221 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 222 "data/maps/PewterCity/scripts.pory"
	step_end
# 223 "data/maps/PewterCity/scripts.pory"

# 224 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymWest::
# 225 "data/maps/PewterCity/scripts.pory"
	walk_left
# 226 "data/maps/PewterCity/scripts.pory"
	walk_left
# 227 "data/maps/PewterCity/scripts.pory"
	walk_left
# 228 "data/maps/PewterCity/scripts.pory"
	walk_left
# 229 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 230 "data/maps/PewterCity/scripts.pory"
	walk_right
# 231 "data/maps/PewterCity/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity/scripts.pory"
	step_end
# 233 "data/maps/PewterCity/scripts.pory"

# 234 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadNorth::
# 235 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 236 "data/maps/PewterCity/scripts.pory"
	step_end
# 237 "data/maps/PewterCity/scripts.pory"

# 238 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymNorth::
# 239 "data/maps/PewterCity/scripts.pory"
	walk_left
# 240 "data/maps/PewterCity/scripts.pory"
	walk_left
# 241 "data/maps/PewterCity/scripts.pory"
	walk_left
# 242 "data/maps/PewterCity/scripts.pory"
	walk_left
# 243 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 244 "data/maps/PewterCity/scripts.pory"
	walk_right
# 245 "data/maps/PewterCity/scripts.pory"
	walk_left
# 246 "data/maps/PewterCity/scripts.pory"
	step_end
# 247 "data/maps/PewterCity/scripts.pory"

# 248 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GymGuideExit::
# 249 "data/maps/PewterCity/scripts.pory"
	walk_down
# 250 "data/maps/PewterCity/scripts.pory"
	walk_left
# 251 "data/maps/PewterCity/scripts.pory"
	walk_left
# 252 "data/maps/PewterCity/scripts.pory"
	walk_left
# 253 "data/maps/PewterCity/scripts.pory"
	walk_left
# 254 "data/maps/PewterCity/scripts.pory"
	walk_left
# 255 "data/maps/PewterCity/scripts.pory"
	walk_left
# 256 "data/maps/PewterCity/scripts.pory"
	walk_left
# 257 "data/maps/PewterCity/scripts.pory"
	walk_left
# 258 "data/maps/PewterCity/scripts.pory"
	walk_left
# 259 "data/maps/PewterCity/scripts.pory"
	step_end
# 260 "data/maps/PewterCity/scripts.pory"

# 261 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTriggerTop::
# 262 "data/maps/PewterCity/scripts.pory"
	lockall
# 263 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 264 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 265 "data/maps/PewterCity/scripts.pory"
	end
# 266 "data/maps/PewterCity/scripts.pory"

# 267 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTriggerMid::
# 268 "data/maps/PewterCity/scripts.pory"
	lockall
# 269 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 270 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 271 "data/maps/PewterCity/scripts.pory"
	end
# 272 "data/maps/PewterCity/scripts.pory"

# 273 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTriggerBottom::
# 274 "data/maps/PewterCity/scripts.pory"
	lockall
# 275 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 276 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 277 "data/maps/PewterCity/scripts.pory"
	end
# 278 "data/maps/PewterCity/scripts.pory"

# 279 "data/maps/PewterCity/scripts.pory"
@ This trigger is inaccessible and its corresponding movement script isnt linked
# 280 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTriggerRight::
# 281 "data/maps/PewterCity/scripts.pory"
	lockall
# 282 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 283 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 284 "data/maps/PewterCity/scripts.pory"
	end
# 285 "data/maps/PewterCity/scripts.pory"

# 286 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTrigger::
# 287 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 288 "data/maps/PewterCity/scripts.pory"
	closemessage
# 289 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 290 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_WalkToGymTop
# 291 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_WalkToGymMid
# 292 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_WalkToGymBottom
# 293 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 294 "data/maps/PewterCity/scripts.pory"
	closemessage
# 295 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 296 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 297 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 298 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_GYM_GUIDE
# 299 "data/maps/PewterCity/scripts.pory"
	@ clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 300 "data/maps/PewterCity/scripts.pory"
	releaseall
# 301 "data/maps/PewterCity/scripts.pory"
	end
# 302 "data/maps/PewterCity/scripts.pory"

# 303 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymTop::
# 304 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadTop
# 305 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 306 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymTop
# 307 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymTop
# 308 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 309 "data/maps/PewterCity/scripts.pory"
	return
# 310 "data/maps/PewterCity/scripts.pory"

# 311 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymMid::
# 312 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadMid
# 313 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 314 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymMid
# 315 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymMid
# 316 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 317 "data/maps/PewterCity/scripts.pory"
	return
# 318 "data/maps/PewterCity/scripts.pory"

# 319 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymBottom::
# 320 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadBottom
# 321 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymBottom
# 323 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymBottom
# 324 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 325 "data/maps/PewterCity/scripts.pory"
	return
# 326 "data/maps/PewterCity/scripts.pory"

# 327 "data/maps/PewterCity/scripts.pory"
@ Unused
# 328 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymRight::
# 329 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GuideApproachPlayerRight
# 330 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymRight
# 332 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymRight
# 333 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 334 "data/maps/PewterCity/scripts.pory"
	return
# 335 "data/maps/PewterCity/scripts.pory"

# 336 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymTop::
# 337 "data/maps/PewterCity/scripts.pory"
	walk_left
# 338 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 339 "data/maps/PewterCity/scripts.pory"
	step_end
# 340 "data/maps/PewterCity/scripts.pory"

# 341 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymMid::
# 342 "data/maps/PewterCity/scripts.pory"
	walk_up
# 343 "data/maps/PewterCity/scripts.pory"
	walk_left
# 344 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 345 "data/maps/PewterCity/scripts.pory"
	step_end
# 346 "data/maps/PewterCity/scripts.pory"

# 347 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymBottom::
# 348 "data/maps/PewterCity/scripts.pory"
	walk_up
# 349 "data/maps/PewterCity/scripts.pory"
	walk_up
# 350 "data/maps/PewterCity/scripts.pory"
	walk_left
# 351 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 352 "data/maps/PewterCity/scripts.pory"
	step_end
# 353 "data/maps/PewterCity/scripts.pory"

# 354 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymRight::
# 355 "data/maps/PewterCity/scripts.pory"
	walk_left
# 356 "data/maps/PewterCity/scripts.pory"
	walk_left
# 357 "data/maps/PewterCity/scripts.pory"
	walk_left
# 358 "data/maps/PewterCity/scripts.pory"
	walk_left
# 359 "data/maps/PewterCity/scripts.pory"
	walk_up
# 360 "data/maps/PewterCity/scripts.pory"
	walk_left
# 361 "data/maps/PewterCity/scripts.pory"
	walk_left
# 362 "data/maps/PewterCity/scripts.pory"
	walk_left
# 363 "data/maps/PewterCity/scripts.pory"
	walk_up
# 364 "data/maps/PewterCity/scripts.pory"
	walk_up
# 365 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 366 "data/maps/PewterCity/scripts.pory"
	step_end
# 367 "data/maps/PewterCity/scripts.pory"

# 368 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadTop::
# 369 "data/maps/PewterCity/scripts.pory"
	walk_left
# 370 "data/maps/PewterCity/scripts.pory"
	walk_down
# 371 "data/maps/PewterCity/scripts.pory"
	walk_right
# 372 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 373 "data/maps/PewterCity/scripts.pory"
	step_end
# 374 "data/maps/PewterCity/scripts.pory"

# 375 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadMid::
# 376 "data/maps/PewterCity/scripts.pory"
	walk_down
# 377 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 378 "data/maps/PewterCity/scripts.pory"
	step_end
# 379 "data/maps/PewterCity/scripts.pory"

# 380 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadBottom::
# 381 "data/maps/PewterCity/scripts.pory"
	walk_down
# 382 "data/maps/PewterCity/scripts.pory"
	walk_down
# 383 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 384 "data/maps/PewterCity/scripts.pory"
	step_end
# 385 "data/maps/PewterCity/scripts.pory"

# 386 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideApproachPlayerRight::
# 387 "data/maps/PewterCity/scripts.pory"
	walk_down
# 388 "data/maps/PewterCity/scripts.pory"
	walk_down
# 389 "data/maps/PewterCity/scripts.pory"
	walk_right
# 390 "data/maps/PewterCity/scripts.pory"
	walk_down
# 391 "data/maps/PewterCity/scripts.pory"
	walk_right
# 392 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 393 "data/maps/PewterCity/scripts.pory"
	step_end
# 394 "data/maps/PewterCity/scripts.pory"

# 395 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymTop::
# 396 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 397 "data/maps/PewterCity/scripts.pory"
	walk_right
# 398 "data/maps/PewterCity/scripts.pory"
	walk_left
# 399 "data/maps/PewterCity/scripts.pory"
	step_end
# 400 "data/maps/PewterCity/scripts.pory"

# 401 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymMid::
# 402 "data/maps/PewterCity/scripts.pory"
	walk_left
# 403 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 404 "data/maps/PewterCity/scripts.pory"
	walk_right
# 405 "data/maps/PewterCity/scripts.pory"
	walk_left
# 406 "data/maps/PewterCity/scripts.pory"
	step_end
# 407 "data/maps/PewterCity/scripts.pory"

# 408 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymBottom::
# 409 "data/maps/PewterCity/scripts.pory"
	walk_up
# 410 "data/maps/PewterCity/scripts.pory"
	walk_left
# 411 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 412 "data/maps/PewterCity/scripts.pory"
	walk_right
# 413 "data/maps/PewterCity/scripts.pory"
	walk_left
# 414 "data/maps/PewterCity/scripts.pory"
	step_end
# 415 "data/maps/PewterCity/scripts.pory"

# 416 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymRight::
# 417 "data/maps/PewterCity/scripts.pory"
	walk_left
# 418 "data/maps/PewterCity/scripts.pory"
	walk_left
# 419 "data/maps/PewterCity/scripts.pory"
	walk_left
# 420 "data/maps/PewterCity/scripts.pory"
	walk_up
# 421 "data/maps/PewterCity/scripts.pory"
	walk_left
# 422 "data/maps/PewterCity/scripts.pory"
	walk_left
# 423 "data/maps/PewterCity/scripts.pory"
	walk_left
# 424 "data/maps/PewterCity/scripts.pory"
	walk_up
# 425 "data/maps/PewterCity/scripts.pory"
	walk_up
# 426 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 427 "data/maps/PewterCity/scripts.pory"
	walk_right
# 428 "data/maps/PewterCity/scripts.pory"
	walk_left
# 429 "data/maps/PewterCity/scripts.pory"
	step_end
# 430 "data/maps/PewterCity/scripts.pory"

# 431 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_Lass::
# 432 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ClefairyCameFromMoon, MSGBOX_NPC
# 433 "data/maps/PewterCity/scripts.pory"
	end
# 434 "data/maps/PewterCity/scripts.pory"

# 435 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_MuseumGuide::
# 436 "data/maps/PewterCity/scripts.pory"
	lock
# 437 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 438 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_DidYouCheckOutMuseum, MSGBOX_YESNO
# 439 "data/maps/PewterCity/scripts.pory"
	//goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_CheckedOutMuseum
# 440 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ReallyYouHaveToGo
# 441 "data/maps/PewterCity/scripts.pory"
	closemessage
# 442 "data/maps/PewterCity/scripts.pory"
	delay 10
# 443 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 444 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_FACING, DIR_NORTH, PewterCity_EventScript_LeadToMuseumNorth
# 445 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_FACING, DIR_SOUTH, PewterCity_EventScript_LeadToMuseumSouth
# 446 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_FACING, DIR_WEST, PewterCity_EventScript_LeadToMuseumWest
# 447 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_LeadToMuseumEast
# 448 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ThisIsTheMuseum
# 449 "data/maps/PewterCity/scripts.pory"
	closemessage
# 450 "data/maps/PewterCity/scripts.pory"
	delay 10
# 451 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_MUSEUM_GUIDE, PewterCity_Movement_MuseumGuideExit
# 452 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 453 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 454 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_MUSEUM_GUIDE
# 455 "data/maps/PewterCity/scripts.pory"
	@ clearflag FLAG_HIDE_PEWTER_MUSEUM_GUIDE
# 456 "data/maps/PewterCity/scripts.pory"
	release
# 457 "data/maps/PewterCity/scripts.pory"
	end
# 458 "data/maps/PewterCity/scripts.pory"

# 459 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_LeadToMuseumNorth::
# 460 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumNorth
# 461 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumNorth
# 462 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 463 "data/maps/PewterCity/scripts.pory"
	return
# 464 "data/maps/PewterCity/scripts.pory"

# 465 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_LeadToMuseumSouth::
# 466 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumSouth
# 467 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumSouth
# 468 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 469 "data/maps/PewterCity/scripts.pory"
	return
# 470 "data/maps/PewterCity/scripts.pory"

# 471 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_LeadToMuseumWest::
# 472 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumWest
# 473 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumWest
# 474 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 475 "data/maps/PewterCity/scripts.pory"
	return
# 476 "data/maps/PewterCity/scripts.pory"

# 477 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_LeadToMuseumEast::
# 478 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumEast
# 479 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumEast
# 480 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 481 "data/maps/PewterCity/scripts.pory"
	return
# 482 "data/maps/PewterCity/scripts.pory"

# 483 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_CheckedOutMuseum::
# 484 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_WerentThoseFossilsAmazing
# 485 "data/maps/PewterCity/scripts.pory"
	release
# 486 "data/maps/PewterCity/scripts.pory"
	end
# 487 "data/maps/PewterCity/scripts.pory"

# 488 "data/maps/PewterCity/scripts.pory"
.macro walk_to_museum
# 489 "data/maps/PewterCity/scripts.pory"
	walk_up
# 490 "data/maps/PewterCity/scripts.pory"
	walk_up
# 491 "data/maps/PewterCity/scripts.pory"
	walk_up
# 492 "data/maps/PewterCity/scripts.pory"
	walk_up
# 493 "data/maps/PewterCity/scripts.pory"
	walk_left
# 494 "data/maps/PewterCity/scripts.pory"
	walk_left
# 495 "data/maps/PewterCity/scripts.pory"
	walk_left
# 496 "data/maps/PewterCity/scripts.pory"
	walk_left
# 497 "data/maps/PewterCity/scripts.pory"
	walk_left
# 498 "data/maps/PewterCity/scripts.pory"
	walk_left
# 499 "data/maps/PewterCity/scripts.pory"
	walk_left
# 500 "data/maps/PewterCity/scripts.pory"
	walk_left
# 501 "data/maps/PewterCity/scripts.pory"
	walk_left
# 502 "data/maps/PewterCity/scripts.pory"
	walk_left
# 503 "data/maps/PewterCity/scripts.pory"
	walk_up
# 504 "data/maps/PewterCity/scripts.pory"
	walk_up
# 505 "data/maps/PewterCity/scripts.pory"
	walk_up
# 506 "data/maps/PewterCity/scripts.pory"
	walk_up
# 507 "data/maps/PewterCity/scripts.pory"
	walk_left
# 508 "data/maps/PewterCity/scripts.pory"
	walk_left
# 509 "data/maps/PewterCity/scripts.pory"
	walk_left
# 510 "data/maps/PewterCity/scripts.pory"
	walk_left
# 511 "data/maps/PewterCity/scripts.pory"
	walk_left
# 512 "data/maps/PewterCity/scripts.pory"
	walk_left
# 513 "data/maps/PewterCity/scripts.pory"
.endm
# 514 "data/maps/PewterCity/scripts.pory"

# 515 "data/maps/PewterCity/scripts.pory"
.macro walk_to_museum_south
# 516 "data/maps/PewterCity/scripts.pory"
	walk_up
# 517 "data/maps/PewterCity/scripts.pory"
	walk_up
# 518 "data/maps/PewterCity/scripts.pory"
	walk_up
# 519 "data/maps/PewterCity/scripts.pory"
	walk_left
# 520 "data/maps/PewterCity/scripts.pory"
	walk_left
# 521 "data/maps/PewterCity/scripts.pory"
	walk_left
# 522 "data/maps/PewterCity/scripts.pory"
	walk_left
# 523 "data/maps/PewterCity/scripts.pory"
	walk_left
# 524 "data/maps/PewterCity/scripts.pory"
	walk_left
# 525 "data/maps/PewterCity/scripts.pory"
	walk_left
# 526 "data/maps/PewterCity/scripts.pory"
	walk_left
# 527 "data/maps/PewterCity/scripts.pory"
	walk_left
# 528 "data/maps/PewterCity/scripts.pory"
	walk_up
# 529 "data/maps/PewterCity/scripts.pory"
	walk_up
# 530 "data/maps/PewterCity/scripts.pory"
	walk_up
# 531 "data/maps/PewterCity/scripts.pory"
	walk_up
# 532 "data/maps/PewterCity/scripts.pory"
	walk_left
# 533 "data/maps/PewterCity/scripts.pory"
	walk_left
# 534 "data/maps/PewterCity/scripts.pory"
	walk_left
# 535 "data/maps/PewterCity/scripts.pory"
	walk_left
# 536 "data/maps/PewterCity/scripts.pory"
	walk_left
# 537 "data/maps/PewterCity/scripts.pory"
	walk_left
# 538 "data/maps/PewterCity/scripts.pory"
.endm
# 539 "data/maps/PewterCity/scripts.pory"

# 540 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumNorth::
# 541 "data/maps/PewterCity/scripts.pory"
	walk_up
# 542 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 543 "data/maps/PewterCity/scripts.pory"
	delay_8
# 544 "data/maps/PewterCity/scripts.pory"
	walk_up
# 545 "data/maps/PewterCity/scripts.pory"
	step_end
# 546 "data/maps/PewterCity/scripts.pory"

# 547 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumNorth::
# 548 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 549 "data/maps/PewterCity/scripts.pory"
	walk_left
# 550 "data/maps/PewterCity/scripts.pory"
	walk_up
# 551 "data/maps/PewterCity/scripts.pory"
	step_end
# 552 "data/maps/PewterCity/scripts.pory"

# 553 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumSouth::
# 554 "data/maps/PewterCity/scripts.pory"
	delay_16
# 555 "data/maps/PewterCity/scripts.pory"
	delay_16
# 556 "data/maps/PewterCity/scripts.pory"
	walk_left
# 557 "data/maps/PewterCity/scripts.pory"
	walk_to_museum_south
# 558 "data/maps/PewterCity/scripts.pory"
	delay_8
# 559 "data/maps/PewterCity/scripts.pory"
	walk_up
# 560 "data/maps/PewterCity/scripts.pory"
	step_end
# 561 "data/maps/PewterCity/scripts.pory"

# 562 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumSouth::
# 563 "data/maps/PewterCity/scripts.pory"
	walk_left
# 564 "data/maps/PewterCity/scripts.pory"
	walk_up
# 565 "data/maps/PewterCity/scripts.pory"
	walk_to_museum_south
# 566 "data/maps/PewterCity/scripts.pory"
	walk_left
# 567 "data/maps/PewterCity/scripts.pory"
	walk_up
# 568 "data/maps/PewterCity/scripts.pory"
	step_end
# 569 "data/maps/PewterCity/scripts.pory"

# 570 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumWest::
# 571 "data/maps/PewterCity/scripts.pory"
	walk_left
# 572 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 573 "data/maps/PewterCity/scripts.pory"
	delay_8
# 574 "data/maps/PewterCity/scripts.pory"
	walk_up
# 575 "data/maps/PewterCity/scripts.pory"
	step_end
# 576 "data/maps/PewterCity/scripts.pory"

# 577 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumWest::
# 578 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 579 "data/maps/PewterCity/scripts.pory"
	walk_left
# 580 "data/maps/PewterCity/scripts.pory"
	walk_up
# 581 "data/maps/PewterCity/scripts.pory"
	step_end
# 582 "data/maps/PewterCity/scripts.pory"

# 583 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumEast::
# 584 "data/maps/PewterCity/scripts.pory"
	walk_right
# 585 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 586 "data/maps/PewterCity/scripts.pory"
	delay_8
# 587 "data/maps/PewterCity/scripts.pory"
	walk_up
# 588 "data/maps/PewterCity/scripts.pory"
	step_end
# 589 "data/maps/PewterCity/scripts.pory"

# 590 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumEast::
# 591 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 592 "data/maps/PewterCity/scripts.pory"
	walk_left
# 593 "data/maps/PewterCity/scripts.pory"
	walk_up
# 594 "data/maps/PewterCity/scripts.pory"
	step_end
# 595 "data/maps/PewterCity/scripts.pory"

# 596 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_MuseumGuideExit::
# 597 "data/maps/PewterCity/scripts.pory"
	walk_down
# 598 "data/maps/PewterCity/scripts.pory"
	walk_right
# 599 "data/maps/PewterCity/scripts.pory"
	walk_right
# 600 "data/maps/PewterCity/scripts.pory"
	walk_right
# 601 "data/maps/PewterCity/scripts.pory"
	walk_right
# 602 "data/maps/PewterCity/scripts.pory"
	walk_right
# 603 "data/maps/PewterCity/scripts.pory"
	walk_right
# 604 "data/maps/PewterCity/scripts.pory"
	walk_right
# 605 "data/maps/PewterCity/scripts.pory"
	walk_down
# 606 "data/maps/PewterCity/scripts.pory"
	walk_down
# 607 "data/maps/PewterCity/scripts.pory"
	walk_down
# 608 "data/maps/PewterCity/scripts.pory"
	walk_right
# 609 "data/maps/PewterCity/scripts.pory"
	walk_right
# 610 "data/maps/PewterCity/scripts.pory"
	walk_right
# 611 "data/maps/PewterCity/scripts.pory"
	step_end
# 612 "data/maps/PewterCity/scripts.pory"

# 613 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_FatMan::
# 614 "data/maps/PewterCity/scripts.pory"
	lock
# 615 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 616 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrockOnlySeriousTrainerHere
# 617 "data/maps/PewterCity/scripts.pory"
	release
# 618 "data/maps/PewterCity/scripts.pory"
	end
# 619 "data/maps/PewterCity/scripts.pory"

# 620 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_BugCatcher::
# 621 "data/maps/PewterCity/scripts.pory"
	lock
# 622 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 623 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_DoYouKnowWhatImDoing, MSGBOX_YESNO
# 624 "data/maps/PewterCity/scripts.pory"
	//goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_KnowWhatTheyreDoing
# 625 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_SprayingRepelToKeepWildMonsOut
# 626 "data/maps/PewterCity/scripts.pory"
	release
# 627 "data/maps/PewterCity/scripts.pory"
	end
# 628 "data/maps/PewterCity/scripts.pory"

# 629 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_KnowWhatTheyreDoing::
# 630 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ThatsRightItsHardWork
# 631 "data/maps/PewterCity/scripts.pory"
	release
# 632 "data/maps/PewterCity/scripts.pory"
	end
# 633 "data/maps/PewterCity/scripts.pory"

# 634 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_TrainerTips::
# 635 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_TrainerTipsEarningEXP, MSGBOX_SIGN
# 636 "data/maps/PewterCity/scripts.pory"
	end
# 637 "data/maps/PewterCity/scripts.pory"

# 638 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_PoliceNotice::
# 639 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_CallPoliceIfInfoOnThieves, MSGBOX_SIGN
# 640 "data/maps/PewterCity/scripts.pory"
	end
# 641 "data/maps/PewterCity/scripts.pory"

# 642 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_MuseumSign::
# 643 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_MuseumOfScience, MSGBOX_SIGN
# 644 "data/maps/PewterCity/scripts.pory"
	end
# 645 "data/maps/PewterCity/scripts.pory"

# 646 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymSign::
# 647 "data/maps/PewterCity/scripts.pory"
	lockall
# 648 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GymSign
# 649 "data/maps/PewterCity/scripts.pory"
	releaseall
# 650 "data/maps/PewterCity/scripts.pory"
	end
# 651 "data/maps/PewterCity/scripts.pory"

# 652 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_CitySign::
# 653 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_CitySign, MSGBOX_SIGN
# 654 "data/maps/PewterCity/scripts.pory"
	end
# 655 "data/maps/PewterCity/scripts.pory"

# 656 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_RunningShoesAide::
# 657 "data/maps/PewterCity/scripts.pory"
	lock
# 658 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 659 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 660 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 661 "data/maps/PewterCity/scripts.pory"
	release
# 662 "data/maps/PewterCity/scripts.pory"
	end
# 663 "data/maps/PewterCity/scripts.pory"

# 664 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerTop::
# 665 "data/maps/PewterCity/scripts.pory"
	lockall
# 666 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 667 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 668 "data/maps/PewterCity/scripts.pory"
	releaseall
# 669 "data/maps/PewterCity/scripts.pory"
	end
# 670 "data/maps/PewterCity/scripts.pory"

# 671 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerMid::
# 672 "data/maps/PewterCity/scripts.pory"
	lockall
# 673 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 674 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 675 "data/maps/PewterCity/scripts.pory"
	releaseall
# 676 "data/maps/PewterCity/scripts.pory"
	end
# 677 "data/maps/PewterCity/scripts.pory"

# 678 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerBottom::
# 679 "data/maps/PewterCity/scripts.pory"
	lockall
# 680 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 681 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 682 "data/maps/PewterCity/scripts.pory"
	releaseall
# 683 "data/maps/PewterCity/scripts.pory"
	end
# 684 "data/maps/PewterCity/scripts.pory"

# 685 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes::
# 686 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideNoticePlayer
# 687 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideNoticePlayer
# 688 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideNoticePlayer
# 689 "data/maps/PewterCity/scripts.pory"
	waitse
# 690 "data/maps/PewterCity/scripts.pory"
	playse SE_PIN
# 691 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_AIDE, Common_Movement_ExclamationMark
# 692 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 693 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_AIDE, Common_Movement_Delay48
# 694 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 695 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_OhPlayer
# 696 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_AideApproachPlayer0
# 697 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideApproachPlayer1
# 698 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideApproachPlayer2
# 699 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideApproachPlayer3
# 700 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_AskedToDeliverThis
# 701 "data/maps/PewterCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 702 "data/maps/PewterCity/scripts.pory"
	message PewterCity_Text_ReceivedRunningShoesFromAide
# 703 "data/maps/PewterCity/scripts.pory"
	waitmessage
# 704 "data/maps/PewterCity/scripts.pory"
	waitfanfare
# 705 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_SwitchedShoesWithRunningShoes
# 706 "data/maps/PewterCity/scripts.pory"
	@special DisableMsgBoxWalkaway
# 707 "data/maps/PewterCity/scripts.pory"
	signmsg
# 708 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ExplainRunningShoes
# 709 "data/maps/PewterCity/scripts.pory"
	normalmsg
# 710 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_MustBeGoingBackToLab
# 711 "data/maps/PewterCity/scripts.pory"
	closemessage
# 712 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_AideExit0
# 713 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideExit1
# 714 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideExit2
# 715 "data/maps/PewterCity/scripts.pory"
	//call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideExit3
# 716 "data/maps/PewterCity/scripts.pory"
	delay 30
# 717 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_RunningShoesLetterFromMom
# 718 "data/maps/PewterCity/scripts.pory"
	closemessage
# 719 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_AIDE
# 720 "data/maps/PewterCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 721 "data/maps/PewterCity/scripts.pory"
	@ setvar VAR_MAP_SCENE_PEWTER_CITY, 2
# 722 "data/maps/PewterCity/scripts.pory"
	return
# 723 "data/maps/PewterCity/scripts.pory"

# 724 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideNoticePlayer::
# 725 "data/maps/PewterCity/scripts.pory"
	@applymovement LOCALID_AIDE, Common_Movement_WalkInPlaceFasterDown
# 726 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 727 "data/maps/PewterCity/scripts.pory"
	return
# 728 "data/maps/PewterCity/scripts.pory"

# 729 "data/maps/PewterCity/scripts.pory"
@ Aide already at player
# 730 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideApproachPlayer0::
# 731 "data/maps/PewterCity/scripts.pory"
	closemessage
# 732 "data/maps/PewterCity/scripts.pory"
	delay 20
# 733 "data/maps/PewterCity/scripts.pory"
	return
# 734 "data/maps/PewterCity/scripts.pory"

# 735 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideApproachPlayer1::
# 736 "data/maps/PewterCity/scripts.pory"
	closemessage
# 737 "data/maps/PewterCity/scripts.pory"
	@applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 738 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 739 "data/maps/PewterCity/scripts.pory"
	return
# 740 "data/maps/PewterCity/scripts.pory"

# 741 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideApproachPlayer2::
# 742 "data/maps/PewterCity/scripts.pory"
	closemessage
# 743 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_AIDE, PewterCity_Movement_AideApproachPlayerMid
# 744 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 745 "data/maps/PewterCity/scripts.pory"
	@applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 746 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/PewterCity/scripts.pory"
	return
# 748 "data/maps/PewterCity/scripts.pory"

# 749 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideApproachPlayer3::
# 750 "data/maps/PewterCity/scripts.pory"
	closemessage
# 751 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_AIDE, PewterCity_Movement_AideApproachPlayerBottom
# 752 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 753 "data/maps/PewterCity/scripts.pory"
	@applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 754 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 755 "data/maps/PewterCity/scripts.pory"
	return
# 756 "data/maps/PewterCity/scripts.pory"

# 757 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideExit0::
# 758 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_AIDE, PewterCity_Movement_AideExit0
# 759 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 760 "data/maps/PewterCity/scripts.pory"
	return
# 761 "data/maps/PewterCity/scripts.pory"

# 762 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideExit1::
# 763 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_AIDE, PewterCity_Movement_AideExit1
# 764 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 765 "data/maps/PewterCity/scripts.pory"
	return
# 766 "data/maps/PewterCity/scripts.pory"

# 767 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideExit2::
# 768 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_AIDE, PewterCity_Movement_AideExit2
# 769 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 770 "data/maps/PewterCity/scripts.pory"
	return
# 771 "data/maps/PewterCity/scripts.pory"

# 772 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideExit3::
# 773 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_AIDE, PewterCity_Movement_AideExit3
# 774 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 775 "data/maps/PewterCity/scripts.pory"
	return
# 776 "data/maps/PewterCity/scripts.pory"

# 777 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideApproachPlayerMid::
# 778 "data/maps/PewterCity/scripts.pory"
	delay_4
# 779 "data/maps/PewterCity/scripts.pory"
	walk_down
# 780 "data/maps/PewterCity/scripts.pory"
	step_end
# 781 "data/maps/PewterCity/scripts.pory"

# 782 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideApproachPlayerBottom::
# 783 "data/maps/PewterCity/scripts.pory"
	delay_4
# 784 "data/maps/PewterCity/scripts.pory"
	walk_down
# 785 "data/maps/PewterCity/scripts.pory"
	walk_down
# 786 "data/maps/PewterCity/scripts.pory"
	step_end
# 787 "data/maps/PewterCity/scripts.pory"

# 788 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit0::
# 789 "data/maps/PewterCity/scripts.pory"
	walk_down
# 790 "data/maps/PewterCity/scripts.pory"
	walk_left
# 791 "data/maps/PewterCity/scripts.pory"
	walk_left
# 792 "data/maps/PewterCity/scripts.pory"
	walk_left
# 793 "data/maps/PewterCity/scripts.pory"
	walk_left
# 794 "data/maps/PewterCity/scripts.pory"
	walk_left
# 795 "data/maps/PewterCity/scripts.pory"
	walk_left
# 796 "data/maps/PewterCity/scripts.pory"
	walk_left
# 797 "data/maps/PewterCity/scripts.pory"
	walk_left
# 798 "data/maps/PewterCity/scripts.pory"
	walk_left
# 799 "data/maps/PewterCity/scripts.pory"
	step_end
# 800 "data/maps/PewterCity/scripts.pory"

# 801 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit1::
# 802 "data/maps/PewterCity/scripts.pory"
	walk_left
# 803 "data/maps/PewterCity/scripts.pory"
	walk_down
# 804 "data/maps/PewterCity/scripts.pory"
	walk_left
# 805 "data/maps/PewterCity/scripts.pory"
	walk_left
# 806 "data/maps/PewterCity/scripts.pory"
	walk_left
# 807 "data/maps/PewterCity/scripts.pory"
	walk_left
# 808 "data/maps/PewterCity/scripts.pory"
	walk_left
# 809 "data/maps/PewterCity/scripts.pory"
	walk_left
# 810 "data/maps/PewterCity/scripts.pory"
	walk_left
# 811 "data/maps/PewterCity/scripts.pory"
	walk_left
# 812 "data/maps/PewterCity/scripts.pory"
	step_end
# 813 "data/maps/PewterCity/scripts.pory"

# 814 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit2::
# 815 "data/maps/PewterCity/scripts.pory"
	walk_left
# 816 "data/maps/PewterCity/scripts.pory"
	walk_left
# 817 "data/maps/PewterCity/scripts.pory"
	walk_left
# 818 "data/maps/PewterCity/scripts.pory"
	walk_left
# 819 "data/maps/PewterCity/scripts.pory"
	walk_left
# 820 "data/maps/PewterCity/scripts.pory"
	walk_left
# 821 "data/maps/PewterCity/scripts.pory"
	walk_left
# 822 "data/maps/PewterCity/scripts.pory"
	walk_left
# 823 "data/maps/PewterCity/scripts.pory"
	walk_left
# 824 "data/maps/PewterCity/scripts.pory"
	step_end
# 825 "data/maps/PewterCity/scripts.pory"

# 826 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit3::
# 827 "data/maps/PewterCity/scripts.pory"
	walk_left
# 828 "data/maps/PewterCity/scripts.pory"
	walk_left
# 829 "data/maps/PewterCity/scripts.pory"
	walk_left
# 830 "data/maps/PewterCity/scripts.pory"
	walk_left
# 831 "data/maps/PewterCity/scripts.pory"
	walk_left
# 832 "data/maps/PewterCity/scripts.pory"
	walk_left
# 833 "data/maps/PewterCity/scripts.pory"
	walk_left
# 834 "data/maps/PewterCity/scripts.pory"
	walk_left
# 835 "data/maps/PewterCity/scripts.pory"
	walk_left
# 836 "data/maps/PewterCity/scripts.pory"
	step_end
# 837 "data/maps/PewterCity/scripts.pory"

# 838 "data/maps/PewterCity/scripts.pory"
@ Unused
# 839 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_WalkInPlaceLeft::
# 840 "data/maps/PewterCity/scripts.pory"
	walk_in_place_left
# 841 "data/maps/PewterCity/scripts.pory"
	step_end
# 842 "data/maps/PewterCity/scripts.pory"
	
# 843 "data/maps/PewterCity/scripts.pory"
Text_DreamEaterTeach:: @ 817E316
# 844 "data/maps/PewterCity/scripts.pory"
    .string "Yawn!\n"
# 845 "data/maps/PewterCity/scripts.pory"
    .string "I must have dozed off in the sun.\p"
# 846 "data/maps/PewterCity/scripts.pory"
    .string "I had this weird dream about\n"
# 847 "data/maps/PewterCity/scripts.pory"
    .string "a DROWZEE eating my dream.\p"
# 848 "data/maps/PewterCity/scripts.pory"
    .string "And…\n"
# 849 "data/maps/PewterCity/scripts.pory"
    .string "I learned how to eat dreams…\p"
# 850 "data/maps/PewterCity/scripts.pory"
    .string "Oogh, this is too spooky!\p"
# 851 "data/maps/PewterCity/scripts.pory"
    .string "Let me teach it to a POKéMON so\n"
# 852 "data/maps/PewterCity/scripts.pory"
    .string "I can forget about it!$"
# 853 "data/maps/PewterCity/scripts.pory"

# 854 "data/maps/PewterCity/scripts.pory"
Text_DreamEaterDeclined:: @ 817E3E9
# 855 "data/maps/PewterCity/scripts.pory"
    .string "…Snore…$"
# 856 "data/maps/PewterCity/scripts.pory"

# 857 "data/maps/PewterCity/scripts.pory"
Text_DreamEaterWhichMon:: @ 817E3F1
# 858 "data/maps/PewterCity/scripts.pory"
    .string "Which POKéMON wants to learn\n"
# 859 "data/maps/PewterCity/scripts.pory"
    .string "DREAM EATER?$"
# 860 "data/maps/PewterCity/scripts.pory"

# 861 "data/maps/PewterCity/scripts.pory"
Text_DreamEaterTaught:: @ 817E41B
# 862 "data/maps/PewterCity/scripts.pory"
    .string "…ZZZ…\n"
# 863 "data/maps/PewterCity/scripts.pory"
    .string "I…can't eat…anymore…$"
# 864 "data/maps/PewterCity/scripts.pory"

# 865 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_ClefairyCameFromMoon:: @ 817E436
# 866 "data/maps/PewterCity/scripts.pory"
    .string "CLEFAIRY came from the moon.\n"
# 867 "data/maps/PewterCity/scripts.pory"
    .string "That's what the rumor is.\p"
# 868 "data/maps/PewterCity/scripts.pory"
    .string "They appeared after MOON STONES\n"
# 869 "data/maps/PewterCity/scripts.pory"
    .string "fell on MT. MOON.$"
# 870 "data/maps/PewterCity/scripts.pory"

# 871 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_BrockOnlySeriousTrainerHere:: @ 817E49F
# 872 "data/maps/PewterCity/scripts.pory"
    .string "There aren't many serious POKéMON\n"
# 873 "data/maps/PewterCity/scripts.pory"
    .string "TRAINERS here.\p"
# 874 "data/maps/PewterCity/scripts.pory"
    .string "They're all like BUG CATCHERS,\n"
# 875 "data/maps/PewterCity/scripts.pory"
    .string "you know, just hobbyists.\p"
# 876 "data/maps/PewterCity/scripts.pory"
    .string "But PEWTER GYM's BROCK isn't like\n"
# 877 "data/maps/PewterCity/scripts.pory"
    .string "that, not one bit.$"
# 878 "data/maps/PewterCity/scripts.pory"

# 879 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_DidYouCheckOutMuseum:: @ 817E53E
# 880 "data/maps/PewterCity/scripts.pory"
    .string "Did you check out the MUSEUM?$"
# 881 "data/maps/PewterCity/scripts.pory"

# 882 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_WerentThoseFossilsAmazing:: @ 817E55C
# 883 "data/maps/PewterCity/scripts.pory"
    .string "Weren't those fossils from MT. MOON\n"
# 884 "data/maps/PewterCity/scripts.pory"
    .string "amazing?$"
# 885 "data/maps/PewterCity/scripts.pory"

# 886 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_ReallyYouHaveToGo:: @ 817E589
# 887 "data/maps/PewterCity/scripts.pory"
    .string "Really?\n"
# 888 "data/maps/PewterCity/scripts.pory"
    .string "You absolutely have to go!$"
# 889 "data/maps/PewterCity/scripts.pory"

# 890 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_ThisIsTheMuseum:: @ 817E5AC
# 891 "data/maps/PewterCity/scripts.pory"
    .string "This is it, the MUSEUM.\p"
# 892 "data/maps/PewterCity/scripts.pory"
    .string "You have to pay to get in, but it's\n"
# 893 "data/maps/PewterCity/scripts.pory"
    .string "worth it. See you around!$"
# 894 "data/maps/PewterCity/scripts.pory"

# 895 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_DoYouKnowWhatImDoing:: @ 817E602
# 896 "data/maps/PewterCity/scripts.pory"
    .string "Psssst!\n"
# 897 "data/maps/PewterCity/scripts.pory"
    .string "Do you know what I'm doing?$"
# 898 "data/maps/PewterCity/scripts.pory"

# 899 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_ThatsRightItsHardWork:: @ 817E626
# 900 "data/maps/PewterCity/scripts.pory"
    .string "That's right!\n"
# 901 "data/maps/PewterCity/scripts.pory"
    .string "It's hard work!$"
# 902 "data/maps/PewterCity/scripts.pory"

# 903 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_SprayingRepelToKeepWildMonsOut:: @ 817E644
# 904 "data/maps/PewterCity/scripts.pory"
    .string "I'm spraying REPEL to keep wild\n"
# 905 "data/maps/PewterCity/scripts.pory"
    .string "POKéMON out of my garden!$"
# 906 "data/maps/PewterCity/scripts.pory"

# 907 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_BrocksLookingForChallengersFollowMe:: @ 817E67E
# 908 "data/maps/PewterCity/scripts.pory"
    .string "You're a TRAINER, right?\p"
# 909 "data/maps/PewterCity/scripts.pory"
    .string "BROCK's looking for new\n"
# 910 "data/maps/PewterCity/scripts.pory"
    .string "challengers. Follow me!$"
# 911 "data/maps/PewterCity/scripts.pory"

# 912 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_GoTakeOnBrock:: @ 817E6C7
# 913 "data/maps/PewterCity/scripts.pory"
    .string "If you have the right stuff,\n"
# 914 "data/maps/PewterCity/scripts.pory"
    .string "go take on BROCK!$"
# 915 "data/maps/PewterCity/scripts.pory"

# 916 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_TrainerTipsEarningEXP:: @ 817E6F6
# 917 "data/maps/PewterCity/scripts.pory"
    .string "TRAINER TIPS\p"
# 918 "data/maps/PewterCity/scripts.pory"
    .string "All POKéMON that appear in battle,\n"
# 919 "data/maps/PewterCity/scripts.pory"
    .string "however briefly, earn EXP Points.$"
# 920 "data/maps/PewterCity/scripts.pory"

# 921 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_CallPoliceIfInfoOnThieves:: @ 817E748
# 922 "data/maps/PewterCity/scripts.pory"
    .string "NOTICE!\p"
# 923 "data/maps/PewterCity/scripts.pory"
    .string "Thieves have been stealing POKéMON\n"
# 924 "data/maps/PewterCity/scripts.pory"
    .string "fossils from MT. MOON.\p"
# 925 "data/maps/PewterCity/scripts.pory"
    .string "Please call the PEWTER POLICE if\n"
# 926 "data/maps/PewterCity/scripts.pory"
    .string "you have any information.$"
# 927 "data/maps/PewterCity/scripts.pory"

# 928 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_MuseumOfScience:: @ 817E7C5
# 929 "data/maps/PewterCity/scripts.pory"
    .string "PEWTER MUSEUM OF SCIENCE$"
# 930 "data/maps/PewterCity/scripts.pory"

# 931 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_GymSign:: @ 817E7DE
# 932 "data/maps/PewterCity/scripts.pory"
    .string "PEWTER CITY POKéMON GYM\n"
# 933 "data/maps/PewterCity/scripts.pory"
    .string "LEADER: BROCK\l"
# 934 "data/maps/PewterCity/scripts.pory"
    .string "The Rock-Solid POKéMON TRAINER!$"
# 935 "data/maps/PewterCity/scripts.pory"

# 936 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_CitySign:: @ 817E824
# 937 "data/maps/PewterCity/scripts.pory"
    .string "PEWTER CITY\n"
# 938 "data/maps/PewterCity/scripts.pory"
    .string "A Stone Gray City$"
# 939 "data/maps/PewterCity/scripts.pory"

# 940 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_OhPlayer:: @ 817E902
# 941 "data/maps/PewterCity/scripts.pory"
    .string "Oh, {PLAYER}{KUN}!$"
# 942 "data/maps/PewterCity/scripts.pory"

# 943 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_AskedToDeliverThis:: @ 817E90C
# 944 "data/maps/PewterCity/scripts.pory"
    .string "I'm glad I caught up to you.\n"
# 945 "data/maps/PewterCity/scripts.pory"
    .string "I'm PROF. OAK's AIDE.\p"
# 946 "data/maps/PewterCity/scripts.pory"
    .string "I've been asked to deliver this,\n"
# 947 "data/maps/PewterCity/scripts.pory"
    .string "so here you go.$"
# 948 "data/maps/PewterCity/scripts.pory"

# 949 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_ReceivedRunningShoesFromAide:: @ 817E970
# 950 "data/maps/PewterCity/scripts.pory"
    .string "{PLAYER} received the\n"
# 951 "data/maps/PewterCity/scripts.pory"
    .string "RUNNING SHOES from the AIDE.$"
# 952 "data/maps/PewterCity/scripts.pory"

# 953 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_SwitchedShoesWithRunningShoes:: @ 817E99D
# 954 "data/maps/PewterCity/scripts.pory"
    .string "{PLAYER} switched shoes with the\n"
# 955 "data/maps/PewterCity/scripts.pory"
    .string "RUNNING SHOES.$"
# 956 "data/maps/PewterCity/scripts.pory"

# 957 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_ExplainRunningShoes:: @ 817E9C7
# 958 "data/maps/PewterCity/scripts.pory"
    .string "Press the B Button to run.\n"
# 959 "data/maps/PewterCity/scripts.pory"
    .string "But only where there's room to run!$"
# 960 "data/maps/PewterCity/scripts.pory"

# 961 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_MustBeGoingBackToLab:: @ 817EA06
# 962 "data/maps/PewterCity/scripts.pory"
    .string "Well, I must be going back to\n"
# 963 "data/maps/PewterCity/scripts.pory"
    .string "the LAB.\p"
# 964 "data/maps/PewterCity/scripts.pory"
    .string "Bye-bye!$"
# 965 "data/maps/PewterCity/scripts.pory"

# 966 "data/maps/PewterCity/scripts.pory"
PewterCity_Text_RunningShoesLetterFromMom:: @ 817EA36
# 967 "data/maps/PewterCity/scripts.pory"
    .string "There's a letter attached…\p"
# 968 "data/maps/PewterCity/scripts.pory"
    .string "Dear {PLAYER},\p"
# 969 "data/maps/PewterCity/scripts.pory"
    .string "Here is a pair of RUNNING SHOES\n"
# 970 "data/maps/PewterCity/scripts.pory"
    .string "for my beloved challenger.\p"
# 971 "data/maps/PewterCity/scripts.pory"
    .string "Remember, I'll always cheer for\n"
# 972 "data/maps/PewterCity/scripts.pory"
    .string "you! Don't ever give up!\p"
# 973 "data/maps/PewterCity/scripts.pory"
    .string "From Mom$"
