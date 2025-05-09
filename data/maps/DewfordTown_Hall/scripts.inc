# 1 "data/maps/DewfordTown_Hall/scripts.pory"

# 2 "data/maps/DewfordTown_Hall/scripts.pory"
.set LOCALID_EXPERT_M, 4
# 3 "data/maps/DewfordTown_Hall/scripts.pory"
.set LOCALID_TWIN, 5
# 4 "data/maps/DewfordTown_Hall/scripts.pory"
.set LOCALID_SCHOOL_KID_M, 7
# 5 "data/maps/DewfordTown_Hall/scripts.pory"
.set LOCALID_PSYCHIC_M, 8
# 6 "data/maps/DewfordTown_Hall/scripts.pory"

# 7 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_MapScripts:: @ 81FD4CF
# 8 "data/maps/DewfordTown_Hall/scripts.pory"
	.byte 0
# 9 "data/maps/DewfordTown_Hall/scripts.pory"

# 10 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Girl:: @ 81FD4D0
# 11 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 12 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 13 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 14 "data/maps/DewfordTown_Hall/scripts.pory"
	special TrendyPhraseIsOld
# 15 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, TRUE
# 16 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_GirlBoredOfTrend
# 17 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_CantImagineLifeWithoutTrend, MSGBOX_DEFAULT
# 18 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 19 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 20 "data/maps/DewfordTown_Hall/scripts.pory"

# 21 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_GirlBoredOfTrend:: @ 81FD4EF
# 22 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_GettingBoredOfTrend, MSGBOX_DEFAULT
# 23 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 24 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 25 "data/maps/DewfordTown_Hall/scripts.pory"

# 26 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Woman:: @ 81FD4F9
# 27 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 28 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 29 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 30 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TeachingMonAboutTrend, MSGBOX_DEFAULT
# 31 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 32 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 33 "data/maps/DewfordTown_Hall/scripts.pory"

# 34 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Man:: @ 81FD50A
# 35 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 36 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 37 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 38 "data/maps/DewfordTown_Hall/scripts.pory"
	special BufferDeepLinkPhrase
# 39 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_DeepLinkBetweenXAndY, MSGBOX_YESNO
# 40 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, YES
# 41 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_ConfirmTrendLink
# 42 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, NO
# 43 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_RejectTrendLink
# 44 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 45 "data/maps/DewfordTown_Hall/scripts.pory"

# 46 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ConfirmTrendLink:: @ 81FD533
# 47 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_MyHunchWasRight, MSGBOX_DEFAULT
# 48 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 49 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 50 "data/maps/DewfordTown_Hall/scripts.pory"

# 51 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_RejectTrendLink:: @ 81FD53D
# 52 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_NotEasyToKeepUp, MSGBOX_DEFAULT
# 53 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 54 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 55 "data/maps/DewfordTown_Hall/scripts.pory"

# 56 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ExpertM:: @ 81FD547
# 57 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 58 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 59 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 60 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TVShowAboutTrend, MSGBOX_DEFAULT
# 61 "data/maps/DewfordTown_Hall/scripts.pory"
	closemessage
# 62 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_EXPERT_M, Common_Movement_WalkInPlaceFastestUp
# 63 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 64 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 65 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 66 "data/maps/DewfordTown_Hall/scripts.pory"

# 67 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Twin:: @ 81FD563
# 68 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 69 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 70 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 71 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea, MSGBOX_DEFAULT
# 72 "data/maps/DewfordTown_Hall/scripts.pory"
	closemessage
# 73 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFastestUp
# 74 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 75 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 76 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 77 "data/maps/DewfordTown_Hall/scripts.pory"

# 78 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_LittleBoy:: @ 81FD57F
# 79 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 80 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 81 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 82 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_CollectTrendMerchandise, MSGBOX_DEFAULT
# 83 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 84 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 85 "data/maps/DewfordTown_Hall/scripts.pory"

# 86 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Bookshelf:: @ 81FD590
# 87 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 88 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 89 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BooksAboutTrend, MSGBOX_DEFAULT
# 90 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 91 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 92 "data/maps/DewfordTown_Hall/scripts.pory"

