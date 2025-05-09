# 1 "data/maps/DewfordTown_Gym/scripts.pory"

# 2 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts:: @ 81FC63C
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species
# 5 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/DewfordTown_Gym/scripts.pory"

# 7 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition: @ 81FC642
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashRadius
# 9 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 10 "data/maps/DewfordTown_Gym/scripts.pory"

# 11 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashRadius:: @ 81FC648
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 0
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashRadius7
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 1
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashRadius6
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 2
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashRadius5
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 3
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashRadius4
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 4
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashRadius3
# 25 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 5
# 26 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashRadius2
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashRadius1
# 28 "data/maps/DewfordTown_Gym/scripts.pory"

# 29 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn:: @ 81FC6A2
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashradius 0
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 32 "data/maps/DewfordTown_Gym/scripts.pory"

# 33 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashRadius1:: @ 81FC6A6
# 34 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashradius 1
# 35 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 36 "data/maps/DewfordTown_Gym/scripts.pory"

# 37 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashRadius2:: @ 81FC6AA
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashradius 2
# 39 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 40 "data/maps/DewfordTown_Gym/scripts.pory"

# 41 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashRadius3:: @ 81FC6AE
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashradius 3
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 44 "data/maps/DewfordTown_Gym/scripts.pory"

# 45 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashRadius4:: @ 81FC6B2
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashradius 4
# 47 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 48 "data/maps/DewfordTown_Gym/scripts.pory"

# 49 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashRadius5:: @ 81FC6B6
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashradius 5
# 51 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 52 "data/maps/DewfordTown_Gym/scripts.pory"

# 53 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashRadius6:: @ 81FC6BA
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashradius 6
# 55 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 56 "data/maps/DewfordTown_Gym/scripts.pory"

# 57 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashRadius7:: @ 81FC6BE
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashradius 7
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 60 "data/maps/DewfordTown_Gym/scripts.pory"

# 61 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom:: @ 81FC6C2
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, VAR_0x8001
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_NoLightChange
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 1
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 2
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 3
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 4
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 5
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 6
# 78 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 79 "data/maps/DewfordTown_Gym/scripts.pory"

# 80 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange:: @ 81FC71A
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 82 "data/maps/DewfordTown_Gym/scripts.pory"

# 83 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer:: @ 81FC71B
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashRadius
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 89 "data/maps/DewfordTown_Gym/scripts.pory"

# 90 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers:: @ 81FC726
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashRadius
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 95 "data/maps/DewfordTown_Gym/scripts.pory"

# 96 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers:: @ 81FC731
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashRadius
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 101 "data/maps/DewfordTown_Gym/scripts.pory"

# 102 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers:: @ 81FC73C
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashRadius
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 107 "data/maps/DewfordTown_Gym/scripts.pory"

# 108 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers:: @ 81FC747
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashRadius
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 113 "data/maps/DewfordTown_Gym/scripts.pory"

# 114 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers:: @ 81FC752
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashRadius
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 119 "data/maps/DewfordTown_Gym/scripts.pory"

# 120 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness:: @ 81FC75D
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashRadius
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 125 "data/maps/DewfordTown_Gym/scripts.pory"

# 126 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated:: @ 81FC768
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn:: @ 81FC77B
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura:: @ 81FC789
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden:: @ 81FC797
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian:: @ 81FC7A5
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith:: @ 81FC7B3
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers:: @ 81FC7C1
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 147 "data/maps/DewfordTown_Gym/scripts.pory"

# 148 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly:: @ 81FC7C2
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly_PostBattle
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 156 "data/maps/DewfordTown_Gym/scripts.pory"

# 157 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated:: @ 81FC7F7
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ROXANNE_REMATCH
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 184 "data/maps/DewfordTown_Gym/scripts.pory"

# 185 "data/maps/DewfordTown_Gym/scripts.pory"

