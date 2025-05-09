EventScript_CutTree::
# 10 "data/scripts/field_tools.pory"
	lockall
# 11 "data/scripts/field_tools.pory"
	checkitem ITEM_CUT_TOOL, 1
# 12 "data/scripts/field_tools.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_CutTree_2
# 22 "data/scripts/field_tools.pory"
	msgbox EventScript_CutTree_Text_1
EventScript_CutTree_1:
# 24 "data/scripts/field_tools.pory"
	closemessage
# 25 "data/scripts/field_tools.pory"
	releaseall
	end

EventScript_CutTree_2:
# 14 "data/scripts/field_tools.pory"
	msgbox EventScript_CutTree_Text_0, MSGBOX_YESNO
# 15 "data/scripts/field_tools.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_CutTree_5
	goto EventScript_CutTree_1

EventScript_CutTree_5:
# 16 "data/scripts/field_tools.pory"
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
# 17 "data/scripts/field_tools.pory"
	waitmovement 0
# 18 "data/scripts/field_tools.pory"
	removeobject VAR_LAST_TALKED
	goto EventScript_CutTree_1


EventScript_UseCut::
# 30 "data/scripts/field_tools.pory"
	lockall
# 31 "data/scripts/field_tools.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
# 32 "data/scripts/field_tools.pory"
	waitstate
# 33 "data/scripts/field_tools.pory"
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
# 34 "data/scripts/field_tools.pory"
	waitmovement 0
# 35 "data/scripts/field_tools.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/scripts/field_tools.pory"
	releaseall
	end


# 40 "data/scripts/field_tools.pory"
Movement_CutTreeDown:
# 41 "data/scripts/field_tools.pory"
	cut_tree
# 42 "data/scripts/field_tools.pory"
	step_end

EventScript_RockSmash::
# 47 "data/scripts/field_tools.pory"
	lockall
# 48 "data/scripts/field_tools.pory"
	checkitem ITEM_ROCK_SMASH_TOOL, 1
# 49 "data/scripts/field_tools.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RockSmash_2
# 64 "data/scripts/field_tools.pory"
	msgbox EventScript_RockSmash_Text_1
EventScript_RockSmash_1:
# 66 "data/scripts/field_tools.pory"
	closemessage
# 67 "data/scripts/field_tools.pory"
	releaseall
	end

EventScript_RockSmash_2:
# 51 "data/scripts/field_tools.pory"
	msgbox EventScript_RockSmash_Text_0, MSGBOX_YESNO
# 52 "data/scripts/field_tools.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_RockSmash_5
	goto EventScript_RockSmash_1

EventScript_RockSmash_5:
# 53 "data/scripts/field_tools.pory"
	applymovement VAR_LAST_TALKED, Movement_SmashRock
# 54 "data/scripts/field_tools.pory"
	waitmovement 0
# 55 "data/scripts/field_tools.pory"
	removeobject VAR_LAST_TALKED
# 56 "data/scripts/field_tools.pory"
	special RockSmashWildEncounter
# 58 "data/scripts/field_tools.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_RockSmash_7
	goto EventScript_RockSmash_1

EventScript_RockSmash_7:
# 59 "data/scripts/field_tools.pory"
	goto EventScript_TryRockSmashItem
	goto EventScript_RockSmash_1


EventScript_TryRockSmashItem::
# 73 "data/scripts/field_tools.pory"
	special TryStoreCutItem
# 74 "data/scripts/field_tools.pory"
	compare VAR_RESULT, FALSE
	goto_if_ne EventScript_TryRockSmashItem_2
EventScript_TryRockSmashItem_1:
# 77 "data/scripts/field_tools.pory"
	releaseall
	end

EventScript_TryRockSmashItem_2:
# 75 "data/scripts/field_tools.pory"
	giveitem VAR_RESULT
	goto EventScript_TryRockSmashItem_1


# 81 "data/scripts/field_tools.pory"
Movement_SmashRock:
# 82 "data/scripts/field_tools.pory"
	rock_smash_break
# 83 "data/scripts/field_tools.pory"
	step_end

EventScript_UseRockSmash::
# 88 "data/scripts/field_tools.pory"
	lockall
# 89 "data/scripts/field_tools.pory"
	dofieldeffect FLDEFF_USE_ROCK_SMASH
# 90 "data/scripts/field_tools.pory"
	waitstate
# 91 "data/scripts/field_tools.pory"
	goto EventScript_SmashRock
	end


EventScript_SmashRock::
# 96 "data/scripts/field_tools.pory"
	applymovement VAR_LAST_TALKED, Movement_SmashRock
# 97 "data/scripts/field_tools.pory"
	waitmovement 0
# 98 "data/scripts/field_tools.pory"
	removeobject VAR_LAST_TALKED
# 99 "data/scripts/field_tools.pory"
	special RockSmashWildEncounter
# 100 "data/scripts/field_tools.pory"
	compare VAR_RESULT, FALSE