# 93 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Painting:: @ 81FD5A0
# 94 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 95 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 96 "data/maps/DewfordTown_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 97 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_ScreamTitle
# 99 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_ScreamTitle
# 100 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_SmileTitle
# 101 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_ScreamTitle
# 102 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_LastTitle
# 103 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_LastTitle
# 104 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_BirthTitle
# 105 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_LastTitle
# 106 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 107 "data/maps/DewfordTown_Hall/scripts.pory"

# 108 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ScreamTitle:: @ 81FD607
# 109 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendsScream, MSGBOX_DEFAULT
# 110 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 111 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 112 "data/maps/DewfordTown_Hall/scripts.pory"

# 113 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SmileTitle:: @ 81FD611
# 114 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendsSmile, MSGBOX_DEFAULT
# 115 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 116 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 117 "data/maps/DewfordTown_Hall/scripts.pory"

# 118 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_LastTitle:: @ 81FD61B
# 119 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LastTrend, MSGBOX_DEFAULT
# 120 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 121 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 122 "data/maps/DewfordTown_Hall/scripts.pory"

# 123 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_BirthTitle:: @ 81FD625
# 124 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BirthOfTrend, MSGBOX_DEFAULT
# 125 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 126 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 127 "data/maps/DewfordTown_Hall/scripts.pory"

# 128 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SchoolKidM:: @ 81FD62F
# 129 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 130 "data/maps/DewfordTown_Hall/scripts.pory"
	setvar VAR_0x8008, 0
# 131 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate
# 132 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 133 "data/maps/DewfordTown_Hall/scripts.pory"

# 134 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PsychicM:: @ 81FD63B
# 135 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 136 "data/maps/DewfordTown_Hall/scripts.pory"
	setvar VAR_0x8008, 1
# 137 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate
# 138 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 139 "data/maps/DewfordTown_Hall/scripts.pory"

# 140 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DoTrendDebate:: @ 81FD647
# 141 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 142 "data/maps/DewfordTown_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 143 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_TrendDebate1
# 145 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_TrendDebate1
# 146 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_TrendDebate2
# 147 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_TrendDebate2
# 148 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_TrendDebate3
# 149 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_TrendDebate3
# 150 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_TrendDebate4
# 151 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_TrendDebate5
# 152 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 153 "data/maps/DewfordTown_Hall/scripts.pory"

# 154 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate1:: @ 81FD6AD
# 155 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 156 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_SawTrendCoolestThing, MSGBOX_DEFAULT
# 157 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 158 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_AllegedTrendNotAuthentic, MSGBOX_DEFAULT
# 159 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 160 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 161 "data/maps/DewfordTown_Hall/scripts.pory"

# 162 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate2:: @ 81FD6C9
# 163 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 164 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_ComposedTrendThemeSong, MSGBOX_DEFAULT
# 165 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 166 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_WorkOnYourSinging, MSGBOX_DEFAULT
# 167 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 168 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 169 "data/maps/DewfordTown_Hall/scripts.pory"

# 170 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate3:: @ 81FD6E5
# 171 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 172 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_OrganizeTrendParty, MSGBOX_DEFAULT
# 173 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 174 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BrilliantIndeed, MSGBOX_DEFAULT
# 175 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 176 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 177 "data/maps/DewfordTown_Hall/scripts.pory"

# 178 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate4:: @ 81FD701
# 179 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 180 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendHasBecomePartOfLife, MSGBOX_DEFAULT
# 181 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 182 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind, MSGBOX_DEFAULT
# 183 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 184 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 185 "data/maps/DewfordTown_Hall/scripts.pory"

# 186 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate5:: @ 81FD71D
# 187 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 188 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible, MSGBOX_DEFAULT
# 189 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 190 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_WellBeTrendDuo, MSGBOX_DEFAULT
# 191 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 192 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 193 "data/maps/DewfordTown_Hall/scripts.pory"

# 194 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DontMovePlayer1:: @ 81FD739
# 195 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 196 "data/maps/DewfordTown_Hall/scripts.pory"

# 197 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact1:: @ 81FD73A
# 198 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PSYCHIC_M, DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft
# 199 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 200 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 0
# 201 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_PlayerReactWest
# 202 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 1
# 203 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_DontMovePlayer2
# 204 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 205 "data/maps/DewfordTown_Hall/scripts.pory"

# 206 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactWest:: @ 81FD75B
# 207 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 208 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_DontMovePlayer1
# 209 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 210 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 211 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 212 "data/maps/DewfordTown_Hall/scripts.pory"

