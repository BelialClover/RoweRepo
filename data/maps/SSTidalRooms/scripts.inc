# 1 "data/maps/SSTidalRooms/scripts.pory"

# 2 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_MapScripts:: @ 823C9F1
# 3 "data/maps/SSTidalRooms/scripts.pory"
	.byte 0
# 4 "data/maps/SSTidalRooms/scripts.pory"

# 5 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_SnatchGiver:: @ 823C9F2
# 6 "data/maps/SSTidalRooms/scripts.pory"
	lock
# 7 "data/maps/SSTidalRooms/scripts.pory"
	faceplayer
# 8 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM49, SSTidalRooms_EventScript_ExplainSnatch
# 9 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NotSuspiciousTakeThis, MSGBOX_DEFAULT
# 10 "data/maps/SSTidalRooms/scripts.pory"
	giveitem ITEM_TM49
# 11 "data/maps/SSTidalRooms/scripts.pory"
	compare VAR_RESULT, FALSE
# 12 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 13 "data/maps/SSTidalRooms/scripts.pory"
	setflag FLAG_RECEIVED_TM49
# 14 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
# 15 "data/maps/SSTidalRooms/scripts.pory"
	release
# 16 "data/maps/SSTidalRooms/scripts.pory"
	end
# 17 "data/maps/SSTidalRooms/scripts.pory"

# 18 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_ExplainSnatch:: @ 823CA29
# 19 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
# 20 "data/maps/SSTidalRooms/scripts.pory"
	release
# 21 "data/maps/SSTidalRooms/scripts.pory"
	end
# 22 "data/maps/SSTidalRooms/scripts.pory"

# 23 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Bed:: @ 823CA33
# 24 "data/maps/SSTidalRooms/scripts.pory"
	lockall
# 25 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_TakeRestOnBed, MSGBOX_DEFAULT
# 26 "data/maps/SSTidalRooms/scripts.pory"
	closemessage
# 27 "data/maps/SSTidalRooms/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 28 "data/maps/SSTidalRooms/scripts.pory"
	call SSTidalRooms_EventScript_ProgessCruiseAfterBed
# 29 "data/maps/SSTidalRooms/scripts.pory"
	releaseall
# 30 "data/maps/SSTidalRooms/scripts.pory"
	end
# 31 "data/maps/SSTidalRooms/scripts.pory"

# 32 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Colton:: @ 823CA49
# 33 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_COLTON, SSTidalRooms_Text_ColtonIntro, SSTidalRooms_Text_ColtonDefeat
# 34 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ColtonPostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/SSTidalRooms/scripts.pory"
	end
# 36 "data/maps/SSTidalRooms/scripts.pory"

# 37 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Micah:: @ 823CA60
# 38 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_MICAH, SSTidalRooms_Text_MicahIntro, SSTidalRooms_Text_MicahDefeat
# 39 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_MicahPostBattle, MSGBOX_AUTOCLOSE
# 40 "data/maps/SSTidalRooms/scripts.pory"
	end
# 41 "data/maps/SSTidalRooms/scripts.pory"

# 42 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Thomas:: @ 823CA77
# 43 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_THOMAS, SSTidalRooms_Text_ThomasIntro, SSTidalRooms_Text_ThomasDefeat
# 44 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/SSTidalRooms/scripts.pory"
	end
# 46 "data/maps/SSTidalRooms/scripts.pory"

# 47 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Jed:: @ 823CA8E
# 48 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_JedIntro, SSTidalRooms_Text_JedDefeat, SSTidalRooms_Text_JedNotEnoughMons
# 49 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_JedPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/SSTidalRooms/scripts.pory"
	end
# 51 "data/maps/SSTidalRooms/scripts.pory"

# 52 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Lea:: @ 823CAA9
# 53 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_LeaIntro, SSTidalRooms_Text_LeaDefeat, SSTidalRooms_Text_LeaNotEnoughMons
# 54 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_LeaPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/SSTidalRooms/scripts.pory"
	end
# 56 "data/maps/SSTidalRooms/scripts.pory"

# 57 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Garret:: @ 823CAC4
# 58 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_GARRET, SSTidalRooms_Text_GarretIntro, SSTidalRooms_Text_GarretDefeat
# 59 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/SSTidalRooms/scripts.pory"
	end
# 61 "data/maps/SSTidalRooms/scripts.pory"

# 62 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Naomi:: @ 823CADB
# 63 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_NAOMI, SSTidalRooms_Text_NaomiIntro, SSTidalRooms_Text_NaomiDefeat
# 64 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/SSTidalRooms/scripts.pory"
	end
# 66 "data/maps/SSTidalRooms/scripts.pory"

# 67 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_TakeRestOnBed: @ 823CAF2
# 68 "data/maps/SSTidalRooms/scripts.pory"
	.string "There's a bed…\n"