# 101 "data/scripts/field_tools.pory"
	goto_if_eq EventScript_TryRockSmashItem
# 102 "data/scripts/field_tools.pory"
	releaseall
	end


EventScript_StrengthBoulder::
# 108 "data/scripts/field_tools.pory"
	lockall
# 109 "data/scripts/field_tools.pory"
	checkitem ITEM_STRENGTH_TOOL, 1
# 110 "data/scripts/field_tools.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_StrengthBoulder_2
# 121 "data/scripts/field_tools.pory"
	msgbox EventScript_StrengthBoulder_Text_2
EventScript_StrengthBoulder_1:
# 123 "data/scripts/field_tools.pory"
	closemessage
# 124 "data/scripts/field_tools.pory"
	releaseall
	end

EventScript_StrengthBoulder_2:
# 112 "data/scripts/field_tools.pory"
	msgbox EventScript_StrengthBoulder_Text_0, MSGBOX_YESNO
# 113 "data/scripts/field_tools.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_StrengthBoulder_5
	goto EventScript_StrengthBoulder_1

EventScript_StrengthBoulder_5:
# 114 "data/scripts/field_tools.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 115 "data/scripts/field_tools.pory"
	waitstate
# 116 "data/scripts/field_tools.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 117 "data/scripts/field_tools.pory"
	msgbox EventScript_StrengthBoulder_Text_1, MSGBOX_DEFAULT
	goto EventScript_StrengthBoulder_1


EventScript_UseStrength::
# 129 "data/scripts/field_tools.pory"
	lockall
# 130 "data/scripts/field_tools.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 131 "data/scripts/field_tools.pory"
	waitstate
# 132 "data/scripts/field_tools.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 133 "data/scripts/field_tools.pory"
	msgbox EventScript_UseStrength_Text_0, MSGBOX_DEFAULT
# 134 "data/scripts/field_tools.pory"
	releaseall
	end


EventScript_UseWaterfall::
# 140 "data/scripts/field_tools.pory"
	lockall
# 141 "data/scripts/field_tools.pory"
	checkitem ITEM_WATERFALL_TOOL, 1
# 142 "data/scripts/field_tools.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_UseWaterfall_2
# 150 "data/scripts/field_tools.pory"
	msgbox EventScript_UseWaterfall_Text_1
EventScript_UseWaterfall_1:
# 152 "data/scripts/field_tools.pory"
	releaseall
	end

EventScript_UseWaterfall_2:
# 144 "data/scripts/field_tools.pory"
	msgbox EventScript_UseWaterfall_Text_0, MSGBOX_YESNO
# 145 "data/scripts/field_tools.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_UseWaterfall_5
	goto EventScript_UseWaterfall_1

EventScript_UseWaterfall_5:
# 146 "data/scripts/field_tools.pory"
	dofieldeffect FLDEFF_USE_WATERFALL
	goto EventScript_UseWaterfall_1


EventScript_CannotUseWaterfall::
# 157 "data/scripts/field_tools.pory"
	lockall
# 158 "data/scripts/field_tools.pory"
	msgbox EventScript_UseWaterfall_Text_1
# 159 "data/scripts/field_tools.pory"
	releaseall
	end


EventScript_UseDive::
# 165 "data/scripts/field_tools.pory"
	lockall
# 167 "data/scripts/field_tools.pory"
	msgbox EventScript_UseDive_Text_0, MSGBOX_YESNO
# 168 "data/scripts/field_tools.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_UseDive_2
EventScript_UseDive_1:
# 171 "data/scripts/field_tools.pory"
	releaseall
	end

EventScript_UseDive_2:
# 169 "data/scripts/field_tools.pory"
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_UseDive_1


EventScript_UseDiveUnderwater::
# 176 "data/scripts/field_tools.pory"
	lockall
# 178 "data/scripts/field_tools.pory"
	msgbox EventScript_UseDiveUnderwater_Text_0, MSGBOX_YESNO
# 179 "data/scripts/field_tools.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_UseDiveUnderwater_2
EventScript_UseDiveUnderwater_1:
# 182 "data/scripts/field_tools.pory"
	releaseall
	end

EventScript_UseDiveUnderwater_2:
# 180 "data/scripts/field_tools.pory"
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_UseDiveUnderwater_1


EventScript_Headbutt::
# 188 "data/scripts/field_tools.pory"
	lockall
# 189 "data/scripts/field_tools.pory"
	checkitem ITEM_HEADBUTT_TOOL, 1
# 190 "data/scripts/field_tools.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Headbutt_2
EventScript_Headbutt_1:
# 194 "data/scripts/field_tools.pory"
	checkitem ITEM_HEADBUTT_TOOL, 1
# 195 "data/scripts/field_tools.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Headbutt_5
# 203 "data/scripts/field_tools.pory"
	msgbox EventScript_Headbutt_Text_1
EventScript_Headbutt_4:
# 205 "data/scripts/field_tools.pory"
	releaseall
	end