# 213 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DontMovePlayer2:: @ 81FD771
# 214 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 215 "data/maps/DewfordTown_Hall/scripts.pory"

# 216 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact2:: @ 81FD772
# 217 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_SCHOOL_KID_M, DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight
# 218 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 219 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 0
# 220 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_PlayerReactNorthSouth
# 221 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 1
# 222 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_PlayerReactEast
# 223 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 224 "data/maps/DewfordTown_Hall/scripts.pory"

# 225 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactNorthSouth:: @ 81FD793
# 226 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 227 "data/maps/DewfordTown_Hall/scripts.pory"
	call_if_eq DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp
# 228 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 229 "data/maps/DewfordTown_Hall/scripts.pory"
	call_if_eq DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown
# 230 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 231 "data/maps/DewfordTown_Hall/scripts.pory"

# 232 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp:: @ 81FD7AA
# 233 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 234 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 235 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 236 "data/maps/DewfordTown_Hall/scripts.pory"

# 237 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown:: @ 81FD7B5
# 238 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 239 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 240 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 241 "data/maps/DewfordTown_Hall/scripts.pory"

# 242 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactEast:: @ 81FD7C0
# 243 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 244 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_DontMovePlayer1
# 245 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 246 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 247 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 248 "data/maps/DewfordTown_Hall/scripts.pory"

# 249 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft: @ 81FD7D6
# 250 "data/maps/DewfordTown_Hall/scripts.pory"
	walk_in_place_left
# 251 "data/maps/DewfordTown_Hall/scripts.pory"
	step_end
# 252 "data/maps/DewfordTown_Hall/scripts.pory"

# 253 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight: @ 81FD7D8
# 254 "data/maps/DewfordTown_Hall/scripts.pory"
	walk_in_place_right
# 255 "data/maps/DewfordTown_Hall/scripts.pory"
	step_end
# 256 "data/maps/DewfordTown_Hall/scripts.pory"

# 257 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SludgeBombMan:: @ 81FD7DA
# 258 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 259 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 260 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 261 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_06, DewfordTown_Hall_EventScript_MintMan
# 262 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM36, DewfordTown_Hall_EventScript_MintMan
# 263 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_GiveYouSludgeBomb, MSGBOX_DEFAULT
# 264 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_TM36
# 265 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, FALSE
# 266 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 267 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_RECEIVED_TM36
# 268 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 269 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 270 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 271 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_MintMan:: @ 81FD7DA
# 272 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 273 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 274 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_set FLAG_DAILY_EVOLUTION_ITEM, DewfordTown_Hall_EventScript_ReceivedMint
# 275 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 276 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_Mouth_Mints, MSGBOX_YESNO
# 277 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, NO
# 278 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_MintDeclined
# 279 "data/maps/DewfordTown_Hall/scripts.pory"
	random 22
# 280 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 281 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_LonelyMint
# 282 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_AdamantMint
# 283 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_NaughtyMint
# 284 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_BraveMint
# 285 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_BoldMint
# 286 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_ImpishMint
# 287 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_LaxMint
# 288 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_RelaxedMint
# 289 "data/maps/DewfordTown_Hall/scripts.pory"
	case 8, DewfordTown_Hall_EventScript_ModestMint
# 290 "data/maps/DewfordTown_Hall/scripts.pory"
	case 9, DewfordTown_Hall_EventScript_MildMint
# 291 "data/maps/DewfordTown_Hall/scripts.pory"
	case 10, DewfordTown_Hall_EventScript_RashMint
# 292 "data/maps/DewfordTown_Hall/scripts.pory"
	case 11, DewfordTown_Hall_EventScript_QuietMint
# 293 "data/maps/DewfordTown_Hall/scripts.pory"
	case 12, DewfordTown_Hall_EventScript_CalmMint
# 294 "data/maps/DewfordTown_Hall/scripts.pory"
	case 12, DewfordTown_Hall_EventScript_GentleMint
# 295 "data/maps/DewfordTown_Hall/scripts.pory"
	case 13, DewfordTown_Hall_EventScript_CarefulMint
# 296 "data/maps/DewfordTown_Hall/scripts.pory"
	case 14, DewfordTown_Hall_EventScript_SassyMint