# 69 "data/maps/SSTidalRooms/scripts.pory"
	.string "Let's take a rest.$"
# 70 "data/maps/SSTidalRooms/scripts.pory"

# 71 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonIntro: @ 823CB14
# 72 "data/maps/SSTidalRooms/scripts.pory"
	.string "I often sail to Lilycove City.\p"
# 73 "data/maps/SSTidalRooms/scripts.pory"
	.string "I enjoy attending Contests,\n"
# 74 "data/maps/SSTidalRooms/scripts.pory"
	.string "you see.$"
# 75 "data/maps/SSTidalRooms/scripts.pory"

# 76 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonDefeat: @ 823CB58
# 77 "data/maps/SSTidalRooms/scripts.pory"
	.string "That was an enjoyable match!$"
# 78 "data/maps/SSTidalRooms/scripts.pory"

# 79 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonPostBattle: @ 823CB75
# 80 "data/maps/SSTidalRooms/scripts.pory"
	.string "I get so excited imagining what kinds\n"
# 81 "data/maps/SSTidalRooms/scripts.pory"
	.string "of Pokémon I'll get to see in the next\l"
# 82 "data/maps/SSTidalRooms/scripts.pory"
	.string "Contest. The anticipation of it thrills!$"
# 83 "data/maps/SSTidalRooms/scripts.pory"

# 84 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahIntro: @ 823CBEB
# 85 "data/maps/SSTidalRooms/scripts.pory"
	.string "Are your friends strong?$"
# 86 "data/maps/SSTidalRooms/scripts.pory"

# 87 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahDefeat: @ 823CC04
# 88 "data/maps/SSTidalRooms/scripts.pory"
	.string "Your friends are, indeed, strong.$"
# 89 "data/maps/SSTidalRooms/scripts.pory"

# 90 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahPostBattle: @ 823CC26
# 91 "data/maps/SSTidalRooms/scripts.pory"
	.string "Friends need not be human.\n"
# 92 "data/maps/SSTidalRooms/scripts.pory"
	.string "For me, Pokémon are treasured friends!$"
# 93 "data/maps/SSTidalRooms/scripts.pory"

# 94 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasIntro: @ 823CC68
# 95 "data/maps/SSTidalRooms/scripts.pory"
	.string "Child…\n"
# 96 "data/maps/SSTidalRooms/scripts.pory"
	.string "Did you knock on the door?$"
# 97 "data/maps/SSTidalRooms/scripts.pory"

# 98 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasDefeat: @ 823CC8A
# 99 "data/maps/SSTidalRooms/scripts.pory"
	.string "A loss is to be accepted without haste\n"
# 100 "data/maps/SSTidalRooms/scripts.pory"
	.string "or panic.$"
# 101 "data/maps/SSTidalRooms/scripts.pory"

# 102 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasPostBattle: @ 823CCBB
# 103 "data/maps/SSTidalRooms/scripts.pory"
	.string "To be never ruffled in any situation is\n"
# 104 "data/maps/SSTidalRooms/scripts.pory"
	.string "the Gentleman's code of conduct.$"
# 105 "data/maps/SSTidalRooms/scripts.pory"

# 106 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedIntro: @ 823CD04
# 107 "data/maps/SSTidalRooms/scripts.pory"
	.string "Jed: I feel a little shy about this, but…\n"
# 108 "data/maps/SSTidalRooms/scripts.pory"
	.string "We'll show you our lovey-dovey power!$"
# 109 "data/maps/SSTidalRooms/scripts.pory"

# 110 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedDefeat: @ 823CD54
# 111 "data/maps/SSTidalRooms/scripts.pory"
	.string "Jed: Sigh…$"
# 112 "data/maps/SSTidalRooms/scripts.pory"

# 113 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedPostBattle: @ 823CD5F
# 114 "data/maps/SSTidalRooms/scripts.pory"
	.string "Jed: It's the first time that our lovey-\n"
# 115 "data/maps/SSTidalRooms/scripts.pory"
	.string "dovey power couldn't prevail!\l"
# 116 "data/maps/SSTidalRooms/scripts.pory"
	.string "You must be an awesome Trainer!$"
# 117 "data/maps/SSTidalRooms/scripts.pory"

# 118 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedNotEnoughMons: @ 823CDC6
# 119 "data/maps/SSTidalRooms/scripts.pory"
	.string "Jed: You only have one Pokémon?\n"
# 120 "data/maps/SSTidalRooms/scripts.pory"
	.string "Isn't that just too lonesome?$"
# 121 "data/maps/SSTidalRooms/scripts.pory"

# 122 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaIntro: @ 823CE04
# 123 "data/maps/SSTidalRooms/scripts.pory"
	.string "Lea: I feel a little silly, but…\n"
# 124 "data/maps/SSTidalRooms/scripts.pory"
	.string "We'll show you our lovey-dovey power!$"