# 186 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_PostBattle::
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_ROXANNE_REMATCH, DewfordTown_Gym_EventScript_BrawlyRematch
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_DEFAULT
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch:: @ 81FC89C
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPreRematch, MSGBOX_DEFAULT
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_Start_Rematch_1
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematchEnd::
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ROXANNE_REMATCH 
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	call Gym_EventScript_Reset_Random_Rematch
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Start_Rematch_1::
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	checkitem ITEM_TM08_BULK_UP, 1
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_Start_Rematch_2
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GetTM, MSGBOX_DEFAULT
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM08_BULK_UP
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Start_Rematch_2::
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM08 DewfordTown_Gym_EventScript_Start_Rematch_Party_1
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	checkitem ITEM_TM51_LOW_SWEEP, 1
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_Start_Rematch_3
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyRematchDefeat
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GetTM, MSGBOX_DEFAULT
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM51_LOW_SWEEP
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Start_Rematch_3::
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM42 DewfordTown_Gym_EventScript_Start_Rematch_Party_2
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
	checkitem ITEM_TM87_SWAGGER, 1
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_Start_Rematch_4
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyRematchDefeat
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GetTM, MSGBOX_DEFAULT
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM87_SWAGGER
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Start_Rematch_4::
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM40 DewfordTown_Gym_EventScript_Start_Rematch_Party_3
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
	checkitem ITEM_TM52_FOCUS_BLAST, 1
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_Start_Rematch_5
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyRematchDefeat
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GetTM, MSGBOX_DEFAULT
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM52_FOCUS_BLAST
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Start_Rematch_5::
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04 DewfordTown_Gym_EventScript_Start_Rematch_Party_4
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_GOT_HERACROSS_MEGA_STONE DewfordTown_Gym_EventScript_Start_Rematch_6
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyRematchDefeat
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GetMegaStone, MSGBOX_DEFAULT
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_HERACRONITE
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_GOT_HERACROSS_MEGA_STONE
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Start_Rematch_6::
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM03 DewfordTown_Gym_EventScript_Start_Rematch_Party_4
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	checkitem ITEM_TM106_AURA_SPHERE, 1
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_Start_Rematch_Final
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyRematchDefeat
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GetTM, MSGBOX_DEFAULT
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM106_AURA_SPHERE
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Start_Rematch_Final::
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	random 5
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_RESULT
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	case 0, DewfordTown_Gym_EventScript_Start_Rematch_Party_1
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Start_Rematch_Party_2
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Start_Rematch_Party_3
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Start_Rematch_Party_4
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Start_Rematch_Party_5
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Start_Rematch_Party_1::
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GetReward, MSGBOX_DEFAULT
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_LONELY_MINT, 3
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Start_Rematch_Party_2::
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyRematchDefeat
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GetReward, MSGBOX_DEFAULT
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_ADAMANT_MINT, 3
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Start_Rematch_Party_3::
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyRematchDefeat
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GetReward, MSGBOX_DEFAULT
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT, 3
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Start_Rematch_Party_4::
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyRematchDefeat
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GetReward, MSGBOX_DEFAULT
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_BRAVE_MINT, 3
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Start_Rematch_Party_5::
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyRematchDefeat
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GetReward, MSGBOX_DEFAULT
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_JOLLY_MINT, 3
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 316 "data/maps/DewfordTown_Gym/scripts.pory"

# 317 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp:: @ 81FC855
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox Gym_Text_Takethis2, MSGBOX_DEFAULT
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM08_BULK_UP
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 323 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2: @ 81FC878
# 324 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM08_BULK_UP
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, 0
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 327 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 328 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 330 "data/maps/DewfordTown_Gym/scripts.pory"

# 331 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao:: @ 81FC8B7
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 335 "data/maps/DewfordTown_Gym/scripts.pory"

# 336 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom:: @ 81FC8D2
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 340 "data/maps/DewfordTown_Gym/scripts.pory"

# 341 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn:: @ 81FC8D9
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 345 "data/maps/DewfordTown_Gym/scripts.pory"

# 346 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom:: @ 81FC8F4
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 350 "data/maps/DewfordTown_Gym/scripts.pory"