# 297 "data/maps/DewfordTown_Hall/scripts.pory"
	case 15, DewfordTown_Hall_EventScript_TimidMint
# 298 "data/maps/DewfordTown_Hall/scripts.pory"
	case 16, DewfordTown_Hall_EventScript_HastyMint
# 299 "data/maps/DewfordTown_Hall/scripts.pory"
	case 17, DewfordTown_Hall_EventScript_JollyMint
# 300 "data/maps/DewfordTown_Hall/scripts.pory"
	case 18, DewfordTown_Hall_EventScript_NaiveMint
# 301 "data/maps/DewfordTown_Hall/scripts.pory"
	case 19, DewfordTown_Hall_EventScript_SeriousMint
# 302 "data/maps/DewfordTown_Hall/scripts.pory"
	case 20, DewfordTown_Hall_EventScript_SeriousMint
# 303 "data/maps/DewfordTown_Hall/scripts.pory"
	case 21, DewfordTown_Hall_EventScript_SeriousMint
# 304 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 305 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 306 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 307 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 308 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_LonelyMint::
# 309 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 310 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_WATER_STONE
# 311 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 312 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 313 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 314 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 315 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 316 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 317 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 318 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_AdamantMint::
# 319 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 320 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 321 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 322 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 323 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 324 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 325 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 326 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 327 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 328 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_NaughtyMint::
# 329 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 330 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_THUNDER_STONE
# 331 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 332 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 333 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 334 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 335 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 336 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 337 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 338 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_BraveMint::
# 339 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 340 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_ICE_STONE
# 341 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 342 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 343 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 344 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 345 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 346 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 347 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 348 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_BoldMint::
# 349 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 350 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_DAWN_STONE
# 351 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 352 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 353 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 354 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 355 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 356 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 357 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 358 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ImpishMint::
# 359 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 360 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_DUSK_STONE
# 361 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 362 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 363 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 364 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 365 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 366 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 367 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 368 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_LaxMint::
# 369 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 370 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_OVAL_STONE
# 371 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 372 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 373 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 374 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 375 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 376 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 377 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 378 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_RelaxedMint::
# 379 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 380 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 381 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 382 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 383 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 384 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 385 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 386 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 387 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 388 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ModestMint::
# 389 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 390 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_UP_GRADE
# 391 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 392 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 393 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 394 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 395 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 396 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 397 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 398 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_MildMint::
# 399 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 400 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_REAPER_CLOTH
# 401 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 402 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 403 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 404 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 405 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 406 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 407 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 408 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_RashMint::
# 409 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 410 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_SUN_STONE
# 411 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 412 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 413 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 414 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 415 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 416 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 417 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 418 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_QuietMint::
# 419 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 420 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_SHINY_STONE
# 421 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 422 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 423 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 424 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 425 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 426 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 427 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 428 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_CalmMint::
# 429 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 430 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_LEAF_STONE
# 431 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 432 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 433 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 434 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 435 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 436 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 437 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 438 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_GentleMint::
# 439 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 440 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_DEEP_SEA_TOOTH
# 441 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 442 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 443 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 444 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 445 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 446 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 447 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 448 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_CarefulMint::
# 449 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 450 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_DRAGON_SCALE
# 451 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 452 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 453 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 454 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 455 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 456 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 457 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 458 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SassyMint::
# 459 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 460 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_DUBIOUS_DISC
# 461 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 462 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 463 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 464 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 465 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 466 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 467 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 468 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TimidMint::
# 469 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 470 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_MAGMARIZER
# 471 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 472 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 473 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 474 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 475 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 476 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 477 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 478 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_HastyMint::
# 479 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 480 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_PROTECTOR
# 481 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 482 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 483 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 484 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 485 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 486 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 487 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 488 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_JollyMint::
# 489 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 490 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_SACHET
# 491 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 492 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 493 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 494 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 495 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 496 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 497 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 498 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_NaiveMint::
# 499 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 500 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_WHIPPED_DREAM
# 501 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 502 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 503 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 504 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 505 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 506 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 507 "data/maps/DewfordTown_Hall/scripts.pory"
//Lonely
# 508 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SeriousMint::
# 509 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 510 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_ELECTIRIZER
# 511 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
# 512 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 513 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveMintsButTrendInToo, MSGBOX_DEFAULT
# 514 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 515 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 516 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 517 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ReceivedSludgeBomb:: @ 81FD80E
# 518 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo, MSGBOX_DEFAULT
# 519 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 520 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 521 "data/maps/DewfordTown_Hall/scripts.pory"