# 125 "data/maps/SSTidalRooms/scripts.pory"

# 126 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaDefeat: @ 823CE4B
# 127 "data/maps/SSTidalRooms/scripts.pory"
	.string "Lea: Oh, boo!$"
# 128 "data/maps/SSTidalRooms/scripts.pory"

# 129 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaPostBattle: @ 823CE59
# 130 "data/maps/SSTidalRooms/scripts.pory"
	.string "Lea: I can't believe it!\n"
# 131 "data/maps/SSTidalRooms/scripts.pory"
	.string "Our lovey-dovey power failed…\l"
# 132 "data/maps/SSTidalRooms/scripts.pory"
	.string "You must be an awesome Trainer!$"
# 133 "data/maps/SSTidalRooms/scripts.pory"

# 134 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaNotEnoughMons: @ 823CEB0
# 135 "data/maps/SSTidalRooms/scripts.pory"
	.string "Lea: I wanted to battle…\n"
# 136 "data/maps/SSTidalRooms/scripts.pory"
	.string "But you don't even have two Pokémon…$"
# 137 "data/maps/SSTidalRooms/scripts.pory"

# 138 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretIntro: @ 823CEEE
# 139 "data/maps/SSTidalRooms/scripts.pory"
	.string "Ah, you've come just in time.\p"
# 140 "data/maps/SSTidalRooms/scripts.pory"
	.string "I'm bored, you see.\n"
# 141 "data/maps/SSTidalRooms/scripts.pory"
	.string "You may entertain me.$"
# 142 "data/maps/SSTidalRooms/scripts.pory"

# 143 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretDefeat: @ 823CF36
# 144 "data/maps/SSTidalRooms/scripts.pory"
	.string "…That will do.$"
# 145 "data/maps/SSTidalRooms/scripts.pory"

# 146 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretPostBattle: @ 823CF45
# 147 "data/maps/SSTidalRooms/scripts.pory"
	.string "Perhaps I shall get Father to acquire\n"
# 148 "data/maps/SSTidalRooms/scripts.pory"
	.string "a yacht for me.\l"
# 149 "data/maps/SSTidalRooms/scripts.pory"
	.string "A yacht for me and Pokémon!$"
# 150 "data/maps/SSTidalRooms/scripts.pory"

# 151 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiIntro: @ 823CF97
# 152 "data/maps/SSTidalRooms/scripts.pory"
	.string "Oh, you're such an adorable Trainer.\n"
# 153 "data/maps/SSTidalRooms/scripts.pory"
	.string "Would you like to have tea?\l"
# 154 "data/maps/SSTidalRooms/scripts.pory"
	.string "Or would you rather battle?$"
# 155 "data/maps/SSTidalRooms/scripts.pory"

# 156 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiDefeat: @ 823CFF4
# 157 "data/maps/SSTidalRooms/scripts.pory"
	.string "I see.\n"
# 158 "data/maps/SSTidalRooms/scripts.pory"
	.string "You're the active sort.$"
# 159 "data/maps/SSTidalRooms/scripts.pory"

# 160 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiPostBattle: @ 823D013
# 161 "data/maps/SSTidalRooms/scripts.pory"
	.string "A world cruise on a luxury liner has its\n"
# 162 "data/maps/SSTidalRooms/scripts.pory"
	.string "charms, I must say…\p"
# 163 "data/maps/SSTidalRooms/scripts.pory"
	.string "But, I will admit there is an appealing\n"
# 164 "data/maps/SSTidalRooms/scripts.pory"
	.string "side to touring Hoenn by ferry.$"
# 165 "data/maps/SSTidalRooms/scripts.pory"

# 166 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NotSuspiciousTakeThis: @ 823D098
# 167 "data/maps/SSTidalRooms/scripts.pory"
	.string "Uh… Hi! I… I'm not acting suspicious!\n"
# 168 "data/maps/SSTidalRooms/scripts.pory"
	.string "Uh… You can have this! For free!\p"
# 169 "data/maps/SSTidalRooms/scripts.pory"
	.string "It… Honestly, I didn't Snatch it from\n"
# 170 "data/maps/SSTidalRooms/scripts.pory"
	.string "someone! I'd never do such a thing!\l"
# 171 "data/maps/SSTidalRooms/scripts.pory"
	.string "It's clean! You can use it!$"
# 172 "data/maps/SSTidalRooms/scripts.pory"

# 173 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ExplainSnatch: @ 823D145
# 174 "data/maps/SSTidalRooms/scripts.pory"
	.string "Snatch steals the beneficial effects\n"
# 175 "data/maps/SSTidalRooms/scripts.pory"
	.string "of certain moves before they can be\l"
# 176 "data/maps/SSTidalRooms/scripts.pory"
	.string "used by a foe or ally.$"