# 351 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura:: @ 81FC8FB
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 355 "data/maps/DewfordTown_Gym/scripts.pory"

# 356 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom:: @ 81FC916
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 360 "data/maps/DewfordTown_Gym/scripts.pory"

# 361 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden:: @ 81FC91D
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 365 "data/maps/DewfordTown_Gym/scripts.pory"

# 366 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom:: @ 81FC938
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 370 "data/maps/DewfordTown_Gym/scripts.pory"

# 371 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian:: @ 81FC93F
# 372 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 373 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 375 "data/maps/DewfordTown_Gym/scripts.pory"

# 376 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom:: @ 81FC95A
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 380 "data/maps/DewfordTown_Gym/scripts.pory"

# 381 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith:: @ 81FC961
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 384 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 385 "data/maps/DewfordTown_Gym/scripts.pory"

# 386 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom:: @ 81FC97C
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 390 "data/maps/DewfordTown_Gym/scripts.pory"

# 391 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide:: @ 81FC983
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 394 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 395 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 398 "data/maps/DewfordTown_Gym/scripts.pory"

# 399 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory:: @ 81FC998
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 403 "data/maps/DewfordTown_Gym/scripts.pory"

# 404 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue:: @ 81FC9A2
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 409 "data/maps/DewfordTown_Gym/scripts.pory"

# 410 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue:: @ 81FC9B2
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 415 "data/maps/DewfordTown_Gym/scripts.pory"

# 416 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified:: @ 81FC9C2
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 419 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 420 "data/maps/DewfordTown_Gym/scripts.pory"

# 421 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue:: @ 81FC9CC
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 423 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 425 "data/maps/DewfordTown_Gym/scripts.pory"

# 426 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice: @ 81FC9D6
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford's Gym Leader Brawly commands\n"
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Fighting-type Pokémon.\p"
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with Normal-type\n"
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pokémon is asking for trouble.\p"
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Fighting Pokémon will lay a serious\n"
# 434 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on Normal Pokémon,\l"
# 435 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 436 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the Gym is as dark as\n"
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the Trainers in your way.\p"
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 441 "data/maps/DewfordTown_Gym/scripts.pory"

# 442 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory: @ 81FCB5C
# 443 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 444 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 445 "data/maps/DewfordTown_Gym/scripts.pory"

# 446 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro: @ 81FCB9F
# 447 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 448 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 449 "data/maps/DewfordTown_Gym/scripts.pory"

# 450 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat: @ 81FCBB8
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 452 "data/maps/DewfordTown_Gym/scripts.pory"

# 453 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle: @ 81FCBCA
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 455 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 456 "data/maps/DewfordTown_Gym/scripts.pory"

# 457 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro: @ 81FCC0A
# 458 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for Brawly to be\n"
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 460 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 461 "data/maps/DewfordTown_Gym/scripts.pory"

# 462 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat: @ 81FCC45
# 463 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 464 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 465 "data/maps/DewfordTown_Gym/scripts.pory"

# 466 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle: @ 81FCC6B
# 467 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 468 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 469 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a Gym Leader…\p"
# 470 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the Pokémon League\n"
# 471 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Champion!$"
# 472 "data/maps/DewfordTown_Gym/scripts.pory"

# 473 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro: @ 81FCD01
# 474 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 475 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 476 "data/maps/DewfordTown_Gym/scripts.pory"

# 477 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat: @ 81FCD3C
# 478 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 479 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 480 "data/maps/DewfordTown_Gym/scripts.pory"

# 481 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle: @ 81FCD4F
# 482 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 483 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 484 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 485 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see Brawly's face…$"
# 486 "data/maps/DewfordTown_Gym/scripts.pory"

# 487 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro: @ 81FCDB8
# 488 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 489 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 490 "data/maps/DewfordTown_Gym/scripts.pory"

# 491 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat: @ 81FCDE5
# 492 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 493 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 494 "data/maps/DewfordTown_Gym/scripts.pory"

# 495 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle: @ 81FCE08
# 496 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 497 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 498 "data/maps/DewfordTown_Gym/scripts.pory"