# 522 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ReceivedMint::
# 523 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_ComeTomorrow, MSGBOX_DEFAULT
# 524 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 525 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 526 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 527 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_MintDeclined::
# 528 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_FossilDecline, MSGBOX_DEFAULT
# 529 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 530 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 531 "data/maps/DewfordTown_Hall/scripts.pory"

# 532 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_CantImagineLifeWithoutTrend: @ 81FD818
# 533 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What's in vogue? Why, it has to be\n"
# 534 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”!\p"
# 535 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I can't imagine what life would be like\n"
# 536 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "without “{STR_VAR_1}”!$"
# 537 "data/maps/DewfordTown_Hall/scripts.pory"

# 538 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_GettingBoredOfTrend: @ 81FD877
# 539 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What's in vogue? Why, it has to be\n"
# 540 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”!\p"
# 541 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "But I'm getting kind of bored with it.\p"
# 542 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I should look for the next big thing.$"
# 543 "data/maps/DewfordTown_Hall/scripts.pory"

# 544 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TeachingMonAboutTrend: @ 81FD8ED
# 545 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm teaching my Pokémon about\n"
# 546 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1},”\l"
# 547 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "but it's not going well.\p"
# 548 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's a bit too much, I think.$"
# 549 "data/maps/DewfordTown_Hall/scripts.pory"

# 550 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_DeepLinkBetweenXAndY: @ 81FD948
# 551 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm studying up on the hip and trendy\n"
# 552 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” now.\p"
# 553 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Is it true that there's a deep link\n"
# 554 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "between “{STR_VAR_1}”\l"
# 555 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "and “{STR_VAR_2}”?$"
# 556 "data/maps/DewfordTown_Hall/scripts.pory"

# 557 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_MyHunchWasRight: @ 81FD9B3
# 558 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh!\n"
# 559 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "So, my hunch was right!\p"
# 560 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm one step closer to being hip and\n"
# 561 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "happening, yowza!$"
# 562 "data/maps/DewfordTown_Hall/scripts.pory"

# 563 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_NotEasyToKeepUp: @ 81FDA06
# 564 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What?!\n"
# 565 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Is that so?!\p"
# 566 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's not easy for an older fellow like\n"
# 567 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "me to keep up with trends!$"
# 568 "data/maps/DewfordTown_Hall/scripts.pory"

# 569 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TVShowAboutTrend: @ 81FDA5C
# 570 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "This whole business about\n"
# 571 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”…\l"
# 572 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Isn't there a TV show on it?$"
# 573 "data/maps/DewfordTown_Hall/scripts.pory"

# 574 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea: @ 81FDA99
# 575 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Across the sea…\p"
# 576 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Is “{STR_VAR_1}”\n"
# 577 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "even more popular?$"
# 578 "data/maps/DewfordTown_Hall/scripts.pory"

# 579 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_CollectTrendMerchandise: @ 81FDAC4
# 580 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I collect official\n"
# 581 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 582 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "licensed merchandise.\p"
# 583 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I have official\n"
# 584 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” dolls…\p"
# 585 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Official “{STR_VAR_1}”\n"
# 586 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "brand clothing…\p"
# 587 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "And officially licensed\n"
# 588 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 589 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "picture books.\p"
# 590 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Heheh, I own!\n"
# 591 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm not sharing anything with you!$"
# 592 "data/maps/DewfordTown_Hall/scripts.pory"

# 593 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BooksAboutTrend: @ 81FDB89
# 594 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Identifying Good\n"
# 595 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” &\l"
# 596 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Bad “{STR_VAR_1}”…\p"
# 597 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "The Link Between\n"
# 598 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” and\l"
# 599 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Pokémon…\p"
# 600 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Useful\n"
# 601 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”…\p"
# 602 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's neatly jammed with books about\n"
# 603 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}.”$"
# 604 "data/maps/DewfordTown_Hall/scripts.pory"

# 605 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendsScream: @ 81FDC05
# 606 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}'s\n"
# 607 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Scream” is the title.$"
# 608 "data/maps/DewfordTown_Hall/scripts.pory"