EventScript_Headbutt_2:
# 191 "data/scripts/field_tools.pory"
	additem ITEM_HEADBUTT_TOOL, 1
	goto EventScript_Headbutt_1

EventScript_Headbutt_5:
# 197 "data/scripts/field_tools.pory"
	msgbox EventScript_Headbutt_Text_0, MSGBOX_YESNO
# 198 "data/scripts/field_tools.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Headbutt_8
	goto EventScript_Headbutt_4

EventScript_Headbutt_8:
# 199 "data/scripts/field_tools.pory"
	goto EventScript_HeadbuttTree
	goto EventScript_Headbutt_4


EventScript_UseHeadbutt::
# 211 "data/scripts/field_tools.pory"
	lockall
# 212 "data/scripts/field_tools.pory"
	goto EventScript_HeadbuttTree
	return


EventScript_HeadbuttTree::
# 216 "data/scripts/field_tools.pory"
	setvar VAR_0x8004, 1
# 217 "data/scripts/field_tools.pory"
	setvar VAR_0x8005, 1
# 218 "data/scripts/field_tools.pory"
	setvar VAR_0x8006, 8
# 219 "data/scripts/field_tools.pory"
	setvar VAR_0x8007, 5
# 220 "data/scripts/field_tools.pory"
	special ShakeCamera
# 221 "data/scripts/field_tools.pory"
	waitstate
# 222 "data/scripts/field_tools.pory"
	special HeadbuttWildEncounter
# 223 "data/scripts/field_tools.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_HeadbuttTree_2
EventScript_HeadbuttTree_1:
# 226 "data/scripts/field_tools.pory"
	releaseall
	end

EventScript_HeadbuttTree_2:
# 224 "data/scripts/field_tools.pory"
	waitstate
	goto EventScript_HeadbuttTree_1


EventScript_FailSweetScent::
# 232 "data/scripts/field_tools.pory"
	msgbox EventScript_FailSweetScent_Text_0, MSGBOX_SIGN
	end


EventScript_CutTree_Text_0:
# 14 "data/scripts/field_tools.pory"
	.string "This tree looks like it can be cut down!\n"
	.string "Would you like to cut it using your Axe?$"

EventScript_CutTree_Text_1:
# 22 "data/scripts/field_tools.pory"
	.string "This tree looks like it can be cut down.$"

EventScript_RockSmash_Text_0:
# 51 "data/scripts/field_tools.pory"
	.string "This rock appears to be breakable.\n"
	.string "Would you like to break it?$"

EventScript_RockSmash_Text_1:
# 64 "data/scripts/field_tools.pory"
	.string "It's a rugged rock, but a Pickaxe may be\n"
	.string "able to smash it.$"

EventScript_StrengthBoulder_Text_0:
# 112 "data/scripts/field_tools.pory"
	.string "It's a big boulder, do you want to use\n"
	.string "the Power Glove to push it?$"

EventScript_StrengthBoulder_Text_1:
# 117 "data/scripts/field_tools.pory"
	.string "The Power Glove made it possible to\n"
	.string "move boulders around!$"

EventScript_StrengthBoulder_Text_2:
# 121 "data/scripts/field_tools.pory"
	.string "It's a big boulder, but a tool may help\n"
	.string "to push it aside.$"

EventScript_UseStrength_Text_0:
# 133 "data/scripts/field_tools.pory"
	.string "{STR_VAR_1} used Strength!\p"
	.string ", {STR_VAR_1}'s Strength made it\n"
	.string "possible to move boulders around!$"

EventScript_UseWaterfall_Text_0:
# 144 "data/scripts/field_tools.pory"
	.string "It's a large waterfall, do you want to\n"
	.string "use the Waterfall Tool to climb it?$"

EventScript_UseWaterfall_Text_1:
# 150 "data/scripts/field_tools.pory"
	.string "A wall of water is crashing down with a\n"
	.string "mighty roar.$"

EventScript_UseDive_Text_0:
# 167 "data/scripts/field_tools.pory"
	.string "The sea is deep here. Would you like to\n"
	.string "Dive?$"

EventScript_UseDiveUnderwater_Text_0:
# 178 "data/scripts/field_tools.pory"
	.string "Light is filtering down from above.\n"
	.string "Would you like to surface?$"

EventScript_Headbutt_Text_0:
# 197 "data/scripts/field_tools.pory"
	.string "This moderately sized tree looks like it\n"
	.string "might hide something. Would you like to\l"
	.string "shake it using your Shaking tool?$"

EventScript_Headbutt_Text_1:
# 203 "data/scripts/field_tools.pory"
	.string "This moderately sized tree looks like it\n"
	.string "might hide something.$"

EventScript_FailSweetScent_Text_0:
# 232 "data/scripts/field_tools.pory"
	.string "Looks like there's nothing here…$"

Text_MonUsedFieldMove::
# 4 "data/scripts/field_tools.pory"
	.string "{STR_VAR_1} used {STR_VAR_2}!$"