# 499 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro: @ 81FCE48
# 500 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 501 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 502 "data/maps/DewfordTown_Gym/scripts.pory"

# 503 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat: @ 81FCE75
# 504 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 505 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 506 "data/maps/DewfordTown_Gym/scripts.pory"

# 507 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle: @ 81FCEAB
# 508 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 509 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our Gym Leader.$"
# 510 "data/maps/DewfordTown_Gym/scripts.pory"

# 511 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro: @ 81FCEDC
# 512 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 513 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 514 "data/maps/DewfordTown_Gym/scripts.pory"

# 515 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat: @ 81FCF0A
# 516 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 517 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 518 "data/maps/DewfordTown_Gym/scripts.pory"

# 519 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle: @ 81FCF26
# 520 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 521 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that Badge!$"
# 522 "data/maps/DewfordTown_Gym/scripts.pory"

# 523 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro: @ 81FCF44
# 524 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm Brawly!\n"
# 525 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford's Gym Leader!\p"
# 526 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 527 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 528 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 529 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 530 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 531 "data/maps/DewfordTown_Gym/scripts.pory"

# 532 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat: @ 81FD008
# 533 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 534 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 535 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 536 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 537 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this Gym Badge!$"
# 538 "data/maps/DewfordTown_Gym/scripts.pory"

# 539 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge: @ 81FD07D
# 540 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the Knuckle Badge\n"
# 541 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from Brawly.$"
# 542 "data/maps/DewfordTown_Gym/scripts.pory"

# 543 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis: @ 81FD0A8
# 544 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this Technical\n"
# 545 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Machine, too.$"
# 546 "data/maps/DewfordTown_Gym/scripts.pory"

# 547 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp: @ 81FD181
# 548 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains Bulk Up.\p"
# 549 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both Attack\n"
# 550 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and Defense stats.\p"
# 551 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 552 "data/maps/DewfordTown_Gym/scripts.pory"

# 553 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly: @ 81FD1E0
# 554 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered Gym Leader Brawly\n"
# 555 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the Pokénav.$"
# 556 "data/maps/DewfordTown_Gym/scripts.pory"

# 557 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle: @ 81FD20D
# 558 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 559 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 560 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among Trainers one day!$"
# 561 "data/maps/DewfordTown_Gym/scripts.pory"

# 562 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue: @ 81FD272
# 563 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford Town Pokémon Gym$"
# 564 "data/maps/DewfordTown_Gym/scripts.pory"

# 565 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified: @ 81FD28B
# 566 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford Town Pokémon Gym\p"
# 567 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly'S Certified Trainers:\n"
# 568 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 569 "data/maps/DewfordTown_Gym/scripts.pory"

# 570 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch: @ 81FD2C4
# 571 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: A wave may draw back, but it\n"
# 572 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 573 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 574 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 575 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 576 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 577 "data/maps/DewfordTown_Gym/scripts.pory"

# 578 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat: @ 81FD367
# 579 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 580 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 581 "data/maps/DewfordTown_Gym/scripts.pory"

# 582 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch: @ 81FD37B
# 583 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: Battling is vast and it's deep.\n"
# 584 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 585 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of Hoenn!$"
# 586 "data/maps/DewfordTown_Gym/scripts.pory"

# 587 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons: @ 81FD3DE
# 588 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: A wave may draw back, but it\n"
# 589 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 590 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 591 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 592 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one Pokémon\n"
# 593 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 594 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 595 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two Pokémon.$"
# 596 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 597 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GetTM:
# 598 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: Please take this\n"
# 599 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Technical Machine.$"
# 600 "data/maps/DewfordTown_Gym/scripts.pory"

# 601 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GetMegaStone:
# 602 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: Please take this\n"
# 603 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Mega Stone, with you.\p"
# 604 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Make a Heracross hold it to\n"
# 605 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "unleash its Hidden Potential.$"
# 606 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 607 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GetReward:
# 608 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: Please take this\n"
# 609 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Item as a Reward.$"