# 609 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendsSmile: @ 81FDC21
# 610 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}'s\n"
# 611 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Smile” is the title.$"
# 612 "data/maps/DewfordTown_Hall/scripts.pory"

# 613 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_LastTrend: @ 81FDC3C
# 614 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's titled “The Last\n"
# 615 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}”.$"
# 616 "data/maps/DewfordTown_Hall/scripts.pory"

# 617 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BirthOfTrend: @ 81FDC57
# 618 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's titled “The Birth of\n"
# 619 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}”.$"
# 620 "data/maps/DewfordTown_Hall/scripts.pory"

# 621 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_SawTrendCoolestThing: @ 81FDC76
# 622 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I saw “{STR_VAR_1}”!\n"
# 623 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Cool, huh?\p"
# 624 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's, like, the coolest thing going!\p"
# 625 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It was awesome!\n"
# 626 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It was the real thing, oh yeah!$"
# 627 "data/maps/DewfordTown_Hall/scripts.pory"

# 628 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_AllegedTrendNotAuthentic: @ 81FDCE2
# 629 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh, no, no, no.\p"
# 630 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "That alleged\n"
# 631 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 632 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "you claim to have seen--it's not.\p"
# 633 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "The authentic article is much…\n"
# 634 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "How should I say it?\l"
# 635 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Sharper, yet more mellow!\p"
# 636 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Ah, no matter. It's astonishing!$"
# 637 "data/maps/DewfordTown_Hall/scripts.pory"

# 638 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_ComposedTrendThemeSong: @ 81FDD95
# 639 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Hey, listen, I composed a theme song\n"
# 640 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "for “{STR_VAR_1}.”\p"
# 641 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\n"
# 642 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "is really popular right now.\p"
# 643 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Okay, listen!\n"
# 644 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "… …\p"
# 645 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh!\n"
# 646 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}!\p"
# 647 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Wonderful\n"
# 648 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}!$"
# 649 "data/maps/DewfordTown_Hall/scripts.pory"

# 650 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_WorkOnYourSinging: @ 81FDE0E
# 651 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "… …\p"
# 652 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I dare say, chap, it would pay for you\n"
# 653 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "to work on your singing before you\l"
# 654 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "trifle yourself with\l"
# 655 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}.”$"
# 656 "data/maps/DewfordTown_Hall/scripts.pory"

# 657 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_OrganizeTrendParty: @ 81FDE77
# 658 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Anyway, as I was saying earlier, we\n"
# 659 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "should get together and organize a\l"
# 660 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” party\l"
# 661 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "on the island.$"
# 662 "data/maps/DewfordTown_Hall/scripts.pory"

# 663 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BrilliantIndeed: @ 81FDED8
# 664 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh, a smashing good idea!\p"
# 665 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It will settle once and for all\n"
# 666 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "who is the best at\l"
# 667 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}.”\l"
# 668 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Brilliant, indeed!\p"
# 669 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Starting today, our lives will revolve\n"
# 670 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "around “{STR_VAR_1}”!$"
# 671 "data/maps/DewfordTown_Hall/scripts.pory"

# 672 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendHasBecomePartOfLife: @ 81FDF72
# 673 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I was thinking, though…\p"
# 674 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Wouldn't you agree that\n"
# 675 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” has\l"
# 676 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "grown from being something trendy to\l"
# 677 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "being a part of our daily lives?$"
# 678 "data/maps/DewfordTown_Hall/scripts.pory"

# 679 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind: @ 81FDFF1
# 680 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Beg pardon?\n"
# 681 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "That much, what?\p"
# 682 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "However, it's true that\n"
# 683 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 684 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "weighs heavily on your mind, whether\l"
# 685 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "you're awake or asleep.\p"
# 686 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Absolutely, you're the\n"
# 687 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 688 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Professor, old sport!$"
# 689 "data/maps/DewfordTown_Hall/scripts.pory"

# 690 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible: @ 81FE09A
# 691 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "If you and me team up as a combo,\n"
# 692 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "we'll be invincible when it comes to all\l"
# 693 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "things “{STR_VAR_1}”!$"
# 694 "data/maps/DewfordTown_Hall/scripts.pory"

# 695 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_WellBeTrendDuo: @ 81FE0F2
# 696 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Spot on, my friend!\p"
# 697 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "We shall be the\n"
# 698 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” Duo!\p"
# 699 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Isn't that a ripe image?\n"
# 700 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Hahahah!$"
# 701 "data/maps/DewfordTown_Hall/scripts.pory"

# 702 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_GiveYouSludgeBomb: @ 81FE142
# 703 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "For me, Sludge Bomb is at the peak\n"
# 704 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "of popularity. It's the one.\p"
# 705 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Hunh? You're telling me that you don't\n"
# 706 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "know about Sludge Bomb?\p"
# 707 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "That's outright pitiful.\n"
# 708 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'll give you one.$"
# 709 "data/maps/DewfordTown_Hall/scripts.pory"

# 710 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo: @ 81FE1ED
# 711 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I love Sludge Bomb.\p"
# 712 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "But Pokémon with the move\n"
# 713 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 714 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "are in, too.$"
# 715 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 716 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_LoveMintsButTrendInToo: @ 81FE1ED
# 717 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I love to collect items.\p"
# 718 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "But sharing my interest\n"
# 719 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "with other people is always\l"
# 720 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "better.$"
# 721 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 722 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_Mouth_Mints:
# 723 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Do you want a item from\n"
# 724 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "my “{STR_VAR_1}” collection?\l"
# 725 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I have a lot of them.$"
# 726 "data/maps/DewfordTown_Hall/scripts.pory"
	
# 727 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_ComeTomorrow:
# 728 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Come tomorrow, i may give you\n"
# 729 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "a different one.$"

DewfordTown_Hall_EventScript_EvolutionManiac::
# 733 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 734 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 735 "data/maps/DewfordTown_Hall/scripts.pory"
	checkitem ITEM_TM36, 1
# 736 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Hall_EventScript_EvolutionManiac_6
DewfordTown_Hall_EventScript_EvolutionManiac_5:
# 742 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_unset FLAG_DAILY_EVOLUTION_ITEM, DewfordTown_Hall_EventScript_EvolutionManiac_3
# 838 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_EventScript_EvolutionManiac_Text_1, MSGBOX_DEFAULT
DewfordTown_Hall_EventScript_EvolutionManiac_1:
# 840 "data/maps/DewfordTown_Hall/scripts.pory"
	release
	end

DewfordTown_Hall_EventScript_EvolutionManiac_2:
# 738 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 739 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_GiveYouSludgeBomb, MSGBOX_DEFAULT
# 740 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_TM36
	goto DewfordTown_Hall_EventScript_EvolutionManiac_1

DewfordTown_Hall_EventScript_EvolutionManiac_3:
# 744 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 745 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_Mouth_Mints, MSGBOX_YESNO
# 746 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, NO
# 747 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_MintDeclined
# 748 "data/maps/DewfordTown_Hall/scripts.pory"
	random 25
# 749 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_HereYoGo, MSGBOX_DEFAULT
# 750 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 751 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_EvolutionManiac_11
# 754 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_EvolutionManiac_12
# 757 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_EvolutionManiac_13
# 760 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_EvolutionManiac_14
# 763 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_EvolutionManiac_15
# 766 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_EvolutionManiac_16
# 769 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_EvolutionManiac_17
# 772 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_EvolutionManiac_18
# 775 "data/maps/DewfordTown_Hall/scripts.pory"
	case 8, DewfordTown_Hall_EventScript_EvolutionManiac_19
# 778 "data/maps/DewfordTown_Hall/scripts.pory"
	case 9, DewfordTown_Hall_EventScript_EvolutionManiac_20
# 781 "data/maps/DewfordTown_Hall/scripts.pory"
	case 10, DewfordTown_Hall_EventScript_EvolutionManiac_21
# 784 "data/maps/DewfordTown_Hall/scripts.pory"
	case 11, DewfordTown_Hall_EventScript_EvolutionManiac_22
# 787 "data/maps/DewfordTown_Hall/scripts.pory"
	case 12, DewfordTown_Hall_EventScript_EvolutionManiac_23
# 790 "data/maps/DewfordTown_Hall/scripts.pory"
	case 13, DewfordTown_Hall_EventScript_EvolutionManiac_24
# 793 "data/maps/DewfordTown_Hall/scripts.pory"
	case 14, DewfordTown_Hall_EventScript_EvolutionManiac_25
# 796 "data/maps/DewfordTown_Hall/scripts.pory"
	case 15, DewfordTown_Hall_EventScript_EvolutionManiac_26
# 799 "data/maps/DewfordTown_Hall/scripts.pory"
	case 16, DewfordTown_Hall_EventScript_EvolutionManiac_27
# 802 "data/maps/DewfordTown_Hall/scripts.pory"
	case 17, DewfordTown_Hall_EventScript_EvolutionManiac_28
# 805 "data/maps/DewfordTown_Hall/scripts.pory"
	case 18, DewfordTown_Hall_EventScript_EvolutionManiac_29
# 808 "data/maps/DewfordTown_Hall/scripts.pory"
	case 19, DewfordTown_Hall_EventScript_EvolutionManiac_30
# 811 "data/maps/DewfordTown_Hall/scripts.pory"
	case 20, DewfordTown_Hall_EventScript_EvolutionManiac_31
# 814 "data/maps/DewfordTown_Hall/scripts.pory"
	case 21, DewfordTown_Hall_EventScript_EvolutionManiac_32
# 817 "data/maps/DewfordTown_Hall/scripts.pory"
	case 22, DewfordTown_Hall_EventScript_EvolutionManiac_33
# 820 "data/maps/DewfordTown_Hall/scripts.pory"
	case 23, DewfordTown_Hall_EventScript_EvolutionManiac_34
# 823 "data/maps/DewfordTown_Hall/scripts.pory"
	case 24, DewfordTown_Hall_EventScript_EvolutionManiac_35
# 826 "data/maps/DewfordTown_Hall/scripts.pory"
	case 25, DewfordTown_Hall_EventScript_EvolutionManiac_36
# 829 "data/maps/DewfordTown_Hall/scripts.pory"
	case 26, DewfordTown_Hall_EventScript_EvolutionManiac_37
DewfordTown_Hall_EventScript_EvolutionManiac_9:
# 833 "data/maps/DewfordTown_Hall/scripts.pory"
	waitfanfare
# 834 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_EventScript_EvolutionManiac_Text_0, MSGBOX_NPC
# 835 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_DAILY_EVOLUTION_ITEM
	goto DewfordTown_Hall_EventScript_EvolutionManiac_1

DewfordTown_Hall_EventScript_EvolutionManiac_6:
# 736 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_06, DewfordTown_Hall_EventScript_EvolutionManiac_2
	goto DewfordTown_Hall_EventScript_EvolutionManiac_5

DewfordTown_Hall_EventScript_EvolutionManiac_11:
# 752 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_WATER_STONE
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_12:
# 755 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_FIRE_STONE
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_13:
# 758 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_THUNDER_STONE
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_14:
# 761 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_LEAF_STONE
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_15:
# 764 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_SUN_STONE
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_16:
# 767 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_SHINY_STONE
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_17:
# 770 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_DUSK_STONE
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_18:
# 773 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_DAWN_STONE
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_19:
# 776 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_ICE_STONE
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_20:
# 779 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_21:
# 782 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_DEEP_SEA_TOOTH
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_22:
# 785 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_DRAGON_SCALE
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_23:
# 788 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_DUBIOUS_DISC
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_24:
# 791 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_ELECTIRIZER
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_25:
# 794 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_KINGS_ROCK
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_26:
# 797 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_MAGMARIZER
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_27:
# 800 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_OVAL_STONE
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_28:
# 803 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_METAL_COAT
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_29:
# 806 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_PRISM_SCALE
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_30:
# 809 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_PROTECTOR
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_31:
# 812 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_RAZOR_CLAW
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_32:
# 815 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_RAZOR_FANG
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_33:
# 818 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_REAPER_CLOTH
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_34:
# 821 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_SACHET
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_35:
# 824 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_UP_GRADE
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_36:
# 827 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_WHIPPED_DREAM
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9

DewfordTown_Hall_EventScript_EvolutionManiac_37:
# 830 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_WHIPPED_DREAM
	goto DewfordTown_Hall_EventScript_EvolutionManiac_9


DewfordTown_Hall_EventScript_EvolutionManiac_Text_0:
# 834 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I love to collect items, but sharing my\n"
	.string "interest with other people its always\l"
	.string "better.$"

DewfordTown_Hall_EventScript_EvolutionManiac_Text_1:
# 838 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Come tomorrow, I may give you a\n"
	.string "different one.$"
