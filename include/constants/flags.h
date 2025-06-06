#ifndef GUARD_CONSTANTS_FLAGS_H
#define GUARD_CONSTANTS_FLAGS_H

#include "constants/opponents.h"

// Temporary Flags
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define FLAG_NONE 0
#define TEMP_FLAGS_START 0x0
#define FLAG_TEMP_1      (TEMP_FLAGS_START + 0x1)
#define FLAG_TEMP_2      (TEMP_FLAGS_START + 0x2)
#define FLAG_TEMP_3      (TEMP_FLAGS_START + 0x3)
#define FLAG_TEMP_4      (TEMP_FLAGS_START + 0x4)
#define FLAG_TEMP_5      (TEMP_FLAGS_START + 0x5)  // First Stages
#define FLAG_TEMP_6      (TEMP_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_TEMP_7      (TEMP_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_TEMP_8      (TEMP_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_TEMP_9      (TEMP_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_TEMP_A      (TEMP_FLAGS_START + 0xA)  // Unused Flag
#define FLAG_TEMP_B      (TEMP_FLAGS_START + 0xB)  // Unused Flag
#define FLAG_TEMP_C      (TEMP_FLAGS_START + 0xC)  // Unused Flag
#define FLAG_TEMP_D      (TEMP_FLAGS_START + 0xD)  // Unused Flag
#define FLAG_TEMP_E      (TEMP_FLAGS_START + 0xE)  // Unused Flag
#define FLAG_TEMP_F      (TEMP_FLAGS_START + 0xF)  // Unused Flag
#define FLAG_TEMP_10     (TEMP_FLAGS_START + 0x10) // Unused Flag
#define FLAG_TEMP_11     (TEMP_FLAGS_START + 0x11)
#define FLAG_TEMP_12     (TEMP_FLAGS_START + 0x12)
#define FLAG_TEMP_13     (TEMP_FLAGS_START + 0x13)
#define FLAG_TEMP_14     (TEMP_FLAGS_START + 0x14)
#define FLAG_TEMP_15     (TEMP_FLAGS_START + 0x15)
#define FLAG_TEMP_16     (TEMP_FLAGS_START + 0x16)
#define FLAG_TEMP_17     (TEMP_FLAGS_START + 0x17)
#define FLAG_TEMP_18     (TEMP_FLAGS_START + 0x18)
#define FLAG_TEMP_19     (TEMP_FLAGS_START + 0x19)
#define FLAG_TEMP_1A     (TEMP_FLAGS_START + 0x1A)
#define FLAG_TEMP_1B     (TEMP_FLAGS_START + 0x1B)
#define FLAG_TEMP_1C     (TEMP_FLAGS_START + 0x1C)
#define FLAG_TEMP_1D     (TEMP_FLAGS_START + 0x1D)
#define FLAG_TEMP_1E     (TEMP_FLAGS_START + 0x1E)
#define FLAG_TEMP_1F     (TEMP_FLAGS_START + 0x1F)
#define TEMP_FLAGS_END   FLAG_TEMP_1F

#define FLAG_DEBUG_MODE                  0x20 // DEBUG ENABLER
#define FLAG_SYS_NO_ENCOUNTER            0x21 // DEBUG
#define FLAG_SYS_NO_TRAINER_SEE          0x22 // DEBUG
#define FLAG_SYS_NO_BAG_USE              0x23 // DEBUG
#define FLAG_SYS_NO_CATCHING             0x24 // DEBUG
#define FLAG_DIFFICULTY_SET    			 0x25 // Difficulty Level
#define FLAG_UNUSED_0x26    		     0x26 // Difficulty Level
#define FLAG_UNUSED_0x27    			 0x27 // Difficulty Level
#define FLAG_RANDOMIZED_MODE    	     0x28 // Game Mode
#define FLAG_UPDATED_SAVE    	         0x29 // System Flag
#define FLAG_UPDATED_SAVE_2    		     0x2A // System Flag
#define FLAG_NO_EVOLUTION_MODE    	     0x2B // Game Mode
#define FLAG_UPDATED_SAVE_3    		     0x2C // System Flag
#define FLAG_GRINDLESS_MODE    	         0x2D // Game Mode
#define FLAG_NO_SPLIT_MODE    		     0x2E // Game Mode
#define FLAG_VANILLA_MODE    		     0x2F // Game Mode
#define FLAG_PARTY_RANDOMIZED_MODE       0x30 // Game Mode
#define FLAG_BUG_TESTER    			     0x31 // DEBUG
#define FLAG_ENABLE_EV_CHANGES           0x32 // DEBUG
#define FLAG_LEVEL_EVO_ONLY    		     0x33 // Unused Flag
#define FLAG_GYM_SHUFFLE_MODE            0x34 // Game Mode
#define FLAG_FULL_GYM_SHUFFLE_MODE       0x35 // Game Mode
#define FLAG_NO_MEGA_MODE                0x36 // Game Mode
#define FLAG_GYM_SHUFFLED    		     0x37 // Game Mode
#define FLAG_OLD_STAB_MODE               0x38 // Game Mode
#define FLAG_TYPE_RANDOMIZER_MODE        0x39 // Game Mode
#define FLAG_ABILITY_RANDOMIZER_MODE     0x3A // Game Mode
#define FLAG_THIRD_TYPE_MODE             0x3B // Game Mode
#define FLAG_TRUE_RANDOM_MODE            0x3C // Game Mode
#define FLAG_CHOSING_STARTER             0x3D // 
#define FLAG_ALPHA_CREATION              0x3E // 
#define FLAG_SCALEMON_MODE               0x3F // Game Mode
#define FLAG_NO_EVS_MODE                 0x40
#define FLAG_DEBUG_FOLLOWER_SHINY        0x41 // Debug
#define FLAG_IS_OUTBREAK_ENCOUNTER       0x42 // Outbreak
#define FLAG_MGBA_PRINT_ENABLED          0x43 // Debug
#define FLAG_SAILED_FROM_SLATEPORT       0x44 //
#define FLAG_DEBUG_FOLLOWER_ENABLED      0x45 // Debug
#define FLAG_OBTAINED_TM99               0x46 // Dazzling Gleam
#define FLAG_MEGA_EVOLVE_WILD_POKEMON    0x47 // For Rayquaza and Mewtwo
#define FLAG_SMART_AI                    0x48 // For Smart Pokemon
#define FLAG_TOTEM_BATTLE                0x49 // For Legendary Pokemon or other static Pokemon Battles
#define FLAG_MYSTERY_GIFT_2              0x4C // Spiky Eared Pichu
#define FLAG_MYSTERY_GIFT_1    	         0x4D // Greninja
#define FLAG_ENABLE_RED_FIGHT            0x4E // Red
#define FLAG_RECEIVED_EXIOLITE           0x4F // Exiolite

// Scripts
#define FLAG_HIDE_RAYQUAZA_SKY_TOWER_SUMMIT  0x50
#define FLAG_SET_WALL_CLOCK                  0x51
#define FLAG_RESCUED_BIRCH                   0x52
#define FLAG_LEGENDARIES_IN_SOOTOPOLIS       0x53

#define FLAG_DISABLE_PORTALS                 0x54  // Used for legendary Pokemon
#define FLAG_SYS_DISABLE_ENEMY_LEVELS        0x55  // Disables being able to see enemy Pokemon Levels

#define FLAG_HIDE_CONTEST_POKE_BALL          0x56  // Always set after new game, object it hides is added directly
#define FLAG_MET_RIVAL_MOM                   0x57
#define FLAG_BIRCH_AIDE_MET                  0x58
#define FLAG_DECLINED_BIKE                   0x59
#define FLAG_RECEIVED_BIKE                   0x5A
#define FLAG_WATTSON_REMATCH_AVAILABLE       0x5B
#define FLAG_COLLECTED_ALL_SILVER_SYMBOLS    0x5C
#define FLAG_GOOD_LUCK_SAFARI_ZONE           0x5D // Set after talking to NPC blocking Safari Zone entrance/exit once.
#define FLAG_RECEIVED_WAILMER_PAIL           0x5E
#define FLAG_RECEIVED_POKEBLOCK_CASE         0x5F
#define FLAG_RECEIVED_SECRET_POWER           0x60
#define FLAG_MET_TEAM_AQUA_HARBOR            0x61
#define FLAG_TV_EXPLAINED                    0x62
#define FLAG_MAUVILLE_GYM_BARRIERS_STATE     0x63
#define FLAG_MOSSDEEP_GYM_SWITCH_2           0x65
#define FLAG_MOSSDEEP_GYM_SWITCH_3           0x66
#define FLAG_MOSSDEEP_GYM_SWITCH_4           0x67
#define FLAG_SYS_AUTO_RUN    			     0x68
#define FLAG_OCEANIC_MUSEUM_MET_REPORTER     0x69
#define FLAG_RECEIVED_HM04                   0x6A
#define FLAG_RECEIVED_HM06                   0x6B
#define FLAG_WHITEOUT_TO_LAVARIDGE           0x6C // Set after defeating Flannery, so the player cant white out from poison before receiving Go Goggles
#define FLAG_RECEIVED_HM05                   0x6D
#define FLAG_RECEIVED_HM02                   0x6E
#define FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT  0x6F
#define FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE  0x70
#define FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE 0x71 // Unused Flag. Used in R/S to indicate whether player defeated or caught Groudon/Kyogre in Cave of Origin.
#define FLAG_SCOTT_CALL_BATTLE_FRONTIER      0x72 // Used in order to activate a phone call from Scott, inviting the player to the SS Tidal.
#define FLAG_RECEIVED_METEORITE              0x73
#define FLAG_ADVENTURE_STARTED               0x74 // RECEIVED Pokédex.
#define FLAG_DEFEATED_MAGMA_SPACE_CENTER     0x75 // Set when Team Magma is defeated at Mossdeep's Space Center.
#define FLAG_MET_HIDDEN_POWER_GIVER          0x76

#define FLAG_CANCEL_BATTLE_ROOM_CHALLENGE    0x77

#define FLAG_LANDMARK_MIRAGE_TOWER           0x78
#define FLAG_RECEIVED_TM31                   0x79
#define FLAG_RECEIVED_HM03                   0x7A
#define FLAG_RECEIVED_HM08                   0x7B
#define FLAG_REGISTER_RIVAL_POKENAV          0x7C
#define FLAG_DEFEATED_RIVAL_ROUTE_104        0x7D
#define FLAG_DEFEATED_WALLY_VICTORY_ROAD     0x7E
#define FLAG_MET_PRETTY_PETAL_SHOP_OWNER     0x7F
#define FLAG_ENABLE_ROXANNE_FIRST_CALL       0x80 // Set after defeating Brawly. This will activate a call with Roxanne in order to register her.
#define FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN  0x81
#define FLAG_DEFEATED_RIVAL_ROUTE103         0x82
#define FLAG_RECEIVED_DOLL_LANETTE           0x83
#define FLAG_RECEIVED_POTION_OLDALE          0x84
#define FLAG_RECEIVED_AMULET_COIN            0x85
#define FLAG_PENDING_DAYCARE_EGG             0x86
#define FLAG_THANKED_FOR_PLAYING_WITH_WALLY  0x87
#define FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL 0x88 // Set after defeating Wally outside Mauville Gym. Will activate a call later to register Wally.
#define FLAG_RECEIVED_HM01                   0x89
#define FLAG_GYM_ATTENDANT_CALL              0x8A // Used for a call that informs you what did you unlock after each badge
#define FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY   0x8B
#define FLAG_RECEIVED_6_SODA_POP             0x8C
#define FLAG_DEFEATED_SEASHORE_HOUSE         0x8D
#define FLAG_DEVON_GOODS_STOLEN              0x8E
#define FLAG_RECOVERED_DEVON_GOODS           0x8F
#define FLAG_RETURNED_DEVON_GOODS            0x90
#define FLAG_CAUGHT_LUGIA                    0x91
#define FLAG_CAUGHT_HO_OH                    0x92
#define FLAG_MR_BRINEY_SAILING_INTRO         0x93
#define FLAG_DOCK_REJECTED_DEVON_GOODS       0x94
#define FLAG_DELIVERED_DEVON_GOODS           0x95
#define FLAG_RECEIVED_SHELL_BELL           	 0x96
#define FLAG_RECEIVED_CASTFORM               0x97
#define FLAG_RECEIVED_SUPER_ROD              0x98
#define FLAG_RUSTBORO_NPC_TRADE_COMPLETED    0x99
#define FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED  0x9A
#define FLAG_FORTREE_NPC_TRADE_COMPLETED     0x9B
#define FLAG_BATTLE_FRONTIER_TRADE_DONE      0x9C
#define FLAG_FORCE_MIRAGE_TOWER_VISIBLE      0x9D
#define FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE   0x9E
#define FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN 0x9F
#define FLAG_COOL_PAINTING_MADE              0xA0
#define FLAG_BEAUTY_PAINTING_MADE            0xA1
#define FLAG_CUTE_PAINTING_MADE              0xA2
#define FLAG_SMART_PAINTING_MADE             0xA3
#define FLAG_TOUGH_PAINTING_MADE             0xA4
#define FLAG_RECEIVED_TM39                   0xA5
#define FLAG_RECEIVED_BADGE_01               0xA5
#define FLAG_RECEIVED_TM08                   0xA6
#define FLAG_RECEIVED_BADGE_02               0xA6
#define FLAG_RECEIVED_TM34                   0xA7
#define FLAG_RECEIVED_BADGE_03               0xA7
#define FLAG_RECEIVED_TM50                   0xA8
#define FLAG_RECEIVED_BADGE_04               0xA8
#define FLAG_RECEIVED_TM42                   0xA9
#define FLAG_RECEIVED_BADGE_05               0xA9
#define FLAG_RECEIVED_TM40                   0xAA
#define FLAG_RECEIVED_BADGE_06               0xAA
#define FLAG_RECEIVED_TM04                   0xAB
#define FLAG_RECEIVED_BADGE_07               0xAB
#define FLAG_RECEIVED_TM03                   0xAC
#define FLAG_RECEIVED_BADGE_08               0xAC
#define FLAG_DECORATION_0                    0xAD
#define FLAG_DECORATION_1                    0xAE
#define FLAG_DECORATION_2                    0xAF
#define FLAG_DECORATION_3                    0xB0
#define FLAG_DECORATION_4                    0xB1
#define FLAG_DECORATION_5                    0xB2
#define FLAG_DECORATION_6                    0xB3
#define FLAG_DECORATION_7                    0xB4
#define FLAG_DECORATION_8                    0xB5
#define FLAG_DECORATION_9                    0xB6
#define FLAG_DECORATION_10                   0xB7
#define FLAG_DECORATION_11                   0xB8
#define FLAG_DECORATION_12                   0xB9
#define FLAG_DECORATION_13                   0xBA
#define FLAG_DECORATION_14                   0xBB
#define FLAG_RECEIVED_POKENAV                0xBC
#define FLAG_DELIVERED_STEVEN_LETTER         0xBD
#define FLAG_DEFEATED_WALLY_MAUVILLE         0xBE
#define FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F  0xBF
#define FLAG_RECEIVED_SUN_STONE_MOSSDEEP     0xC0
#define FLAG_WALLY_SPEECH                    0xC1
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1   0xC2 // Leftover from the RS version of Puzzle Room 7, functionally unused
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2   0xC3 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3   0xC4 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4   0xC5 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5   0xC6 //
#define FLAG_RUSTURF_TUNNEL_OPENED           0xC7
#define FLAG_RECEIVED_RED_SCARF              0xC8
#define FLAG_RECEIVED_BLUE_SCARF             0xC9
#define FLAG_RECEIVED_PINK_SCARF             0xCA
#define FLAG_RECEIVED_GREEN_SCARF            0xCB
#define FLAG_RECEIVED_YELLOW_SCARF           0xCC
#define FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER    0xCD
#define FLAG_ENCOUNTERED_LATIAS_OR_LATIOS    0xCE
#define FLAG_MET_ARCHIE_METEOR_FALLS         0xCF
#define FLAG_GOT_BASEMENT_KEY_FROM_WATTSON   0xD0
#define FLAG_GOT_TM24_FROM_WATTSON           0xD1
#define FLAG_FAN_CLUB_STRENGTH_SHARED        0xD2 // Set when you rate the strength of another trainer in Lilycove's Trainer Fan Club.
#define FLAG_DEFEATED_RIVAL_RUSTBORO         0xD3
#define FLAG_RECEIVED_RED_OR_BLUE_ORB        0xD4
#define FLAG_RECEIVED_PREMIER_BALL_RUSTBORO  0xD5
#define FLAG_ENABLE_WALLY_MATCH_CALL         0xD6
#define FLAG_ENABLE_SCOTT_MATCH_CALL         0xD7
#define FLAG_ENABLE_MOM_MATCH_CALL           0xD8
#define FLAG_MET_DIVING_TREASURE_HUNTER      0xD9
#define FLAG_MET_WAILMER_TRAINER             0xDA
#define FLAG_EVIL_LEADER_PLEASE_STOP         0xDB

#define FLAG_NEVER_SET_0x0DC                 0xDC // This flag is read, but never written to

#define FLAG_RECEIVED_GO_GOGGLES             0xDD
#define FLAG_WINGULL_SENT_ON_ERRAND          0xDE
#define FLAG_RECEIVED_MENTAL_HERB            0xDF
#define FLAG_WINGULL_DELIVERED_MAIL          0xE0
#define FLAG_RECEIVED_20_COINS               0xE1
#define FLAG_RECEIVED_STARTER_DOLL           0xE2
#define FLAG_RECEIVED_GOOD_ROD               0xE3
#define FLAG_REGI_DOORS_OPENED               0xE4
#define FLAG_RECEIVED_TM27                   0xE5
#define FLAG_RECEIVED_TM36                   0xE6
#define FLAG_RECEIVED_TM05                   0xE7
#define FLAG_RECEIVED_TM19                   0xE8

#define FLAG_RECEIVED_FANCLUB_TM_FRUSTRATION 0xE9

#define FLAG_RECEIVED_TM44                   0xEA
#define FLAG_RECEIVED_TM45                   0xEB
#define FLAG_RECEIVED_GLASS_ORNAMENT         0xEC
#define FLAG_RECEIVED_SILVER_SHIELD          0xED
#define FLAG_RECEIVED_GOLD_SHIELD            0xEE
#define FLAG_USED_STORAGE_KEY                0xEF
#define FLAG_USED_ROOM_1_KEY                 0xF0
#define FLAG_USED_ROOM_2_KEY                 0xF1
#define FLAG_USED_ROOM_4_KEY                 0xF2
#define FLAG_USED_ROOM_6_KEY                 0xF3
#define FLAG_MET_PROF_COZMO                  0xF4
#define FLAG_RECEIVED_WAILMER_DOLL           0xF5
#define FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104 0xF6
#define FLAG_DEFEATED_SS_TIDAL_TRAINERS      0xF7
#define FLAG_RECEIVED_SPELON_BERRY           0xF8
#define FLAG_RECEIVED_PAMTRE_BERRY           0xF9
#define FLAG_RECEIVED_WATMEL_BERRY           0xFA
#define FLAG_RECEIVED_DURIN_BERRY            0xFB
#define FLAG_RECEIVED_BELUE_BERRY            0xFC
#define FLAG_ENABLE_RIVAL_MATCH_CALL         0xFD
#define FLAG_RECEIVED_CHARCOAL               0xFE
#define FLAG_LATIOS_OR_LATIAS_ROAMING        0xFF
#define FLAG_RECEIVED_REPEAT_BALL            0x100
#define FLAG_RECEIVED_OLD_ROD                0x101
#define FLAG_RECEIVED_COIN_CASE              0x102
#define FLAG_RETURNED_RED_OR_BLUE_ORB        0x103
#define FLAG_RECEIVED_TM49                   0x104
#define FLAG_RECEIVED_TM28                   0x105
#define FLAG_RECEIVED_TM09                   0x106
#define FLAG_ENTERED_ELITE_FOUR              0x107
#define FLAG_RECEIVED_TM10                   0x108
#define FLAG_RECEIVED_TM41                   0x109
#define FLAG_RECEIVED_LAVARIDGE_EGG          0x10A
#define FLAG_RECEIVED_REVIVED_FOSSIL_MON     0x10B
#define FLAG_SECRET_BASE_REGISTRY_ENABLED    0x10C
#define FLAG_RECEIVED_TM46                   0x10D
#define FLAG_CONTEST_SKETCH_CREATED          0x10E  // Set but never read
#define FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE   0x10F
#define FLAG_RECEIVED_PIDGEOTITE             0x110
#define FLAG_POKERUS_EXPLAINED               0x111
#define FLAG_RECEIVED_RUNNING_SHOES          0x112
#define FLAG_RECEIVED_QUICK_CLAW             0x113
#define FLAG_RECEIVED_KINGS_ROCK             0x114
#define FLAG_RECEIVED_MACHO_BRACE            0x115
#define FLAG_RECEIVED_SOOTHE_BELL            0x116
#define FLAG_RECEIVED_WHITE_HERB             0x117
#define FLAG_RECEIVED_SOFT_SAND              0x118
#define FLAG_ENABLE_PROF_BIRCH_MATCH_CALL    0x119
#define FLAG_RECEIVED_CLEANSE_TAG            0x11A
#define FLAG_RECEIVED_FOCUS_BAND             0x11B
#define FLAG_DECLINED_WALLY_BATTLE_MAUVILLE  0x11C
#define FLAG_RECEIVED_DEVON_SCOPE            0x11D
#define FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE  0x11E
#define FLAG_MET_DEVON_EMPLOYEE              0x11F
#define FLAG_MET_RIVAL_RUSTBORO              0x120
#define FLAG_RECEIVED_SILK_SCARF             0x121
#define FLAG_NOT_READY_FOR_BATTLE_ROUTE_120  0x122
#define FLAG_RECEIVED_SS_TICKET              0x123
#define FLAG_MET_RIVAL_LILYCOVE              0x124
#define FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE 0x125
#define FLAG_EXCHANGED_SCANNER               0x126
#define FLAG_KECLEON_FLED_FORTREE            0x127
#define FLAG_PETALBURG_MART_EXPANDED_ITEMS   0x128
#define FLAG_RECEIVED_MIRACLE_SEED           0x129
#define FLAG_RECEIVED_BELDUM                 0x12A
#define FLAG_RECEIVED_FANCLUB_TM_RETURN      0x12B
#define FLAG_MET_FANCLUB_YOUNGER_BROTHER     0x12C
#define FLAG_RIVAL_LEFT_FOR_ROUTE103         0x12D
#define FLAG_OMIT_DIVE_FROM_STEVEN_LETTER    0x12E
#define FLAG_HAS_MATCH_CALL                  0x12F
#define FLAG_ADDED_MATCH_CALL_TO_POKENAV     0x130
#define FLAG_REGISTERED_STEVEN_POKENAV       0x131
#define FLAG_ENABLE_NORMAN_MATCH_CALL        0x132
#define FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN 0x133 // Set after you follow Steven to the entrance of the Cave of Origin.
#define FLAG_MET_ARCHIE_SOOTOPOLIS           0x134
#define FLAG_MET_MAXIE_SOOTOPOLIS            0x135
#define FLAG_MET_SCOTT_RUSTBORO              0x136
#define FLAG_WALLACE_GOES_TO_SKY_PILLAR      0x137 // Set after speaking to Wallace within the Cave of Origin.
#define FLAG_RECEIVED_HM07                   0x138
#define FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS    0x139
#define FLAG_RECEIVED_AURORA_TICKET          0x13A
#define FLAG_RECEIVED_MYSTIC_TICKET          0x13B
#define FLAG_RECEIVED_OLD_SEA_MAP            0x13C 

#define FLAG_MYSTERY_GIFT_VIVILLON_POKEBALL     0x13D
#define FLAG_MYSTERY_GIFT_GRENINJA       	    0x13E
#define FLAG_MYSTERY_GIFT_SPIKY_EARED_PICHU     0x13F
#define FLAG_MYSTERY_GIFT_VIVILLON_FANCY        0x140
#define FLAG_MYSTERY_GIFT_COSPLAY_PIKACHU       0x141
#define FLAG_MYSTERY_GIFT_PIKACHU_POP_STAR      0x142
#define FLAG_MYSTERY_GIFT_ETERNAL_FLOETTE       0x143
#define FLAG_MYSTERY_GIFT_SHINY_BELDUM          0x144
#define FLAG_MYSTERY_GIFT_DIANCIE       	    0x145
#define FLAG_MYSTERY_GIFT_SHINY_EEVEE           0x146
#define FLAG_MYSTERY_GIFT_BEES_ALTARIA          0x147
#define FLAG_MYSTERY_GIFT_CHRISTMAS_DELIBIRD    0x148
#define FLAG_MYSTERY_GIFT_COSPLAY_PIKACHU_LIBRE 0x149
#define FLAG_MYSTERY_GIFT_SHINY_AXEW            0x14A
#define FLAG_MYSTERY_GIFT_MANAPHY               0x14B
#define FLAG_MYSTERY_GIFT_HALLOWEEN_GOURGEIST   0x14C
#define FLAG_MYSTERY_GIFT_SHINY_CHACADET        0x14D

#define FLAG_MIRAGE_TOWER_VISIBLE            0x14E
#define FLAG_CHOSE_ROOT_FOSSIL               0x14F
#define FLAG_CHOSE_CLAW_FOSSIL               0x150
#define FLAG_RECEIVED_POWDER_JAR             0x151

#define FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER 0x152

#define FLAG_MET_BATTLE_FRONTIER_BREEDER     0x153
#define FLAG_MET_BATTLE_FRONTIER_MANIAC      0x154
#define FLAG_ENTERED_CONTEST                 0x155
#define FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN  0x156
#define FLAG_MET_BATTLE_FRONTIER_GAMBLER     0x157
#define FLAG_ENABLE_MR_STONE_POKENAV         0x158
#define FLAG_NURSE_MENTIONS_GOLD_CARD        0x159
#define FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR  0x15A
#define FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR 0x15B

// Trainer Rematch Flags
#define FLAG_MATCH_CALL_REGISTERED           0x15C
#define FLAG_REMATCH_ROSE                    0x15D
#define FLAG_REMATCH_ANDRES                  0x15E
#define FLAG_REMATCH_DUSTY                   0x15F
#define FLAG_REMATCH_LOLA                    0x160
#define FLAG_REMATCH_RICKY                   0x161
#define FLAG_REMATCH_LILA_AND_ROY            0x162
#define FLAG_REMATCH_CRISTIN                 0x163
#define FLAG_REMATCH_BROOKE                  0x164
#define FLAG_REMATCH_WILTON                  0x165
#define FLAG_REMATCH_VALERIE                 0x166
#define FLAG_REMATCH_CINDY                   0x167
#define FLAG_REMATCH_THALIA                  0x168
#define FLAG_REMATCH_JESSICA                 0x169
#define FLAG_REMATCH_WINSTON                 0x16A
#define FLAG_REMATCH_STEVE                   0x16B
#define FLAG_REMATCH_TONY                    0x16C
#define FLAG_REMATCH_NOB                     0x16D
#define FLAG_REMATCH_KOJI                    0x16E
#define FLAG_REMATCH_FERNANDO                0x16F
#define FLAG_REMATCH_DALTON                  0x170
#define FLAG_REMATCH_BERNIE                  0x171
#define FLAG_REMATCH_ETHAN                   0x172
#define FLAG_REMATCH_JOHN_AND_JAY            0x173
#define FLAG_REMATCH_JEFFREY                 0x174
#define FLAG_REMATCH_CAMERON                 0x175
#define FLAG_REMATCH_JACKI                   0x176
#define FLAG_REMATCH_WALTER                  0x177
#define FLAG_REMATCH_KAREN                   0x178
#define FLAG_REMATCH_JERRY                   0x179
#define FLAG_REMATCH_ANNA_AND_MEG            0x17A
#define FLAG_REMATCH_ISABEL                  0x17B
#define FLAG_REMATCH_MIGUEL                  0x17C
#define FLAG_REMATCH_TIMOTHY                 0x17D
#define FLAG_REMATCH_SHELBY                  0x17E
#define FLAG_REMATCH_CALVIN                  0x17F
#define FLAG_REMATCH_ELLIOT                  0x180
#define FLAG_REMATCH_ISAIAH                  0x181
#define FLAG_REMATCH_MARIA                   0x182
#define FLAG_REMATCH_ABIGAIL                 0x183
#define FLAG_REMATCH_DYLAN                   0x184
#define FLAG_REMATCH_KATELYN                 0x185
#define FLAG_REMATCH_BENJAMIN                0x186
#define FLAG_REMATCH_PABLO                   0x187
#define FLAG_REMATCH_NICOLAS                 0x188
#define FLAG_REMATCH_ROBERT                  0x189
#define FLAG_REMATCH_LAO                     0x18A
#define FLAG_REMATCH_CYNDY                   0x18B
#define FLAG_REMATCH_MADELINE                0x18C
#define FLAG_REMATCH_JENNY                   0x18D
#define FLAG_REMATCH_DIANA                   0x18E
#define FLAG_REMATCH_AMY_AND_LIV             0x18F
#define FLAG_REMATCH_ERNEST                  0x190
#define FLAG_REMATCH_CORY                    0x191
#define FLAG_REMATCH_EDWIN                   0x192
#define FLAG_REMATCH_LYDIA                   0x193
#define FLAG_REMATCH_ISAAC                   0x194
#define FLAG_REMATCH_GABRIELLE               0x195
#define FLAG_REMATCH_CATHERINE               0x196
#define FLAG_REMATCH_JACKSON                 0x197
#define FLAG_REMATCH_HALEY                   0x198
#define FLAG_REMATCH_JAMES                   0x199
#define FLAG_REMATCH_TRENT                   0x19A
#define FLAG_REMATCH_SAWYER                  0x19B
#define FLAG_REMATCH_KIRA_AND_DAN            0x19C
#define FLAG_REMATCH_WALLY                   0x19D
#define FLAG_REMATCH_ROXANNE                 0x19E
#define FLAG_REMATCH_BRAWLY                  0x19F
#define FLAG_REMATCH_WATTSON                 0x1A0
#define FLAG_REMATCH_FLANNERY                0x1A1
#define FLAG_REMATCH_NORMAN                  0x1A2
#define FLAG_REMATCH_WINONA                  0x1A3
#define FLAG_REMATCH_TATE_AND_LIZA           0x1A4
// Note: FLAG_REMATCH_JUAN is handled by FLAG_ENABLE_JUAN_MATCH_CALL instead.
#define FLAG_REMATCH_SIDNEY                  0x1A5
#define FLAG_REMATCH_PHOEBE                  0x1A6
#define FLAG_REMATCH_GLACIA                  0x1A7
#define FLAG_REMATCH_DRAKE                   0x1A8
#define FLAG_REMATCH_WALLACE                 0x1A9

#define FLAG_MOVE_RELEARN_FROM_PARTY_SCREEN  0x1AA
#define FLAG_SYS_GOD_MODE    				 0x1AB
#define FLAG_DEFEATED_DEOXYS                 0x1AC
#define FLAG_BATTLED_DEOXYS                  0x1AD
#define FLAG_SHOWN_EON_TICKET                0x1AE
#define FLAG_SHOWN_AURORA_TICKET             0x1AF
#define FLAG_SHOWN_OLD_SEA_MAP               0x1B0
#define FLAG_MOVE_TUTOR_TAUGHT_SWAGGER       0x1B1
#define FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT       0x1B2
#define FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER   0x1B3
#define FLAG_MOVE_TUTOR_TAUGHT_MIMIC         0x1B4
#define FLAG_MOVE_TUTOR_TAUGHT_METRONOME     0x1B5
#define FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK    0x1B6
#define FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE    0x1B7
#define FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH  0x1B8
#define FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE   0x1B9
#define FLAG_RECEIVED_PACIFIDLOG_TM_EXPLOSION 0x1BA
#define FLAG_DEFEATED_REGIROCK               0x1BB
#define FLAG_DEFEATED_REGICE                 0x1BC
#define FLAG_DEFEATED_REGISTEEL              0x1BD
#define FLAG_DEFEATED_KYOGRE                 0x1BE
#define FLAG_DEFEATED_GROUDON                0x1BF
#define FLAG_DEFEATED_RAYQUAZA               0x1C0
#define FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE 0x1C1
#define FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE 0x1C2
#define FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE 0x1C3
#define FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT 0x1C4
#define FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT 0x1C5
#define FLAG_DEFEATED_SUDOWOODO              0x1C6
#define FLAG_DEFEATED_MEW                    0x1C7
#define FLAG_DEFEATED_LATIAS_OR_LATIOS       0x1C8
#define FLAG_CAUGHT_LATIAS_OR_LATIOS         0x1C9
#define FLAG_CAUGHT_MEW                      0x1CA
#define FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE 0x1CB
#define FLAG_MET_SCOTT_IN_VERDANTURF         0x1CC
#define FLAG_MET_SCOTT_IN_FALLARBOR          0x1CD
#define FLAG_MET_SCOTT_IN_LILYCOVE           0x1CE
#define FLAG_MET_SCOTT_IN_EVERGRANDE         0x1CF
#define FLAG_MET_SCOTT_ON_SS_TIDAL           0x1D0
#define FLAG_SCOTT_GIVES_BATTLE_POINTS       0x1D1
#define FLAG_COLLECTED_ALL_GOLD_SYMBOLS      0x1D2
#define FLAG_ENABLE_ROXANNE_MATCH_CALL       0x1D3
#define FLAG_ENABLE_BRAWLY_MATCH_CALL        0x1D4
#define FLAG_ENABLE_WATTSON_MATCH_CALL       0x1D5
#define FLAG_ENABLE_FLANNERY_MATCH_CALL      0x1D6
#define FLAG_ENABLE_WINONA_MATCH_CALL        0x1D7
#define FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL 0x1D8
#define FLAG_ENABLE_JUAN_MATCH_CALL          0x1D9

#define FLAG_INVERSE_MODE                    0x1DA    		

#define FLAG_SHOWN_MYSTIC_TICKET             0x1DB
#define FLAG_DEFEATED_HO_OH                  0x1DC
#define FLAG_DEFEATED_LUGIA                  0x1DD

#define FLAG_FORCED_DOUBLE_WILD_BATTLE       0x1DE // Forced Double Wild Battles
#define FLAG_GOT_POTION_ON_ROUTE_1           0x1DF // KantoFlag
#define FLAG_SYS_ENABLE_DIAGONAL_MOVEMENT    0x1E0
#define FLAG_SCORCHED_SLAB_TYRANITARITE      0x1E1
#define FLAG_QUEST_MENU_ACTIVE               0x1E2
#define FLAG_SYS_QUEST_MENU_GET              0x1E3 // add QUESTS to start menu

// Mystery Gift Flags (Unknown)
#define FLAG_MYSTERY_EVENT_DONE              0x1E4
#define FLAG_MYSTERY_EVENT_1                 0x1E5
#define FLAG_MYSTERY_EVENT_2                 0x1E6
#define FLAG_MYSTERY_EVENT_3                 0x1E7
#define FLAG_MYSTERY_EVENT_4                 0x1E8
#define FLAG_MYSTERY_EVENT_5                 0x1E9
#define FLAG_MYSTERY_EVENT_6                 0x1EA
#define FLAG_MYSTERY_EVENT_7                 0x1EB
#define FLAG_MYSTERY_EVENT_8                 0x1EC
#define FLAG_MYSTERY_EVENT_9                 0x1ED
#define FLAG_MYSTERY_EVENT_10                0x1EE
#define FLAG_MYSTERY_EVENT_11                0x1EF
#define FLAG_MYSTERY_EVENT_12                0x1F0
#define FLAG_MYSTERY_EVENT_13                0x1F1
#define FLAG_MYSTERY_EVENT_14                0x1F2
#define FLAG_MYSTERY_EVENT_15                0x1F3

// Hidden Items -- sorted by location
#define FLAG_HIDDEN_ITEMS_START                                                         0x1F4
#define FLAG_HIDDEN_ITEM_TRICK_HOUSE_NUGGET                  (FLAG_HIDDEN_ITEMS_START + 0x01)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_CARBOS               (FLAG_HIDDEN_ITEMS_START + 0x08)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_GREEN_SHARD          (FLAG_HIDDEN_ITEMS_START + 0x09)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_PEARL                (FLAG_HIDDEN_ITEMS_START + 0x0A)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_BIG_PEARL            (FLAG_HIDDEN_ITEMS_START + 0x0B)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_1        (FLAG_HIDDEN_ITEMS_START + 0x0D)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_CALCIUM              (FLAG_HIDDEN_ITEMS_START + 0x24)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_2        (FLAG_HIDDEN_ITEMS_START + 0x26)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_HEART_SCALE          (FLAG_HIDDEN_ITEMS_START + 0x0E)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_ULTRA_BALL           (FLAG_HIDDEN_ITEMS_START + 0x0F)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_STARDUST             (FLAG_HIDDEN_ITEMS_START + 0x10)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_PEARL                (FLAG_HIDDEN_ITEMS_START + 0x11)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_IRON                 (FLAG_HIDDEN_ITEMS_START + 0x13)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_YELLOW_SHARD         (FLAG_HIDDEN_ITEMS_START + 0x12)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BIG_PEARL            (FLAG_HIDDEN_ITEMS_START + 0x14)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BLUE_SHARD           (FLAG_HIDDEN_ITEMS_START + 0x0C)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_STAR_PIECE           (FLAG_HIDDEN_ITEMS_START + 0x15)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_HP_UP                (FLAG_HIDDEN_ITEMS_START + 0x16)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_HEART_SCALE          (FLAG_HIDDEN_ITEMS_START + 0x17)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_RED_SHARD            (FLAG_HIDDEN_ITEMS_START + 0x18)
#define FLAG_HIDDEN_ITEM_UNDERWATER_128_PROTEIN              (FLAG_HIDDEN_ITEMS_START + 0x19)
#define FLAG_HIDDEN_ITEM_UNDERWATER_128_PEARL                (FLAG_HIDDEN_ITEMS_START + 0x1A)
#define FLAG_HIDDEN_ITEM_FALLARBOR_TOWN_NUGGET               (FLAG_HIDDEN_ITEMS_START + 0x1C)
#define FLAG_HIDDEN_ITEM_LAVARIDGE_TOWN_ICE_HEAL             (FLAG_HIDDEN_ITEMS_START + 0x00)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_1_KEY             (FLAG_HIDDEN_ITEMS_START + 0x1F)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_2_KEY             (FLAG_HIDDEN_ITEMS_START + 0x20)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_4_KEY             (FLAG_HIDDEN_ITEMS_START + 0x21)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_6_KEY             (FLAG_HIDDEN_ITEMS_START + 0x22)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_CALCIUM            (FLAG_HIDDEN_ITEMS_START + 0x65)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_ZINC               (FLAG_HIDDEN_ITEMS_START + 0x66)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_PROTEIN            (FLAG_HIDDEN_ITEMS_START + 0x67)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_IRON               (FLAG_HIDDEN_ITEMS_START + 0x68)
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_1        (FLAG_HIDDEN_ITEMS_START + 0x30)
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_2        (FLAG_HIDDEN_ITEMS_START + 0x31)
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_GREAT_BALL              (FLAG_HIDDEN_ITEMS_START + 0x4C)
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_FULL_HEAL               (FLAG_HIDDEN_ITEMS_START + 0x4D)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_HEART_SCALE           (FLAG_HIDDEN_ITEMS_START + 0x1B)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_PP_UP                 (FLAG_HIDDEN_ITEMS_START + 0x2B)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_POKE_BALL             (FLAG_HIDDEN_ITEMS_START + 0x4B)
#define FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_ULTRA_BALL         (FLAG_HIDDEN_ITEMS_START + 0x1D)
#define FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_MAX_ETHER          (FLAG_HIDDEN_ITEMS_START + 0x4E)
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_ZINC                 (FLAG_HIDDEN_ITEMS_START + 0x4F)
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x50)
#define FLAG_HIDDEN_ITEM_NAVEL_ROCK_TOP_SACRED_ASH           (FLAG_HIDDEN_ITEMS_START + 0x6D)
#define FLAG_HIDDEN_ITEM_PETALBURG_CITY_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x5F)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POTION              (FLAG_HIDDEN_ITEMS_START + 0x3A)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_1     (FLAG_HIDDEN_ITEMS_START + 0x3B)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_2     (FLAG_HIDDEN_ITEMS_START + 0x3C)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POKE_BALL           (FLAG_HIDDEN_ITEMS_START + 0x3D)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_ELIXIR             (FLAG_HIDDEN_ITEMS_START + 0x52)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_MAX_REPEL          (FLAG_HIDDEN_ITEMS_START + 0x53)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_RARE_CANDY   (FLAG_HIDDEN_ITEMS_START + 0x6A)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC         (FLAG_HIDDEN_ITEMS_START + 0x6B)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_PP_UP        (FLAG_HIDDEN_ITEMS_START + 0x6C)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE (FLAG_HIDDEN_ITEMS_START + 0x69)
#define FLAG_HIDDEN_ITEM_SS_TIDAL_LOWER_DECK_LEFTOVERS       (FLAG_HIDDEN_ITEMS_START + 0x23)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_1F_ULTRA_BALL          (FLAG_HIDDEN_ITEMS_START + 0x51)
#define FLAG_HIDDEN_ITEM_ROUTE_104_SUPER_POTION              (FLAG_HIDDEN_ITEMS_START + 0x2C)
#define FLAG_HIDDEN_ITEM_ROUTE_104_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x3E)
#define FLAG_HIDDEN_ITEM_ROUTE_104_POTION                    (FLAG_HIDDEN_ITEMS_START + 0x25)
#define FLAG_HIDDEN_ITEM_ROUTE_104_ANTIDOTE                  (FLAG_HIDDEN_ITEMS_START + 0x55)
#define FLAG_HIDDEN_ITEM_ROUTE_104_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x58)
#define FLAG_HIDDEN_ITEM_ROUTE_105_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x59)
#define FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL                 (FLAG_HIDDEN_ITEMS_START + 0x6F)
#define FLAG_HIDDEN_ITEM_ROUTE_106_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x3F)
#define FLAG_HIDDEN_ITEM_ROUTE_106_STARDUST                  (FLAG_HIDDEN_ITEMS_START + 0x2E)
#define FLAG_HIDDEN_ITEM_ROUTE_106_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x2F)
#define FLAG_HIDDEN_ITEM_ROUTE_108_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x56)
#define FLAG_HIDDEN_ITEM_ROUTE_109_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x32)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x34)
#define FLAG_HIDDEN_ITEM_ROUTE_109_GREAT_BALL                (FLAG_HIDDEN_ITEMS_START + 0x33)
#define FLAG_HIDDEN_ITEM_ROUTE_109_ETHER                     (FLAG_HIDDEN_ITEMS_START + 0x40)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x5A)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_3             (FLAG_HIDDEN_ITEMS_START + 0x5B)
#define FLAG_HIDDEN_ITEM_ROUTE_110_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x36)
#define FLAG_HIDDEN_ITEM_ROUTE_110_GREAT_BALL                (FLAG_HIDDEN_ITEMS_START + 0x35)
#define FLAG_HIDDEN_ITEM_ROUTE_110_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x41)
#define FLAG_HIDDEN_ITEM_ROUTE_110_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x37)
#define FLAG_HIDDEN_ITEM_ROUTE_111_STARDUST                  (FLAG_HIDDEN_ITEMS_START + 0x02)
#define FLAG_HIDDEN_ITEM_ROUTE_111_PROTEIN                   (FLAG_HIDDEN_ITEMS_START + 0x38)
#define FLAG_HIDDEN_ITEM_ROUTE_111_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x39)
#define FLAG_HIDDEN_ITEM_ROUTE_113_ETHER                     (FLAG_HIDDEN_ITEMS_START + 0x03)
#define FLAG_HIDDEN_ITEM_ROUTE_113_TM_32                     (FLAG_HIDDEN_ITEMS_START + 0x1E)
#define FLAG_HIDDEN_ITEM_ROUTE_113_NUGGET                    (FLAG_HIDDEN_ITEMS_START + 0x62)
#define FLAG_HIDDEN_ITEM_ROUTE_114_CARBOS                    (FLAG_HIDDEN_ITEMS_START + 0x04)
#define FLAG_HIDDEN_ITEM_ROUTE_113_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x2A)
#define FLAG_HIDDEN_ITEM_ROUTE_115_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x61)
#define FLAG_HIDDEN_ITEM_ROUTE_116_SUPER_POTION              (FLAG_HIDDEN_ITEMS_START + 0x2D)
#define FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES             (FLAG_HIDDEN_ITEMS_START + 0x60)
#define FLAG_HIDDEN_ITEM_ROUTE_117_REPEL                     (FLAG_HIDDEN_ITEMS_START + 0x48)
#define FLAG_HIDDEN_ITEM_ROUTE_118_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x42)
#define FLAG_HIDDEN_ITEM_ROUTE_118_IRON                      (FLAG_HIDDEN_ITEMS_START + 0x43)
#define FLAG_HIDDEN_ITEM_ROUTE_119_CALCIUM                   (FLAG_HIDDEN_ITEMS_START + 0x05)
#define FLAG_HIDDEN_ITEM_ROUTE_119_ULTRA_BALL                (FLAG_HIDDEN_ITEMS_START + 0x06)
#define FLAG_HIDDEN_ITEM_ROUTE_119_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x44)
#define FLAG_HIDDEN_ITEM_ROUTE_119_MAX_ETHER                 (FLAG_HIDDEN_ITEMS_START + 0x57)
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1              (FLAG_HIDDEN_ITEMS_START + 0x47)
#define FLAG_HIDDEN_ITEM_ROUTE_120_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x54)
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_2              (FLAG_HIDDEN_ITEMS_START + 0x45)
#define FLAG_HIDDEN_ITEM_ROUTE_120_ZINC                      (FLAG_HIDDEN_ITEMS_START + 0x46)
#define FLAG_HIDDEN_ITEM_ROUTE_121_HP_UP                     (FLAG_HIDDEN_ITEMS_START + 0x27)
#define FLAG_HIDDEN_ITEM_ROUTE_121_NUGGET                    (FLAG_HIDDEN_ITEMS_START + 0x28)
#define FLAG_HIDDEN_ITEM_ROUTE_121_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x49)
#define FLAG_HIDDEN_ITEM_ROUTE_121_MAX_REVIVE                (FLAG_HIDDEN_ITEMS_START + 0x64)
#define FLAG_HIDDEN_ITEM_ROUTE_123_SUPER_REPEL               (FLAG_HIDDEN_ITEMS_START + 0x07)
#define FLAG_HIDDEN_ITEM_ROUTE_123_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x29)
#define FLAG_HIDDEN_ITEM_ROUTE_123_HYPER_POTION              (FLAG_HIDDEN_ITEMS_START + 0x4A)
#define FLAG_HIDDEN_ITEM_ROUTE_123_PP_UP                     (FLAG_HIDDEN_ITEMS_START + 0x63)
#define FLAG_HIDDEN_ITEM_ROUTE_123_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x6E)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x5C)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x5D)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_3             (FLAG_HIDDEN_ITEMS_START + 0x5E)
#define FLAG_HIDDEN_ITEM_SCORCHED_SLAB_STONE_PLATE           (FLAG_HIDDEN_ITEMS_START + 0x5F)

//Mega Stones
#define FLAG_GOT_BEEDRILL_MEGA_STONE    0x265
#define FLAG_GOT_KYOGRE_MEGA_STONE      0x266 // Unused Flag
#define FLAG_GOT_GROUDON_MEGA_STONE     0x267 // Unused Flag
#define FLAG_GOT_STEELIX_MEGA_STONE     0x268
#define FLAG_GOT_SCEPTILE_MEGA_STONE    0x269 
#define FLAG_GOT_SWAMPERT_MEGA_STONE    0x26A
#define FLAG_GOT_BLAZIKEN_MEGA_STONE    0x26B
#define FLAG_GOT_SABLEYE_MEGA_STONE     0x26C
#define FLAG_GOT_SHARPEDO_MEGA_STONE    0x26D
#define FLAG_GOT_CAMERUPT_MEGA_STONE    0x26E
#define FLAG_GOT_ALTARIA_MEGA_STONE     0x26F
#define FLAG_GOT_GLALIE_MEGA_STONE      0x270
#define FLAG_GOT_SALAMENCE_MEGA_STONE   0x271
#define FLAG_GOT_METAGROSS_MEGA_STONE   0x272
#define FLAG_GOT_LOPUNNY_MEGA_STONE     0x275
#define FLAG_GOT_GALLADE_MEGA_STONE     0x276
#define FLAG_GOT_AUDINO_MEGA_STONE      0x277
#define FLAG_GOT_DIANCIE_MEGA_STONE     0x278 // Unused Flag
#define FLAG_GOT_VENUSAUR_MEGA_STONE    0x279
#define FLAG_GOT_CHARIZARD_Y_MEGA_STONE 0x27A
#define FLAG_GOT_CHARIZARD_X_MEGA_STONE 0x27B
#define FLAG_GOT_BLASTOISE_MEGA_STONE   0x27C
#define FLAG_GOT_ALAKAZAM_MEGA_STONE    0x27D
#define FLAG_GOT_GENGAR_MEGA_STONE      0x27E
#define FLAG_GOT_KANGASKHAN_MEGA_STONE  0x27F
#define FLAG_GOT_PINSIR_MEGA_STONE      0x280
#define FLAG_GOT_AERODACTYL_MEGA_STONE  0x281
#define FLAG_GOT_MEWTWO_X_MEGA_STONE    0x282 // Unused Flag
#define FLAG_GOT_MEWTWO_Y_MEGA_STONE    0x283 // Unused Flag
#define FLAG_GOT_AMPHAROS_MEGA_STONE    0x284
#define FLAG_GOT_SCIZOR_MEGA_STONE      0x285
#define FLAG_GOT_HOUNDOOM_MEGA_STONE    0x286
#define FLAG_GOT_TYRANITAR_MEGA_STONE   0x287
#define FLAG_GOT_GARDEVOIR_MEGA_STONE   0x288
#define FLAG_GOT_MAWILE_MEGA_STONE      0x289
#define FLAG_GOT_AGGRON_MEGA_STONE      0x28A
#define FLAG_GOT_MEDICHAM_MEGA_STONE    0x28B
#define FLAG_GOT_MANECTRIC_MEGA_STONE   0x28C
#define FLAG_GOT_BANETTE_MEGA_STONE     0x28D
#define FLAG_GOT_ABSOL_MEGA_STONE       0x28E
#define FLAG_GOT_GARCHOMP_MEGA_STONE    0x28F
#define FLAG_GOT_LUCARIO_MEGA_STONE     0x290
#define FLAG_GOT_ABOMASNOW_MEGA_STONE   0x291
#define FLAG_GOT_HERACROSS_MEGA_STONE   0x292
#define FLAG_GOT_GYARADOS_MEGA_STONE    0x293
#define FLAG_GOT_SLOWBRO_MEGA_STONE     0x294
#define FLAG_GOT_BOOSTER_STONE          0x295 // Unused Flag

#define FLAG_UNUSED_0x296  0x296 // Unused Flag
#define FLAG_UNUSED_0x297  0x297 // Unused Flag
#define FLAG_UNUSED_0x298  0x298 // Unused Flag
#define FLAG_UNUSED_0x299  0x299 // Unused Flag
#define FLAG_UNUSED_0x29A  0x29A // Unused Flag
#define FLAG_UNUSED_0x29B  0x29B // Unused Flag
#define FLAG_UNUSED_0x29C  0x29C // Unused Flag
#define FLAG_UNUSED_0x29D  0x29D // Unused Flag

#define FLAG_GOT_ITEM_TM80      0x29E
#define FLAG_GOT_TYPE_NULL      0x29F // Type_Null
#define FLAG_GOT_PORYGON        0x2A0 // Porygon
#define FLAG_GOT_EON_FLUTE      0x2A1
#define FLAG_DOUBLE_BATTLE_MODE 0x2A2 // Game Mode

#define FLAG_UNUSED_0x2A3       0x2A3 // Unused Flag

#define FLAG_RECEIVED_BADGE_09  0x2A4 // Future Flag
#define FLAG_RECEIVED_BADGE_10  0x2A5 // Future Flag
#define FLAG_RECEIVED_BADGE_11  0x2A6 // Future Flag
#define FLAG_RECEIVED_BADGE_12  0x2A7 // Future Flag
#define FLAG_RECEIVED_BADGE_13  0x2A8 // Future Flag
#define FLAG_RECEIVED_BADGE_14  0x2A9 // Future Flag
#define FLAG_RECEIVED_BADGE_15  0x2AA // Future Flag
#define FLAG_RECEIVED_BADGE_16  0x2AB // Future Flag
#define FLAG_RECEIVED_BADGE_17  0x2AD // Future Flag
#define FLAG_RECEIVED_BADGE_18  0x2AE // Future Flag
#define FLAG_RECEIVED_BADGE_19  0x2AF // Future Flag
#define FLAG_RECEIVED_BADGE_20  0x2B0 // Future Flag
#define FLAG_RECEIVED_BADGE_21  0x2B1 // Future Flag
#define FLAG_RECEIVED_BADGE_22  0x2B2 // Future Flag
#define FLAG_RECEIVED_BADGE_23  0x2B3 // Future Flag
#define FLAG_RECEIVED_BADGE_24  0x2B4 // Future Flag
#define FLAG_UNUSED_0x2B5  0x2B5 // Unused Flag
#define FLAG_UNUSED_0x2B6  0x2B6 // Unused Flag
#define FLAG_UNUSED_0x2B7  0x2B7 // Unused Flag
#define FLAG_UNUSED_0x2B8  0x2B8 // Unused Flag
#define FLAG_UNUSED_0x2B9  0x2B9 // Unused Flag
#define FLAG_UNUSED_0x2BA  0x2BA // Unused Flag
#define FLAG_PASSWORD_TRAINER  0x2BB // Unused Flag

// Event Flags
#define FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG                      0x2BC
#define FLAG_HIDE_APPRENTICE                                        0x2BD
#define FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN                0x2BE
#define FLAG_HIDE_UNION_ROOM_PLAYER_1                               0x2BF
#define FLAG_HIDE_UNION_ROOM_PLAYER_2                               0x2C0
#define FLAG_HIDE_UNION_ROOM_PLAYER_3                               0x2C1
#define FLAG_HIDE_UNION_ROOM_PLAYER_4                               0x2C2
#define FLAG_HIDE_UNION_ROOM_PLAYER_5                               0x2C3
#define FLAG_HIDE_UNION_ROOM_PLAYER_6                               0x2C4
#define FLAG_HIDE_UNION_ROOM_PLAYER_7                               0x2C5
#define FLAG_HIDE_UNION_ROOM_PLAYER_8                               0x2C6
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1               0x2C7
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2               0x2C8
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3               0x2C9
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4               0x2CA
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5               0x2CB
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6               0x2CC
#define FLAG_HIDE_SAFARI_ZONE_WORKER_WITHOUT_PASS                   0x2CD
#define FLAG_HIDE_MEW                                               0x2CE
#define FLAG_HIDE_ROUTE_104_RIVAL                                   0x2CF
#define FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE                  0x2D0
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH                  0x2D1
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM          0x2D2
#define FLAG_HIDE_ROUTE_103_RIVAL                                   0x2D3
#define FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE                    0x2D4
#define FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT                        0x2D5
#define FLAG_HIDE_PETALBURG_CITY_WALLY                              0x2D6
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY   0x2D7
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM                         0x2D8

#define FLAG_SYS_GENERATED_OVERWORLD_SHINY                          0x2D9 // System Flag

#define FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER                     0x2DA
#define FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT                          0x2DB
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1                    0x2DC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_2                   0x2DD
#define FLAG_HIDE_PLAYERS_HOUSE_DAD                                 0x2DE
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING      0x2DF
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING          0x2E0
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE             0x2E1
#define FLAG_HIDE_ROUTE_104_MR_BRINEY                               0x2E2
#define FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY                           0x2E3
#define FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN                            0x2E4
#define FLAG_HIDE_ROUTE_109_MR_BRINEY                               0x2E5
#define FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT                          0x2E6
#define FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN                       0x2E7
#define FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT                          0x2E8
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN            0x2E9
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY                    0x2EA
#define FLAG_SHOWN_SAFARI_PASS                                      0x2EB
#define FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER                0x2EC
#define FLAG_HIDE_SLATEPORT_CITY_SCOTT                              0x2ED
#define FLAG_HIDE_ROUTE_101_ZIGZAGOON                               0x2EE
#define FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY                           0x2EF
#define FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE                       0x2F0
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN              0x2F1
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1          0x2F2
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2          0x2F3
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA          0x2F4
#define FLAG_HIDE_LITTLE_ROOT_TOWN_PLAYERS_BEDROOM_MOM              0x2F5
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM                0x2F6
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM                    0x2F7
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM      0x2F8
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK              0x2F9
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK                  0x2FA
#define FLAG_HIDE_DEOXYS                                            0x2FB
#define FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE                      0x2FC
#define FLAG_HIDE_MAUVILLE_CITY_SCOTT                               0x2FD
#define FLAG_HIDE_VERDANTURF_TOWN_SCOTT                             0x2FE
#define FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT                  0x2FF
#define FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE                        0x300
#define FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE                      0x301
#define FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE                          0x302
#define FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE                         0x303
#define FLAG_HIDE_PETALBURG_GYM_NORMAN                              0x304
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_2                         0x305
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_1         0x306
#define FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR                           0x307
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1                          0x308
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2                          0x309
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3                          0x30A
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4                          0x30B
#define FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS                          0x30C
#define FLAG_HIDE_PETALBURG_GYM_GREETER                             0x30D
#define FLAG_HIDE_MARINE_CAVE_KYOGRE                                0x30E
#define FLAG_HIDE_TERRA_CAVE_GROUDON                                0x30F
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM          0x310
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM              0x311
#define FLAG_HIDE_ROUTE_119_SCOTT                                   0x312
#define FLAG_HIDE_LILCOVE_MOTEL_SCOTT                               0x313
#define FLAG_HIDE_MOSSDEEP_CITY_SCOTT                               0x314
#define FLAG_HIDE_FANCLUB_OLD_LADY                                  0x315
#define FLAG_HIDE_FANCLUB_BOY                                       0x316
#define FLAG_HIDE_FANCLUB_LITTLE_BOY                                0x317
#define FLAG_HIDE_FANCLUB_LADY                                      0x318
#define FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT               0x319
#define FLAG_HIDE_LITTLEROOT_TOWN_RIVAL                             0x31A
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCH                             0x31B
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1                          0x31C
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1                          0x31D
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1                          0x31E
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3                          0x31F
#define FLAG_HIDE_LUGIA                                             0x320
#define FLAG_HIDE_HO_OH                                             0x321
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER                    0x322
#define FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER                   0x323
#define FLAG_HIDE_MAUVILLE_CITY_WALLY                               0x324
#define FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE                        0x325
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY                0x326
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND                   0x327
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND     0x328
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE         0x329
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT                           0x32A
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_DRATINI     0x32B
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_GIBLE      0x32C
#define FLAG_HIDE_ROUTE_116_DROPPED_GLASSES_MAN                     0x32D
#define FLAG_HIDE_RUSTBORO_CITY_RIVAL                               0x32E
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL     0x32F
#define FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE                           0x330
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL       0x331
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL           0x332
#define FLAG_HIDE_ROUTE_112_TEAM_MAGMA                              0x333
#define FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE                        0x334
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE         0x335
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE         0x336
#define FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA                          0x337
#define FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD                          0x338
#define FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE                            0x33A
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE                             0x33B
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE                     0x33C
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE                      0x33D
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD                         0x33E
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS               0x33F
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER                0x340
#define FLAG_HIDE_GRANITE_CAVE_STEVEN                               0x341
#define FLAG_HIDE_ROUTE_128_STEVEN                                  0x342
#define FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY                       0x343
#define FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT              0x344
#define FLAG_HIDE_ROUTE_110_BIRCH                                   0x345
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_AXEW     0x346
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1                             0x347
#define FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN                      0x348
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN               0x349
#define FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO                         0x34A
#define FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY                      0x34B
#define FLAG_HIDE_RUSTBORO_CITY_SCIENTIST                           0x34C
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT                  0x34D
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE                      0x34E
#define FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD                           0x34F
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW            0x350
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL          0x351
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_2                        0x352
#define FLAG_HIDE_ROUTE_119_RIVAL                                   0x353
#define FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS                         0x354
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_1                        0x355
#define FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS                         0x356
#define FLAG_HIDE_SKY_PILLAR_WALLACE                                0x357
#define FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE                              0x358
#define FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS                              0x359
#define FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY                       0x35A
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_1                   0x35B
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL                    0x35C
#define FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL                           0x35D
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA          0x35E
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN              0x35F
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1           0x360
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2           0x361
#define FLAG_HIDE_PETALBURG_GYM_WALLY                               0x362
#define FLAG_UNKNOWN_0x363                                          0x363 // Set, however has no purpose.
#define FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN                           0x364
#define FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY          0x365
#define FLAG_HIDE_LANETTES_HOUSE_LANETTE                            0x366
#define FLAG_HIDE_FALLORBOR_POKEMON_CENTER_LANETTE                  0x367
#define FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN                          0x368
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT    0x369
#define FLAG_HIDE_DESERT_UNDERPASS_FOSSIL                           0x36A
#define FLAG_HIDE_ROUTE_111_PLAYER_DESCENT                          0x36B
#define FLAG_HIDE_ROUTE_111_DESERT_FOSSIL                           0x36C
#define FLAG_HIDE_MT_CHIMNEY_TRAINERS                               0x36D
#define FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT                         0x36E
#define FLAG_HIDE_RUSTURF_TUNNEL_BRINEY                             0x36F
#define FLAG_HIDE_RUSTURF_TUNNEL_PEEKO                              0x370
#define FLAG_HIDE_BRINEYS_HOUSE_PEEKO                               0x371
#define FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA                          0x372
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS         0x373
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1     0x374
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2     0x375
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE           0x376
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN    0x377
#define FLAG_HIDE_BATTLE_TOWER_OPPONENT                             0x378
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL                  0x379
#define FLAG_WEATHER_INSTITUTE_ROCKY_HELMET                         0x37A
#define FLAG_HIDE_ROUTE_116_MR_BRINEY                               0x37B
#define FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS                      0x37C
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS                      0x37D
#define FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND                        0x37E
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2         0x37F
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380          0x380
#define FLAG_HIDE_ROUTE_101_BIRCH                                   0x381
#define FLAG_HIDE_ROUTE_103_BIRCH                                   0x382
#define FLAG_HIDE_TRICK_HOUSE_END_MAN                               0x383
#define FLAG_HIDE_ROUTE_110_TEAM_AQUA                               0x384
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2                          0x385
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2                          0x386
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2                          0x387
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3                          0x388
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS                     0x389
#define FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST                      0x38A
#define FLAG_HIDE_FALLARBOR_AZURILL                                 0x38B
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_ATTENDANT                   0x38C
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR                      0x38D
#define FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE                         0x38E
#define FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON              0x38F
#define FLAG_HIDE_MAUVILLE_CITY_WATTSON                             0x390
#define FLAG_HIDE_MAUVILLE_GYM_WATTSON                              0x391
#define FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS                        0x392
#define FLAG_UNKNOWN_0x393                                          0x393 // Set, however has no purpose.
#define FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE                             0x394
#define FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA                          0x395
#define FLAG_HIDE_BATTLE_TOWER_REPORTER                             0x396
#define FLAG_HIDE_ROUTE_110_RIVAL                                   0x397
#define FLAG_HIDE_CHAMPIONS_ROOM_RIVAL                              0x398
#define FLAG_HIDE_CHAMPIONS_ROOM_BIRCH                              0x399
#define FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE                           0x39A
#define FLAG_HIDE_ROUTE_119_RIVAL_ON_BIKE                           0x39B
#define FLAG_HIDE_AQUA_HIDEOUT_GRUNTS                               0x39C
#define FLAG_HIDE_LILCOVE_MOTEL_GAME_DESIGNERS                      0x39D
#define FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA                              0x39E
#define FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA                             0x39F
#define FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO                        0x3A0
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL                              0x3A1
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_ON_BIKE                      0x3A2
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_1                             0x3A3
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_2                             0x3A4
#define FLAG_HIDE_FORTREE_CITY_HOUSE_4_WINGULL                      0x3A5
#define FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL                     0x3A6
#define FLAG_HIDE_REGIROCK                                          0x3A7
#define FLAG_HIDE_REGICE                                            0x3A8
#define FLAG_HIDE_REGISTEEL                                         0x3A9
#define FLAG_HIDE_METEOR_FALLS_TEAM_AQUA                            0x3AA
#define FLAG_HIDE_METEOR_FALLS_TEAM_MAGMA                           0x3AB
#define FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN                      0x3AC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT               0x3AD
#define FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO                          0x3AE
#define FLAG_HIDE_AQUA_HIDEOUT_B2F_SUBMARINE_SHADOW                 0x3AF
#define FLAG_HIDE_ROUTE_128_ARCHIE                                  0x3B0
#define FLAG_HIDE_ROUTE_128_MAXIE                                   0x3B1
#define FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS                       0x3B2
#define FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE                          0x3B3
#define FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN                        0x3B4
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE              0x3B5
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY                       0x3B6
#define FLAG_HIDE_SS_TIDAL_ROOMS_SNATCH_GIVER                       0x3B7
#define FLAG_RECEIVED_SHOAL_SALT_1                                  0x3B8
#define FLAG_RECEIVED_SHOAL_SALT_2                                  0x3B9
#define FLAG_RECEIVED_SHOAL_SALT_3                                  0x3BA
#define FLAG_RECEIVED_SHOAL_SALT_4                                  0x3BB
#define FLAG_RECEIVED_SHOAL_SHELL_1                                 0x3BC
#define FLAG_RECEIVED_SHOAL_SHELL_2                                 0x3BD
#define FLAG_RECEIVED_SHOAL_SHELL_3                                 0x3BE
#define FLAG_RECEIVED_SHOAL_SHELL_4                                 0x3BF
#define FLAG_HIDE_ROUTE_111_SECRET_POWER_MAN                        0x3C0
#define FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION                       0x3C1
#define FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN      0x3C2
#define FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL                          0x3C3
#define FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL                          0x3C4
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT 0x3C5
#define FLAG_HIDE_ROUTE_118_STEVEN                                  0x3C6
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN                0x3C7
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL       0x3C8
#define FLAG_HIDE_FORTREE_CITY_KECLEON                              0x3C9
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE_INVISIBLE                0x3CA
#define FLAG_HIDE_LILYCOVE_CITY_RIVAL                               0x3CB
#define FLAG_HIDE_ROUTE_120_STEVEN                                  0x3CC
#define FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN                            0x3CD
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1                            0x3CE
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2                            0x3CF
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3                            0x3D0
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1                      0x3D1
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2                      0x3D2
#define FLAG_HIDE_OLDALE_TOWN_RIVAL                                 0x3D3
#define FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE      0x3D4
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE_VISIBLE                  0x3D5
#define FLAG_HIDE_ROUTE_120_KECLEON_1                               0x3D6
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDA                              0x3D7
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA                0x3D8
#define FLAG_HIDE_ROUTE_120_KECLEON_2                               0x3D9
#define FLAG_HIDE_ROUTE_120_KECLEON_3                               0x3DA
#define FLAG_HIDE_ROUTE_120_KECLEON_4                               0x3DB
#define FLAG_HIDE_ROUTE_120_KECLEON_5                               0x3DC
#define FLAG_HIDE_ROUTE_119_KECLEON_1                               0x3DD
#define FLAG_HIDE_ROUTE_119_KECLEON_2                               0x3DE
#define FLAG_HIDE_ROUTE_101_BOY                                     0x3DF
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M                 0x3E0
#define FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON          0x3E1
#define FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY                       0x3E2
#define FLAG_HIDE_PETALBURG_CITY_SCOTT                              0x3E3
#define FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA                          0x3E4
#define FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE                            0x3E5
#define FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON                           0x3E6
#define FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT                0x3E7

// Item Ball Flags
#define FLAG_ITEM_ROUTE_102_POTION                                  0x3E8
#define FLAG_ITEM_ROUTE_116_X_SPECIAL                               0x3E9
#define FLAG_ITEM_ROUTE_104_PP_UP                                   0x3EA
#define FLAG_ITEM_ROUTE_105_IRON                                    0x3EB
#define FLAG_ITEM_ROUTE_106_PROTEIN                                 0x3EC
#define FLAG_ITEM_ROUTE_109_PP_UP                                   0x3ED
#define FLAG_ITEM_ROUTE_109_RARE_CANDY                              0x3EE
#define FLAG_ITEM_ROUTE_110_DIRE_HIT                                0x3EF
#define FLAG_ITEM_ROUTE_111_TM_37                                   0x3F0
#define FLAG_ITEM_ROUTE_111_STARDUST                                0x3F1
#define FLAG_ITEM_ROUTE_111_HP_UP                                   0x3F2
#define FLAG_ITEM_ROUTE_112_NUGGET                                  0x3F3
#define FLAG_ITEM_ROUTE_113_MAX_ETHER                               0x3F4
#define FLAG_ITEM_ROUTE_113_SUPER_REPEL                             0x3F5
#define FLAG_ITEM_ROUTE_114_RARE_CANDY                              0x3F6
#define FLAG_ITEM_ROUTE_114_PROTEIN                                 0x3F7
#define FLAG_ITEM_ROUTE_115_SUPER_POTION                            0x3F8
#define FLAG_ITEM_ROUTE_115_TM_01                                   0x3F9
#define FLAG_ITEM_ROUTE_115_IRON                                    0x3FA
#define FLAG_ITEM_ROUTE_116_ETHER                                   0x3FB
#define FLAG_ITEM_ROUTE_116_REPEL                                   0x3FC
#define FLAG_ITEM_ROUTE_116_HP_UP                                   0x3FD
#define FLAG_ITEM_ROUTE_117_GREAT_BALL                              0x3FE
#define FLAG_ITEM_ROUTE_117_REVIVE                                  0x3FF
#define FLAG_ITEM_ROUTE_119_SUPER_REPEL                             0x400
#define FLAG_ITEM_ROUTE_119_ZINC                                    0x401
#define FLAG_ITEM_ROUTE_119_ELIXIR_1                                0x402
#define FLAG_ITEM_ROUTE_119_LEAF_STONE                              0x403
#define FLAG_ITEM_ROUTE_119_RARE_CANDY                              0x404
#define FLAG_ITEM_ROUTE_119_HYPER_POTION_1                          0x405
#define FLAG_ITEM_ROUTE_120_NUGGET                                  0x406
#define FLAG_ITEM_ROUTE_120_FULL_HEAL                               0x407
#define FLAG_ITEM_ROUTE_123_CALCIUM                                 0x408
#define FLAG_ITEM_ROUTE_123_RARE_CANDY                              0x409 // Unused Flag, leftover from R/S. In Emerald this is a hidden item and uses a different flag
#define FLAG_ITEM_ROUTE_127_ZINC                                    0x40A
#define FLAG_ITEM_ROUTE_127_CARBOS                                  0x40B
#define FLAG_ITEM_ROUTE_132_RARE_CANDY                              0x40C
#define FLAG_ITEM_ROUTE_133_BIG_PEARL                               0x40D
#define FLAG_ITEM_ROUTE_133_STAR_PIECE                              0x40E
#define FLAG_ITEM_PETALBURG_CITY_MAX_REVIVE                         0x40F
#define FLAG_ITEM_PETALBURG_CITY_ETHER                              0x410
#define FLAG_ITEM_RUSTBORO_CITY_X_DEFEND                            0x411
#define FLAG_ITEM_LILYCOVE_CITY_MAX_REPEL                           0x412
#define FLAG_ITEM_MOSSDEEP_CITY_NET_BALL                            0x413
#define FLAG_ITEM_METEOR_FALLS_1F_1R_TM_23                          0x414
#define FLAG_ITEM_METEOR_FALLS_1F_1R_FULL_HEAL                      0x415
#define FLAG_ITEM_METEOR_FALLS_1F_1R_MOON_STONE                     0x416
#define FLAG_ITEM_METEOR_FALLS_1F_1R_PP_UP                          0x417
#define FLAG_ITEM_RUSTURF_TUNNEL_POKE_BALL                          0x418
#define FLAG_ITEM_RUSTURF_TUNNEL_MAX_ETHER                          0x419
#define FLAG_ITEM_GRANITE_CAVE_1F_ESCAPE_ROPE                       0x41A
#define FLAG_ITEM_GRANITE_CAVE_B1F_POKE_BALL                        0x41B
#define FLAG_ITEM_MT_PYRE_5F_LAX_INCENSE                            0x41C
#define FLAG_ITEM_GRANITE_CAVE_B2F_REPEL                            0x41D
#define FLAG_ITEM_GRANITE_CAVE_B2F_RARE_CANDY                       0x41E
#define FLAG_ITEM_PETALBURG_WOODS_X_ATTACK                          0x41F
#define FLAG_ITEM_PETALBURG_WOODS_GREAT_BALL                        0x420
#define FLAG_ITEM_ROUTE_104_POKE_BALL                               0x421
#define FLAG_ITEM_PETALBURG_WOODS_ETHER                             0x422
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_3R_RED_ORB                       0x423
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_1_ORANGE_MAIL                  0x424
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_HARBOR_MAIL                  0x425
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_WAVE_MAIL                    0x426
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_SHADOW_MAIL                  0x427
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_WOOD_MAIL                    0x428
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_4_MECH_MAIL                    0x429
#define FLAG_ITEM_ROUTE_124_YELLOW_SHARD                            0x42A
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_6_GLITTER_MAIL                 0x42B
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_7_TROPIC_MAIL                  0x42C
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_8_BEAD_MAIL                    0x42D
#define FLAG_ITEM_JAGGED_PASS_BURN_HEAL                             0x42E
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MAX_ELIXIR                       0x42F
#define FLAG_ITEM_AQUA_HIDEOUT_B2F_NEST_BALL                        0x430
#define FLAG_ITEM_MT_PYRE_EXTERIOR_MAX_POTION                       0x431
#define FLAG_ITEM_MT_PYRE_EXTERIOR_TM_48                            0x432
#define FLAG_ITEM_NEW_MAUVILLE_ULTRA_BALL                           0x433
#define FLAG_ITEM_NEW_MAUVILLE_ESCAPE_ROPE                          0x434
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_6_LUXURY_BALL    0x435
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_4_SCANNER        0x436
#define FLAG_ITEM_SCORCHED_SLAB_TM_11                               0x437
#define FLAG_ITEM_METEOR_FALLS_B1F_2R_TM_02                         0x438
#define FLAG_ITEM_SHOAL_CAVE_ENTRANCE_BIG_PEARL                     0x439
#define FLAG_ITEM_SHOAL_CAVE_INNER_ROOM_RARE_CANDY                  0x43A
#define FLAG_ITEM_SHOAL_CAVE_STAIRS_ROOM_ICE_HEAL                   0x43B
#define FLAG_ITEM_VICTORY_ROAD_1F_MAX_ELIXIR                        0x43C
#define FLAG_ITEM_VICTORY_ROAD_1F_PP_UP                             0x43D
#define FLAG_ITEM_VICTORY_ROAD_B1F_TM_29                            0x43E
#define FLAG_ITEM_VICTORY_ROAD_B1F_FULL_RESTORE                     0x43F
#define FLAG_ITEM_VICTORY_ROAD_B2F_FULL_HEAL                        0x440
#define FLAG_ITEM_MT_PYRE_6F_TM_30                                  0x441
#define FLAG_ITEM_SEAFLOOR_CAVERN_ROOM_9_TM_26                      0x442
#define FLAG_ITEM_FIERY_PATH_TM06                                   0x443 
#define FLAG_ITEM_ROUTE_124_RED_SHARD                               0x444 
#define FLAG_ITEM_ROUTE_124_BLUE_SHARD                              0x445 
#define FLAG_ITEM_SAFARI_ZONE_NORTH_WEST_TM_22                      0x446 
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_1F_HARBOR_MAIL               0x447 
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_ESCAPE_ROPE              0x448 
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_B1F_DIVE_BALL              0x449 
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_TM_13                    0x44A 
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_1F_REVIVE                  0x44B 
#define FLAG_ITEM_ABANDONED_SHIP_CAPTAINS_OFFICE_STORAGE_KEY        0x44C 
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_3_WATER_STONE    0x44D 
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_1_TM_18          0x44E 
#define FLAG_ITEM_ROUTE_121_CARBOS                                  0x44F
#define FLAG_ITEM_ROUTE_123_ULTRA_BALL                              0x450
#define FLAG_ITEM_ROUTE_126_GREEN_SHARD                             0x451
#define FLAG_ITEM_ROUTE_119_HYPER_POTION_2                          0x452
#define FLAG_ITEM_ROUTE_120_HYPER_POTION                            0x453
#define FLAG_ITEM_ROUTE_120_NEST_BALL                               0x454
#define FLAG_ITEM_ROUTE_123_ELIXIR                                  0x455
#define FLAG_ITEM_NEW_MAUVILLE_THUNDER_STONE                        0x456
#define FLAG_ITEM_FIERY_PATH_FIRE_STONE                             0x457
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_TM_07                         0x458
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_NEVER_MELT_ICE                0x459
#define FLAG_ITEM_ROUTE_103_GUARD_SPEC                              0x45A
#define FLAG_ITEM_ROUTE_104_X_ACCURACY                              0x45B
#define FLAG_ITEM_MAUVILLE_CITY_X_SPEED                             0x45C
#define FLAG_ITEM_PETALBURD_WOODS_PARALYZE_HEAL                     0x45D
#define FLAG_ITEM_ROUTE_115_GREAT_BALL                              0x45E
#define FLAG_ITEM_SAFARI_ZONE_NORTH_CALCIUM                         0x45F
#define FLAG_ITEM_MT_PYRE_3F_SUPER_REPEL                            0x460
#define FLAG_ITEM_ROUTE_118_HYPER_POTION                            0x461
#define FLAG_ITEM_NEW_MAUVILLE_FULL_HEAL                            0x462
#define FLAG_ITEM_NEW_MAUVILLE_PARALYZE_HEAL                        0x463
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MASTER_BALL                      0x464
#define FLAG_UNUSED_0x465                 					        0x465 // Unused
#define FLAG_UNUSED_0x466                  					        0x466 // Unused
#define FLAG_UNUSED_0x467                   				        0x467 // Unused
#define FLAG_WON_METRONOME_HARD_BATTLE                              0x468
#define FLAG_ITEM_MT_PYRE_2F_ULTRA_BALL                             0x469
#define FLAG_ITEM_MT_PYRE_4F_SEA_INCENSE                            0x46A
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_WEST_MAX_REVIVE                 0x46B
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_NUGGET                           0x46C
#define FLAG_IS_HARD_MOCK_BATTLE                       				0x46D
#define FLAG_ITEM_ROUTE_119_NUGGET                                  0x46E
#define FLAG_ITEM_ROUTE_104_POTION                                  0x46F
#define FLAG_IS_DAYNIGHT_INVERTED                                   0x470 //System Flag
#define FLAG_ITEM_ROUTE_103_PP_UP                                   0x471
#define FLAG_SHINY_CREATION                                         0x472 //System Flag
#define FLAG_ITEM_ROUTE_108_STAR_PIECE                              0x473
#define FLAG_ITEM_ROUTE_109_POTION                                  0x474
#define FLAG_ITEM_ROUTE_110_ELIXIR                                  0x475
#define FLAG_ITEM_ROUTE_111_ELIXIR                                  0x476
#define FLAG_ITEM_ROUTE_113_HYPER_POTION                            0x477
#define FLAG_ITEM_ROUTE_115_HEAL_POWDER                             0x478
#define FLAG_ITEM_ROUTE_116_POTION                                  0x47A
#define FLAG_ITEM_ROUTE_119_ELIXIR_2                                0x47B
#define FLAG_ITEM_ROUTE_120_REVIVE                                  0x47C
#define FLAG_ITEM_ROUTE_121_REVIVE                                  0x47D
#define FLAG_ITEM_ROUTE_121_ZINC                                    0x47E
#define FLAG_ITEM_MAGMA_HIDEOUT_1F_RARE_CANDY                       0x47F
#define FLAG_ITEM_ROUTE_123_PP_UP                                   0x480
#define FLAG_ITEM_ROUTE_123_REVIVAL_HERB                            0x481
#define FLAG_ITEM_ROUTE_125_BIG_PEARL                               0x482
#define FLAG_ITEM_ROUTE_127_RARE_CANDY                              0x483
#define FLAG_ITEM_ROUTE_132_PROTEIN                                 0x484
#define FLAG_ITEM_ROUTE_133_MAX_REVIVE                              0x485
#define FLAG_ITEM_ROUTE_134_CARBOS                                  0x486
#define FLAG_ITEM_ROUTE_134_STAR_PIECE                              0x487
#define FLAG_ITEM_ROUTE_114_ENERGY_POWDER                           0x488
#define FLAG_ITEM_ROUTE_115_PP_UP                                   0x489
#define FLAG_ITEM_ARTISAN_CAVE_B1F_HP_UP                            0x48A
#define FLAG_ITEM_ARTISAN_CAVE_1F_CARBOS                            0x48B
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_MAX_ELIXIR                    0x48C
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_FULL_RESTORE                  0x48D
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_1R_NUGGET                        0x48E
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_2R_PP_MAX                        0x48F
#define FLAG_ITEM_MAGMA_HIDEOUT_4F_MAX_REVIVE                       0x490
#define FLAG_ITEM_SAFARI_ZONE_NORTH_EAST_NUGGET                     0x491
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL                  0x492

#define FLAG_DEFEATED_ARTICUNO                                      0x493 // Articuno
#define FLAG_DEFEATED_ZAPDOS                                        0x494 // Zapdos
#define FLAG_DEFEATED_MOLTRES                                       0x495 // Moltres
#define FLAG_DEFEATED_MEWTWO                                        0x496 // Mewtwo
#define FLAG_DEFEATED_SUICUNE                                       0x498 // Suicune
#define FLAG_DEFEATED_RAIKOU                                        0x499 // Raikou
#define FLAG_DEFEATED_ENTEI                                         0x49A // Entei
#define FLAG_UNUSED_0x49B                                           0x49B // Ho-oh
#define FLAG_UNUSED_0x49C                                           0x49C // Lugia
#define FLAG_DEFEATED_CELEBI                                        0x49D // Celebi
#define FLAG_DEFEATED_LATIAS                                        0x273 // Latias
#define FLAG_DEFEATED_LATIOS                                        0x274 // Latios
#define FLAG_DEFEATED_JIRACHI                                       0x4A0 // Jirachi
#define FLAG_DEFEATED_AZELF                                         0x4A2 // Azelf
#define FLAG_DEFEATED_MESPRIT                                       0x4A3 // Mesprit
#define FLAG_DEFEATED_UXIE                                          0x4A4 // Uxie
#define FLAG_DEFEATED_DIALGA                                        0x4A5 // Dialga
#define FLAG_DEFEATED_PALKIA                                        0x4A6 // Palkia
#define FLAG_DEFEATED_GIRATINA                                      0x4A7 // Giratina
#define FLAG_DEFEATED_CRESSELIA                                     0x4A8 // Cresselia
#define FLAG_DEFEATED_HEATRAN                                       0x4A9 // Heatran
#define FLAG_DEFEATED_REGIGIGAS                                     0x4AA // Regigigas
#define FLAG_DEFEATED_SHAYMIN                                       0x4AB // Shaymin
#define FLAG_DEFEATED_DARKRAI                                       0x4AC // Darkrai
#define FLAG_DEFEATED_MANAPHY                                       0x4AD // Manaphy
#define FLAG_DEFEATED_ARCEUS                                        0x4AE // Arceus
#define FLAG_DEFEATED_COBALION                                      0x4AF // Cobalion
#define FLAG_DEFEATED_TERRAKION                                     0x4B0 // Terrakion
#define FLAG_DEFEATED_VIRIZION                                      0x4B1 // Virizion
#define FLAG_DEFEATED_TORNADUS                                      0x4B2 // Tornadus
#define FLAG_DEFEATED_THUNDURUS                                     0x4B3 // Thundurus
#define FLAG_DEFEATED_LANDORUS                                      0x4B4 // Landorus
#define FLAG_DEFEATED_RESHIRAM                                      0x4B5 // Reshiram
#define FLAG_DEFEATED_ZEKROM                                        0x4B6 // Zekrom
#define FLAG_DEFEATED_KYUREM                                        0x4B7 // Kyurem
#define FLAG_DEFEATED_MELOETTA                                      0x4B8 // Meloetta
#define FLAG_DEFEATED_GENESECT                                      0x4B9 // Genesect
#define FLAG_DEFEATED_XERNEAS                                       0x4BA // Xerneas
#define FLAG_DEFEATED_YVELTAL                                       0x4BB // Yveltal
#define FLAG_DEFEATED_ZYGARDE                                       0x4BC // Zygarde
#define FLAG_DEFEATED_DIANCIE                                       0x4BD // Diancie
#define FLAG_DEFEATED_HOOPA                                         0x4BE // Hoopa
#define FLAG_DEFEATED_VOLCANION                                     0x4BF // Volcanion
#define FLAG_DEFEATED_TAPU_KOKO                                     0x4C0 // Tapu Koko
#define FLAG_DEFEATED_TAPU_LELE                                     0x4C1 // Tapu Lele
#define FLAG_DEFEATED_TAPU_BULU                                     0x4C2 // Tapu Bulu
#define FLAG_DEFEATED_TAPU_FINI                                     0x4C3 // Tapu Fini
#define FLAG_DEFEATED_COSMOG                                        0x4C4 // Cosmog
#define FLAG_DEFEATED_SOLGALEO                                      0x4C5 // Solgaleo
#define FLAG_DEFEATED_LUNALA                                        0x4C6 // Lunala
#define FLAG_DEFEATED_NECROZMA                                      0x4C7 // Necrozma
#define FLAG_DEFEATED_MAGEARNA                                      0x4C8 // Magearna
#define FLAG_DEFEATED_MARSHADOW                                     0x4C9 // Marshadow
#define FLAG_DEFEATED_NIHILEGO                                      0x4CA // Nihilego
#define FLAG_DEFEATED_BUZZWOLE                                      0x4CB // Buzzwole
#define FLAG_DEFEATED_PHEROMOSA                                     0x4CC // Pheromosa
#define FLAG_DEFEATED_XURKITREE                                     0x4CD // Xurkitree
#define FLAG_DEFEATED_CELESTEELA                                    0x4CE // Celesteela
#define FLAG_DEFEATED_KARTANA                                       0x4CF // Kartana
#define FLAG_DEFEATED_GUZZLORD                                      0x4D0 // Guzzlord
#define FLAG_DEFEATED_ZACIAN                                        0x4D1 // Zacian
#define FLAG_DEFEATED_POIPOLE                                       0x4D2 // Poipole
#define FLAG_DEFEATED_STAKATAKA                                     0x4D3 // Stakataka
#define FLAG_DEFEATED_BLACEPHALON                                   0x4D4 // Blacephalon
#define FLAG_DEFEATED_ZERAORA                                       0x4D5 // Zeraora
#define FLAG_DEFEATED_MELTAN                                        0x4D6 // Meltan
#define FLAG_DEFEATED_COSMOG_2                                      0x4D7 // Zacian
#define FLAG_DEFEATED_ZAMAZENTA                                     0x4D8 // Zamazenta
#define FLAG_DEFEATED_ETERNATUS                                     0x4D9 // Eternatus
#define FLAG_DEFEATED_KUBFU                                         0x4DA // Kubfu 1
#define FLAG_DEFEATED_KUBFU_2                                       0x4DB // Kubfu 2
#define FLAG_DEFEATED_REGIELEKI                                     0x4DC // Regieleki
#define FLAG_DEFEATED_REGIDRAGO                                     0x4DD // Regidrago
#define FLAG_DEFEATED_ARTICUNO_GALARIAN                             0x4DE // Galarian Articuno
#define FLAG_DEFEATED_ZAPDOS_GALARIAN                               0x4DF // Galarian Zapdos
#define FLAG_DEFEATED_MOLTRES_GALARIAN                              0x4E0 // Galarian Moltres
#define FLAG_DEFEATED_GLASTRIER                                     0x4E1 // Glastrier
#define FLAG_DEFEATED_SPECTRIER                                     0x4E2 // Spectrier
#define FLAG_DEFEATED_CALYREX                                       0x4E3 // Calyrex
#define FLAG_DEFEATED_VICTINI                                       0x4E4 // Victini
#define FLAG_DEFEATED_KELDEO                                        0x4E5 // Keldeo
#define FLAG_DEFEATED_ZARUDE                                        0x4E6 // Zarude

#define FLAG_NEW_GAME_PLUS                                          0x49E
#define FLAG_SYS_MOVE_INFO                                          0x49F
#define FLAG_UNUSED_0x4A1                                           0x4A1 // Unused

#define FLAG_DEFEATED_RUSTBORO_GYM                                  0x4F0
#define FLAG_DEFEATED_DEWFORD_GYM                                   0x4F1
#define FLAG_DEFEATED_MAUVILLE_GYM                                  0x4F2
#define FLAG_DEFEATED_LAVARIDGE_GYM                                 0x4F3
#define FLAG_DEFEATED_PETALBURG_GYM                                 0x4F4
#define FLAG_DEFEATED_FORTREE_GYM                                   0x4F5
#define FLAG_DEFEATED_MOSSDEEP_GYM                                  0x4F6
#define FLAG_DEFEATED_SOOTOPOLIS_GYM                                0x4F7
#define FLAG_DEFEATED_METEOR_FALLS_STEVEN                           0x4F8

#define FLAG_SHINY_RAYQUAZA_TITLE_SCREEN                            0x4F9
#define FLAG_ACHIEVEMENT_DATA_CREATED                               0x4FA

#define FLAG_DEFEATED_ELITE_4_SIDNEY                                0x4FB
#define FLAG_DEFEATED_ELITE_4_PHOEBE                                0x4FC
#define FLAG_DEFEATED_ELITE_4_GLACIA                                0x4FD
#define FLAG_DEFEATED_ELITE_4_DRAKE                                 0x4FE

// Trainer Flags
// Trainer flags occupy 0x500 - 0x85F, the last 9 of which are unused
// See constants/opponents.h. The values there + FLAG_TRAINER_FLAG_START are the flag IDs

#define TRAINER_FLAGS_START                                         0x500
#define TRAINER_FLAGS_END                                           (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1) // 0x85F

// System Flags

#define SYSTEM_FLAGS                                   (TRAINER_FLAGS_END + 1) // 0x860

#define FLAG_SYS_POKEMON_GET                         (SYSTEM_FLAGS + 0x0) // FLAG_0x860
#define FLAG_SYS_POKEDEX_GET                         (SYSTEM_FLAGS + 0x1)
#define FLAG_SYS_POKENAV_GET                         (SYSTEM_FLAGS + 0x2)
#define FLAG_SYS_GAME_CLEAR                          (SYSTEM_FLAGS + 0x4)
#define FLAG_SYS_CHAT_USED                           (SYSTEM_FLAGS + 0x5)
#define FLAG_SYS_HIPSTER_MEET                        (SYSTEM_FLAGS + 0x6)

// Badges
#define FLAG_BADGE01_GET                             (SYSTEM_FLAGS + 0x7)
#define FLAG_BADGE02_GET                             (SYSTEM_FLAGS + 0x8)
#define FLAG_BADGE03_GET                             (SYSTEM_FLAGS + 0x9)
#define FLAG_BADGE04_GET                             (SYSTEM_FLAGS + 0xA)
#define FLAG_BADGE05_GET                             (SYSTEM_FLAGS + 0xB)
#define FLAG_BADGE06_GET                             (SYSTEM_FLAGS + 0xC)
#define FLAG_BADGE07_GET                             (SYSTEM_FLAGS + 0xD)
#define FLAG_BADGE08_GET                             (SYSTEM_FLAGS + 0xE)

// Towns and Cities
#define FLAG_VISITED_LITTLEROOT_TOWN                (SYSTEM_FLAGS + 0xF)
#define FLAG_VISITED_OLDALE_TOWN                    (SYSTEM_FLAGS + 0x10)
#define FLAG_VISITED_DEWFORD_TOWN                   (SYSTEM_FLAGS + 0x11)
#define FLAG_VISITED_LAVARIDGE_TOWN                 (SYSTEM_FLAGS + 0x12)
#define FLAG_VISITED_FALLARBOR_TOWN                 (SYSTEM_FLAGS + 0x13)
#define FLAG_VISITED_VERDANTURF_TOWN                (SYSTEM_FLAGS + 0x14)
#define FLAG_VISITED_PACIFIDLOG_TOWN                (SYSTEM_FLAGS + 0x15)
#define FLAG_VISITED_PETALBURG_CITY                 (SYSTEM_FLAGS + 0x16)
#define FLAG_VISITED_SLATEPORT_CITY                 (SYSTEM_FLAGS + 0x17)
#define FLAG_VISITED_MAUVILLE_CITY                  (SYSTEM_FLAGS + 0x18)
#define FLAG_VISITED_RUSTBORO_CITY                  (SYSTEM_FLAGS + 0x19)
#define FLAG_VISITED_FORTREE_CITY                   (SYSTEM_FLAGS + 0x1A)
#define FLAG_VISITED_LILYCOVE_CITY                  (SYSTEM_FLAGS + 0x1B)
#define FLAG_VISITED_MOSSDEEP_CITY                  (SYSTEM_FLAGS + 0x1C)
#define FLAG_VISITED_SOOTOPOLIS_CITY                (SYSTEM_FLAGS + 0x1D)
#define FLAG_VISITED_EVER_GRANDE_CITY               (SYSTEM_FLAGS + 0x1E)

#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x1F) // Seems to be related to linking.
#define FLAG_NURSE_UNION_ROOM_REMINDER              (SYSTEM_FLAGS + 0x20)

#define FLAG_EON_LATI								(SYSTEM_FLAGS + 0x21)
#define FLAG_SYS_DEXNAV_SEARCH                      (SYSTEM_FLAGS + 0x22)
#define FLAG_PRIMEVAL_FOREST_WEAKNESS_POLICY        (SYSTEM_FLAGS + 0x23) // New Flag
#define FLAG_SYS_DAYLIGHT_SAVING                    (SYSTEM_FLAGS + 0x24)
#define FLAG_SYS_NO_COLLISION                       (SYSTEM_FLAGS + 0x25)
#define FLAG_PRIMEVAL_FOREST_SHINY_STONE            (SYSTEM_FLAGS + 0x26) // New Flag
#define FLAG_PRIMEVAL_FOREST_GRASS_KNOT             (SYSTEM_FLAGS + 0x27) // New Flag

#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x28)
#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x29)
#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x2A)
#define FLAG_SYS_CYCLING_ROAD                       (SYSTEM_FLAGS + 0x2B)
#define FLAG_SYS_SAFARI_MODE                        (SYSTEM_FLAGS + 0x2C)
#define FLAG_SYS_CRUISE_MODE                        (SYSTEM_FLAGS + 0x2D)

#define FLAG_SYS_DETECTOR_MODE                      (SYSTEM_FLAGS + 0x2E) // allow player to find hidden mons
#define FLAG_SYS_DEXNAV_GET                         (SYSTEM_FLAGS + 0x2F) // dexnav shows in start menu

#define FLAG_SYS_TV_HOME                            (SYSTEM_FLAGS + 0x30)
#define FLAG_SYS_TV_WATCH                           (SYSTEM_FLAGS + 0x31)
#define FLAG_SYS_TV_START                           (SYSTEM_FLAGS + 0x32)
#define FLAG_SYS_POPWORD_INPUT                      (SYSTEM_FLAGS + 0x33)
#define FLAG_SYS_MIX_RECORD                         (SYSTEM_FLAGS + 0x34)
#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x35)
#define FLAG_SYS_NATIONAL_DEX                       (SYSTEM_FLAGS + 0x36)
#define FLAG_SYS_SHOAL_TIDE                         (SYSTEM_FLAGS + 0x3A)
#define FLAG_SYS_RIBBON_GET                         (SYSTEM_FLAGS + 0x3B)

#define FLAG_LANDMARK_FLOWER_SHOP                   (SYSTEM_FLAGS + 0x3C)
#define FLAG_LANDMARK_MR_BRINEY_HOUSE               (SYSTEM_FLAGS + 0x3D)
#define FLAG_LANDMARK_ABANDONED_SHIP                (SYSTEM_FLAGS + 0x3E)
#define FLAG_LANDMARK_SEASHORE_HOUSE                (SYSTEM_FLAGS + 0x3F)
#define FLAG_LANDMARK_NEW_MAUVILLE                  (SYSTEM_FLAGS + 0x40)
#define FLAG_LANDMARK_OLD_LADY_REST_SHOP            (SYSTEM_FLAGS + 0x41)
#define FLAG_LANDMARK_TRICK_HOUSE                   (SYSTEM_FLAGS + 0x42)
#define FLAG_LANDMARK_WINSTRATE_FAMILY              (SYSTEM_FLAGS + 0x43)
#define FLAG_LANDMARK_GLASS_WORKSHOP                (SYSTEM_FLAGS + 0x44)
#define FLAG_LANDMARK_LANETTES_HOUSE                (SYSTEM_FLAGS + 0x45)
#define FLAG_LANDMARK_POKEMON_DAYCARE               (SYSTEM_FLAGS + 0x46)
#define FLAG_LANDMARK_SEAFLOOR_CAVERN               (SYSTEM_FLAGS + 0x47)
#define FLAG_LANDMARK_BATTLE_FRONTIER               (SYSTEM_FLAGS + 0x48)
#define FLAG_LANDMARK_SOUTHERN_ISLAND               (SYSTEM_FLAGS + 0x49)
#define FLAG_LANDMARK_FIERY_PATH                    (SYSTEM_FLAGS + 0x4A)

#define FLAG_SYS_PC_LANETTE                         (SYSTEM_FLAGS + 0x4B)
#define FLAG_SYS_MYSTERY_EVENT_ENABLE               (SYSTEM_FLAGS + 0x4C)
#define FLAG_SYS_ENC_UP_ITEM                        (SYSTEM_FLAGS + 0x4D)
#define FLAG_SYS_ENC_DOWN_ITEM                      (SYSTEM_FLAGS + 0x4E)
#define FLAG_SYS_BRAILLE_DIG                        (SYSTEM_FLAGS + 0x4F)
#define FLAG_SYS_REGIROCK_PUZZLE_COMPLETED          (SYSTEM_FLAGS + 0x50)
#define FLAG_SYS_BRAILLE_REGICE_COMPLETED           (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED         (SYSTEM_FLAGS + 0x52)
#define FLAG_ENABLE_SHIP_SOUTHERN_ISLAND            (SYSTEM_FLAGS + 0x53)

#define FLAG_LANDMARK_POKEMON_LEAGUE                (SYSTEM_FLAGS + 0x54)
#define FLAG_LANDMARK_ISLAND_CAVE                   (SYSTEM_FLAGS + 0x55)
#define FLAG_LANDMARK_DESERT_RUINS                  (SYSTEM_FLAGS + 0x56)
#define FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE          (SYSTEM_FLAGS + 0x57)
#define FLAG_LANDMARK_SCORCHED_SLAB                 (SYSTEM_FLAGS + 0x58)
#define FLAG_LANDMARK_ANCIENT_TOMB                  (SYSTEM_FLAGS + 0x59)
#define FLAG_LANDMARK_TUNNELERS_REST_HOUSE          (SYSTEM_FLAGS + 0x5A)
#define FLAG_LANDMARK_HUNTERS_HOUSE                 (SYSTEM_FLAGS + 0x5B)
#define FLAG_LANDMARK_SEALED_CHAMBER                (SYSTEM_FLAGS + 0x5C)

#define FLAG_SYS_TV_LATIAS_LATIOS                   (SYSTEM_FLAGS + 0x5D)

#define FLAG_LANDMARK_SKY_PILLAR                    (SYSTEM_FLAGS + 0x5E)

#define FLAG_SYS_SHOAL_ITEM                         (SYSTEM_FLAGS + 0x5F)
#define FLAG_SYS_B_DASH                             (SYSTEM_FLAGS + 0x60) // RECEIVED Running Shoes
#define FLAG_SYS_CTRL_OBJ_DELETE                    (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESET_RTC_ENABLE                   (SYSTEM_FLAGS + 0x62)

#define FLAG_LANDMARK_BERRY_MASTERS_HOUSE           (SYSTEM_FLAGS + 0x63)

#define FLAG_SYS_TOWER_SILVER                       (SYSTEM_FLAGS + 0x64)
#define FLAG_SYS_TOWER_GOLD                         (SYSTEM_FLAGS + 0x65)
#define FLAG_SYS_DOME_SILVER                        (SYSTEM_FLAGS + 0x66)
#define FLAG_SYS_DOME_GOLD                          (SYSTEM_FLAGS + 0x67)
#define FLAG_SYS_PALACE_SILVER                      (SYSTEM_FLAGS + 0x68)
#define FLAG_SYS_PALACE_GOLD                        (SYSTEM_FLAGS + 0x69)
#define FLAG_SYS_ARENA_SILVER                       (SYSTEM_FLAGS + 0x6A)
#define FLAG_SYS_ARENA_GOLD                         (SYSTEM_FLAGS + 0x6B)
#define FLAG_SYS_FACTORY_SILVER                     (SYSTEM_FLAGS + 0x6C)
#define FLAG_SYS_FACTORY_GOLD                       (SYSTEM_FLAGS + 0x6D)
#define FLAG_SYS_PIKE_SILVER                        (SYSTEM_FLAGS + 0x6E)
#define FLAG_SYS_PIKE_GOLD                          (SYSTEM_FLAGS + 0x6F)
#define FLAG_SYS_PYRAMID_SILVER                     (SYSTEM_FLAGS + 0x70)
#define FLAG_SYS_PYRAMID_GOLD                       (SYSTEM_FLAGS + 0x71)
#define FLAG_SYS_FRONTIER_PASS                      (SYSTEM_FLAGS + 0x72)

#define FLAG_MAP_SCRIPT_CHECKED_DEOXYS              (SYSTEM_FLAGS + 0x73)
#define FLAG_DEOXYS_ROCK_COMPLETE                   (SYSTEM_FLAGS + 0x74)
#define FLAG_ENABLE_SHIP_BIRTH_ISLAND               (SYSTEM_FLAGS + 0x75)
#define FLAG_ENABLE_SHIP_FARAWAY_ISLAND             (SYSTEM_FLAGS + 0x76)

#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE             (SYSTEM_FLAGS + 0x77)

#define FLAG_ARRIVED_ON_FARAWAY_ISLAND              (SYSTEM_FLAGS + 0x78)
#define FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT     (SYSTEM_FLAGS + 0x79)
#define FLAG_ARRIVED_AT_TERRA_CAVE_ENTRANCE         (SYSTEM_FLAGS + 0x7A)

#define FLAG_SYS_MYSTERY_GIFT_ENABLE                (SYSTEM_FLAGS + 0x7B)

#define FLAG_ENTERED_MIRAGE_TOWER                   (SYSTEM_FLAGS + 0x7C)
#define FLAG_LANDMARK_ALTERING_CAVE                 (SYSTEM_FLAGS + 0x7D)
#define FLAG_LANDMARK_DESERT_UNDERPASS              (SYSTEM_FLAGS + 0x7E)
#define FLAG_LANDMARK_ARTISAN_CAVE                  (SYSTEM_FLAGS + 0x7F)
#define FLAG_ENABLE_SHIP_NAVEL_ROCK                 (SYSTEM_FLAGS + 0x80)
#define FLAG_ARRIVED_AT_NAVEL_ROCK                  (SYSTEM_FLAGS + 0x81)
#define FLAG_LANDMARK_TRAINER_HILL                  (SYSTEM_FLAGS + 0x82)

#define FLAG_RECEIVED_POKEDEX_FROM_BIRCH            (SYSTEM_FLAGS + 0x84)

#define FLAG_VISITED_ROUTE101                       (SYSTEM_FLAGS + 0x85)
#define FLAG_VISITED_ROUTE102                       (SYSTEM_FLAGS + 0x86) 
#define FLAG_VISITED_ROUTE103                       (SYSTEM_FLAGS + 0x87)
#define FLAG_VISITED_ROUTE104                       (SYSTEM_FLAGS + 0x88) 
#define FLAG_VISITED_ROUTE105                       (SYSTEM_FLAGS + 0x89) 
#define FLAG_VISITED_ROUTE106                       (SYSTEM_FLAGS + 0x8A) 
#define FLAG_VISITED_ROUTE107                       (SYSTEM_FLAGS + 0x8B) 
#define FLAG_VISITED_ROUTE108                       (SYSTEM_FLAGS + 0x8C)
#define FLAG_VISITED_ROUTE109                       (SYSTEM_FLAGS + 0x8D)
#define FLAG_VISITED_ROUTE110                       (SYSTEM_FLAGS + 0x8E)
#define FLAG_VISITED_ROUTE111                       (SYSTEM_FLAGS + 0x8F) 
#define FLAG_VISITED_ROUTE112                       (SYSTEM_FLAGS + 0x90) 
#define FLAG_VISITED_ROUTE113                       (SYSTEM_FLAGS + 0x91) 
#define FLAG_VISITED_ROUTE114                       (SYSTEM_FLAGS + 0x92) 
#define FLAG_VISITED_ROUTE115                       (SYSTEM_FLAGS + 0x93) 
#define FLAG_VISITED_ROUTE116                       (SYSTEM_FLAGS + 0x94) 
#define FLAG_VISITED_ROUTE117                       (SYSTEM_FLAGS + 0x95) 
#define FLAG_VISITED_ROUTE118                       (SYSTEM_FLAGS + 0x96)
#define FLAG_VISITED_ROUTE119                       (SYSTEM_FLAGS + 0x97) 
#define FLAG_VISITED_ROUTE120                       (SYSTEM_FLAGS + 0x98)
#define FLAG_VISITED_ROUTE121                       (SYSTEM_FLAGS + 0x99) 
#define FLAG_VISITED_ROUTE122                       (SYSTEM_FLAGS + 0x9A)
#define FLAG_VISITED_ROUTE123                       (SYSTEM_FLAGS + 0x9B)
#define FLAG_VISITED_ROUTE124                       (SYSTEM_FLAGS + 0x9C)
#define FLAG_VISITED_ROUTE125                       (SYSTEM_FLAGS + 0x9D) 
#define FLAG_VISITED_ROUTE126                       (SYSTEM_FLAGS + 0x9E) 
#define FLAG_VISITED_ROUTE127                       (SYSTEM_FLAGS + 0x9F)
#define FLAG_VISITED_ROUTE128                       (SYSTEM_FLAGS + 0xA0) 
#define FLAG_VISITED_ROUTE129                       (SYSTEM_FLAGS + 0xA1) 
#define FLAG_VISITED_ROUTE130                       (SYSTEM_FLAGS + 0xA2) 
#define FLAG_VISITED_ROUTE131                       (SYSTEM_FLAGS + 0xA3) 
#define FLAG_VISITED_ROUTE132                       (SYSTEM_FLAGS + 0xA4) 
#define FLAG_VISITED_ROUTE133                       (SYSTEM_FLAGS + 0xA5) 
#define FLAG_VISITED_ROUTE134                       (SYSTEM_FLAGS + 0xA6) 
#define FLAG_VISITED_MT_CHIMNEY                     (SYSTEM_FLAGS + 0xA7)
//Achivements Flags
#define FLAG_ACHIEVEMENT_REWARD_01                   (SYSTEM_FLAGS + 0xA8)
#define FLAG_ACHIEVEMENT_REWARD_02                   (SYSTEM_FLAGS + 0xA9)
#define FLAG_ACHIEVEMENT_REWARD_03                   (SYSTEM_FLAGS + 0xAA)
#define FLAG_ACHIEVEMENT_REWARD_04                   (SYSTEM_FLAGS + 0xAB)
#define FLAG_ACHIEVEMENT_REWARD_05                   (SYSTEM_FLAGS + 0xAC)
#define FLAG_ACHIEVEMENT_REWARD_06                   (SYSTEM_FLAGS + 0xAD)
#define FLAG_ACHIEVEMENT_REWARD_07                   (SYSTEM_FLAGS + 0xAE)
#define FLAG_ACHIEVEMENT_REWARD_08                   (SYSTEM_FLAGS + 0xAF)
#define FLAG_ACHIEVEMENT_REWARD_09                   (SYSTEM_FLAGS + 0xB0)
#define FLAG_ACHIEVEMENT_REWARD_10                   (SYSTEM_FLAGS + 0xB1)
#define FLAG_ACHIEVEMENT_REWARD_11                   (SYSTEM_FLAGS + 0xB2)
#define FLAG_ACHIEVEMENT_REWARD_12                   (SYSTEM_FLAGS + 0xB3)
#define FLAG_ACHIEVEMENT_REWARD_13                   (SYSTEM_FLAGS + 0xB4)
#define FLAG_ACHIEVEMENT_REWARD_14                   (SYSTEM_FLAGS + 0xB5)
#define FLAG_ACHIEVEMENT_REWARD_15                   (SYSTEM_FLAGS + 0xB6)
#define FLAG_ACHIEVEMENT_REWARD_16                   (SYSTEM_FLAGS + 0xB7)
#define FLAG_ACHIEVEMENT_REWARD_17                   (SYSTEM_FLAGS + 0xB8)
#define FLAG_ACHIEVEMENT_REWARD_18                   (SYSTEM_FLAGS + 0xB9)
#define FLAG_ACHIEVEMENT_REWARD_19                   (SYSTEM_FLAGS + 0xBA)
#define FLAG_ACHIEVEMENT_REWARD_20                   (SYSTEM_FLAGS + 0xBB)
#define FLAG_ACHIEVEMENT_REWARD_21                   (SYSTEM_FLAGS + 0xBC)
#define FLAG_ACHIEVEMENT_REWARD_22                   (SYSTEM_FLAGS + 0xBD)
#define FLAG_ACHIEVEMENT_REWARD_23                   (SYSTEM_FLAGS + 0xBE)
#define FLAG_ACHIEVEMENT_REWARD_24                   (SYSTEM_FLAGS + 0xBF)
#define FLAG_ACHIEVEMENT_REWARD_25                   (SYSTEM_FLAGS + 0x83)
#define FLAG_ACHIEVEMENT_REWARD_26                   (SYSTEM_FLAGS + 0x37)
#define FLAG_ACHIEVEMENT_REWARD_27                   (SYSTEM_FLAGS + 0x38)
#define FLAG_ACHIEVEMENT_REWARD_28                   (SYSTEM_FLAGS + 0x39)
#define FLAG_ACHIEVEMENT_REWARD_29                   (SYSTEM_FLAGS + 0x3)
#define FLAG_ACHIEVEMENT_REWARD_30                   0x4E7
#define FLAG_ACHIEVEMENT_REWARD_31                   0x479
#define FLAG_ACHIEVEMENT_REWARD_32                   0x339
#define FLAG_ACHIEVEMENT_REWARD_49                   0x4E8
#define FLAG_ACHIEVEMENT_REWARD_50                   0x4FF
#define FLAG_ACHIEVEMENT_REWARD_51                   0x4E9
#define FLAG_ACHIEVEMENT_REWARD_52    				 0x4B
#define FLAG_ACHIEVEMENT_REWARD_53                   0x64 
#define FLAG_ACHIEVEMENT_REWARD_54                   0x497
#define FLAG_ACHIEVEMENT_REWARD_66                   0x4EA
#define FLAG_ACHIEVEMENT_REWARD_67    				 0x4A
#define FLAG_ACHIEVEMENT_REWARD_96                   0x4EB
#define FLAG_ACHIEVEMENT_REWARD_97                   0x4EC
#define FLAG_ACHIEVEMENT_REWARD_98                   0x4ED
#define FLAG_ACHIEVEMENT_REWARD_99                   0x4EE
#define FLAG_ACHIEVEMENT_REWARD_100                  0x4EF
// Daily Flags
// These flags are cleared once per day
// The start and end are byte-aligned because the flags are cleared in byte increments
#define DAILY_FLAGS_START                           (FLAG_ACHIEVEMENT_REWARD_24 + (8 - FLAG_ACHIEVEMENT_REWARD_24 % 8))
#define FLAG_ROXANNE_REMATCH                        (DAILY_FLAGS_START + 0x0)  // Roxanne
#define FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY     (DAILY_FLAGS_START + 0x1)
#define FLAG_DAILY_SECRET_BASE                      (DAILY_FLAGS_START + 0x2)
#define FLAG_BRAWLY_REMATCH                         (DAILY_FLAGS_START + 0x3)  // Brawly
#define FLAG_WATTSON_REMATCH                        (DAILY_FLAGS_START + 0x4)  // Wattson
#define FLAG_FLANNERY_REMATCH                       (DAILY_FLAGS_START + 0x5)  // Flannery
#define FLAG_NORMAN_REMATCH                         (DAILY_FLAGS_START + 0x6)  // Norman
#define FLAG_WINONA_REMATCH                         (DAILY_FLAGS_START + 0x7)  // Winona
#define FLAG_TATE_AND_LIZA_REMATCH                  (DAILY_FLAGS_START + 0x8)  // Tate & Liza
#define FLAG_JUAN_REMATCH                           (DAILY_FLAGS_START + 0x9)  // Juan
#define FLAG_DAILY_PICKED_LOTO_TICKET               (DAILY_FLAGS_START + 0xA)
#define FLAG_DAILY_ROUTE_114_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xB)
#define FLAG_DAILY_ROUTE_111_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xC)
#define FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY      (DAILY_FLAGS_START + 0xD)
#define FLAG_DAILY_ROUTE_120_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xE)
#define FLAG_DAILY_LILYCOVE_RECEIVED_BERRY          (DAILY_FLAGS_START + 0xF)
#define FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY       (DAILY_FLAGS_START + 0x10)
#define FLAG_DAILY_BERRY_MASTERS_WIFE               (DAILY_FLAGS_START + 0x11)
#define FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY        (DAILY_FLAGS_START + 0x12)
#define FLAG_UNUSED_0x933                           (DAILY_FLAGS_START + 0x13) // Unused Flag
#define FLAG_DAILY_APPRENTICE_LEAVES                (DAILY_FLAGS_START + 0x14)

#define FLAG_OBTAINED_MIRAGE_TOWER_FOSSIL           (DAILY_FLAGS_START + 0x15) // Daily Fossil 1
#define FLAG_OBTAINED_DAILY_RELIC_CAVE_FOSSIL       (DAILY_FLAGS_START + 0x16) // Daily Fossil 2
#define FLAG_OBTAINED_ROUTE_111_DESERT_FOSSIL       (DAILY_FLAGS_START + 0x17) // Daily Fossil 3
#define FLAG_WILD_VOLCARONA                         (DAILY_FLAGS_START + 0x18) // Wild Volcarona
#define FLAG_DAILY_ABILITY_PATCH                    (DAILY_FLAGS_START + 0x19) // Ability Patch
#define FLAG_DAILY_EVOLUTION_ITEM                   (DAILY_FLAGS_START + 0x1A) // Daily Evolution Stone
#define FLAG_NEW_MAUVILLE_TURNED_OFF_GENERATOR      (DAILY_FLAGS_START + 0x1B) // Daily Rotom Battle
#define FLAG_DAILY_WILD_SNORLAX       			    (DAILY_FLAGS_START + 0x1C) // Wild Snorlax
#define FLAG_DAILY_WILD_SUDOWOODO                   (DAILY_FLAGS_START + 0x1D) // Wild Sudowoodo
#define FLAG_DAILY_WILD_KECKLEON                    (DAILY_FLAGS_START + 0x1E) // Wild Keckleon
#define FLAG_CHANGED_TIME                           (DAILY_FLAGS_START + 0x1F) // Start Menu
#define FLAG_DAILY_WILD_LAPRAS                      (DAILY_FLAGS_START + 0x20) // Wild Lapras
#define FLAG_FALKNER_REMATCH                        (DAILY_FLAGS_START + 0x21) // Rematch Flag
#define FLAG_BUGSY_REMATCH                          (DAILY_FLAGS_START + 0x22) // Rematch Flag
#define FLAG_WHITNEY_REMATCH                        (DAILY_FLAGS_START + 0x23) // Rematch Flag
#define FLAG_MORTY_REMATCH                          (DAILY_FLAGS_START + 0x24) // Rematch Flag
#define FLAG_CHUCK_REMATCH                          (DAILY_FLAGS_START + 0x25) // Rematch Flag
#define FLAG_JASMINE_REMATCH                        (DAILY_FLAGS_START + 0x26) // Rematch Flag
#define FLAG_PRYCE_REMATCH                          (DAILY_FLAGS_START + 0x27) // Rematch Flag
#define FLAG_CLAIR_REMATCH                          (DAILY_FLAGS_START + 0x28) // Rematch Flag
#define FLAG_UNUSED_0x949                           (DAILY_FLAGS_START + 0x29) // Unused Flag
#define FLAG_UNUSED_0x94A                           (DAILY_FLAGS_START + 0x2A) // Unused Flag
#define FLAG_UNUSED_0x94B                           (DAILY_FLAGS_START + 0x2B) // Unused Flag
#define FLAG_UNUSED_0x94C                           (DAILY_FLAGS_START + 0x2C) // Unused Flag
#define FLAG_UNUSED_0x94D                           (DAILY_FLAGS_START + 0x2D) // Unused Flag
#define FLAG_UNUSED_0x94E                           (DAILY_FLAGS_START + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x94F                           (DAILY_FLAGS_START + 0x2F) // Unused Flag
#define FLAG_UNUSED_0x950                           (DAILY_FLAGS_START + 0x30) // Unused Flag
#define FLAG_UNUSED_0x951                           (DAILY_FLAGS_START + 0x31) // Unused Flag
#define FLAG_UNUSED_0x952                           (DAILY_FLAGS_START + 0x32) // Unused Flag
#define FLAG_UNUSED_0x953                           (DAILY_FLAGS_START + 0x33) // Unused Flag
#define FLAG_UNUSED_0x954                           (DAILY_FLAGS_START + 0x34) // Unused Flag
#define FLAG_UNUSED_0x955                           (DAILY_FLAGS_START + 0x35) // Unused Flag
#define FLAG_UNUSED_0x956                           (DAILY_FLAGS_START + 0x36) // Unused Flag
#define FLAG_UNUSED_0x957                           (DAILY_FLAGS_START + 0x37) // Unused Flag
#define FLAG_UNUSED_0x958                           (DAILY_FLAGS_START + 0x38) // Unused Flag
#define FLAG_UNUSED_0x959                           (DAILY_FLAGS_START + 0x39) // Unused Flag
#define FLAG_DEFEATED_CYNTHIA                       (DAILY_FLAGS_START + 0x3A) // Unused Flag
#define FLAG_DEFEATED_GREEN                         (DAILY_FLAGS_START + 0x3B) // Green Battle
#define FLAG_DEFEATED_RED                           (DAILY_FLAGS_START + 0x3C) // Red Battle
#define FLAG_DEFEATED_STEVEN                        (DAILY_FLAGS_START + 0x3D) // Steven Battle
#define FLAG_UNUSED_0x95E                           (DAILY_FLAGS_START + 0x3E) // Unused Flag
#define FLAG_UNUSED_0x95F                           (DAILY_FLAGS_START + 0x3F) // Unused Flag
#define DAILY_FLAGS_END                             (FLAG_UNUSED_0x95F + (7 - FLAG_UNUSED_0x95F % 8))

#define NEW_FLAGS_START                                         DAILY_FLAGS_END
#define FLAG_WORLD_MAP_FIVE_ISLAND                              NEW_FLAGS_START +  1
#define FLAG_HIDE_FIVE_ISLAND_MEADOW_MAX_POTION                 NEW_FLAGS_START +  2
#define FLAG_HIDE_FIVE_ISLAND_MEADOW_PP_UP                      NEW_FLAGS_START +  3
#define FLAG_HIDE_FIVE_ISLAND_MEMORIAL_PILLAR_METAL_COAT        NEW_FLAGS_START +  4
#define FLAG_HIDE_FIVE_ISLAND_ROCKETS                           NEW_FLAGS_START +  5
#define FLAG_HIDE_RESORT_GORGEOUS_SELPHY                        NEW_FLAGS_START +  6
#define FLAG_GOT_TM42_AT_MEMORIAL_PILLAR                        NEW_FLAGS_START +  7
#define FLAG_NO_ROOM_FOR_TOGEPI_EGG                             NEW_FLAGS_START +  8
#define FLAG_UNLOCKED_ROCKET_WAREHOUSE                          NEW_FLAGS_START +  9
#define FLAG_LEARNED_YES_NAH_CHANSEY                            NEW_FLAGS_START + 10
#define FLAG_GOT_TOGEPI_EGG                                     NEW_FLAGS_START + 11
#define FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY                 NEW_FLAGS_START + 12
#define FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR                NEW_FLAGS_START + 13
#define FLAG_GOT_POLLEN_PUFF_TM                                 NEW_FLAGS_START + 14
#define FLAG_GOT_DAILY_RANDOM_ITEM_1                            NEW_FLAGS_START + 15
#define FLAG_HIDDEN_ITEM_FIVE_ISLAND_RESORT_GORGEOUS_NEST_BALL  NEW_FLAGS_START + 16
#define FLAG_HIDDEN_ITEM_FIVE_ISLAND_RESORT_GORGEOUS_STARDUST_2 NEW_FLAGS_START + 17
#define FLAG_HIDDEN_ITEM_FIVE_ISLAND_RESORT_GORGEOUS_STARDUST   NEW_FLAGS_START + 18
#define FLAG_HIDDEN_ITEM_FIVE_ISLAND_RESORT_GORGEOUS_STAR_PIECE NEW_FLAGS_START + 19
#define FLAG_HIDE_SEVEN_ISLAND_SEVAULT_CANYON_HOUSE_LUCKY_PUNCH NEW_FLAGS_START + 20
#define FLAG_SEVEN_ISLAND_SEVAULT_CANYON_ENTRANCE_RAWST_BERRY   NEW_FLAGS_START + 21
#define FLAG_GOT_DAILY_RANDOM_ITEM_2                            NEW_FLAGS_START + 22
#define FLAG_HIDE_SEVEN_ISLAND_SEVAULT_CANYON_KINGS_ROCK        NEW_FLAGS_START + 23
#define FLAG_GOT_DAILY_RANDOM_ITEM_3                            NEW_FLAGS_START + 24
#define FLAG_GOT_DAILY_RANDOM_ITEM_4                            NEW_FLAGS_START + 25
#define FLAG_GOT_DAILY_RANDOM_ITEM_5                            NEW_FLAGS_START + 26
#define FLAG_GOT_DAILY_RANDOM_ITEM_6                            NEW_FLAGS_START + 27
#define FLAG_GOT_DAILY_RANDOM_ITEM_7                            NEW_FLAGS_START + 28
#define FLAG_GOT_DAILY_RANDOM_ITEM_8                            NEW_FLAGS_START + 29
#define FLAG_GOT_DAILY_NASTY_PLOT_TM                            NEW_FLAGS_START + 30
#define FLAG_ENABLE_POST_RAYQUAZA_CONTENT                       NEW_FLAGS_START + 31
#define FLAG_FOLLOWER_IS_ENABLED                                NEW_FLAGS_START + 32
#define FLAG_SYS_DISABLE_AUTOMATIC_SEASON                       NEW_FLAGS_START + 33
#define FLAG_SYS_DISABLE_SCALED_TRAINERS                        NEW_FLAGS_START + 34
#define FLAG_GOT_SEVII_TICKET_1                                 NEW_FLAGS_START + 35
#define FLAG_GOT_SEVII_TICKET_2                                 NEW_FLAGS_START + 36
#define FLAG_GOT_SEVII_TICKET_3                                 NEW_FLAGS_START + 37
#define FLAG_GOT_SEVII_TICKET_4                                 NEW_FLAGS_START + 38
#define FLAG_GOT_SEVII_TICKET_5                                 NEW_FLAGS_START + 39
#define FLAG_GOT_SEVII_TICKET_6                                 NEW_FLAGS_START + 40
#define FLAG_GOT_SEVII_TICKET_7                                 NEW_FLAGS_START + 41
#define FLAG_GOT_SEVII_TICKET_8                                 NEW_FLAGS_START + 42
#define FLAG_DEFEATED_ALL_GYMS                                  NEW_FLAGS_START + 43

#define FLAG_VISITED_ONE_ISLAND                 				NEW_FLAGS_START + 44
#define FLAG_VISITED_TWO_ISLAND                  				NEW_FLAGS_START + 45
#define FLAG_VISITED_THREE_ISLAND                   			NEW_FLAGS_START + 46
#define FLAG_VISITED_FOUR_ISLAND                                NEW_FLAGS_START + 47
#define FLAG_VISITED_FIVE_ISLAND                                NEW_FLAGS_START + 48
#define FLAG_VISITED_SIX_ISLAND                                 NEW_FLAGS_START + 49
#define FLAG_VISITED_SEVEN_ISLAND                               NEW_FLAGS_START + 50
#define FLAG_VISITED_EIGHT_ISLAND                               NEW_FLAGS_START + 51
#define FLAG_VISITED_UNUSED_DESTINATION_1                       NEW_FLAGS_START + 52
#define FLAG_VISITED_UNUSED_DESTINATION_2                       NEW_FLAGS_START + 53
#define FLAG_VISITED_UNUSED_DESTINATION_3                       NEW_FLAGS_START + 54
#define FLAG_VISITED_UNUSED_DESTINATION_4                       NEW_FLAGS_START + 55
#define FLAG_VISITED_UNUSED_DESTINATION_5                       NEW_FLAGS_START + 56
#define FLAG_VISITED_UNUSED_DESTINATION_6                       NEW_FLAGS_START + 57
#define FLAG_VISITED_UNUSED_DESTINATION_7                       NEW_FLAGS_START + 58
#define FLAG_HIDE_EIGHT_ISLAND_CAVE_2_DRAGON_DANCE_TM           NEW_FLAGS_START + 59
#define FLAG_HIDE_ICEFALL_CAVE_FROST_BREATH_TM                  NEW_FLAGS_START + 60
#define FLAG_HIDE_TM_BALL_ITEM_TM104                            NEW_FLAGS_START + 61
#define FLAG_HIDE_TM_BALL_ITEM_TM81                             NEW_FLAGS_START + 62
#define FLAG_HIDE_TM_BALL_ITEM_TM30                             NEW_FLAGS_START + 63
#define FLAG_HIDE_TM_BALL_ITEM_TM74                             NEW_FLAGS_START + 64
#define FLAG_HIDE_TM_BALL_ITEM_TM88                             NEW_FLAGS_START + 65
#define FLAG_HIDE_TM_BALL_ITEM_TM103                            NEW_FLAGS_START + 65
#define FLAG_HIDE_TM_BALL_ITEM_TM101                            NEW_FLAGS_START + 66
#define FLAG_HIDE_TM_BALL_ITEM_TM91                             NEW_FLAGS_START + 67
#define FLAG_HIDE_TM_BALL_ITEM_TM78                             NEW_FLAGS_START + 68

#define FLAG_GOT_ALCREMIE_MEGA_STONE                            NEW_FLAGS_START + 69
#define FLAG_GOT_APPLETUN_MEGA_STONE                            NEW_FLAGS_START + 70
#define FLAG_GOT_BUTTERFREE_MEGA_STONE                          NEW_FLAGS_START + 71
#define FLAG_GOT_CENTISKORCH_MEGA_STONE                         NEW_FLAGS_START + 72
#define FLAG_GOT_COALOSSAL_MEGA_STONE                           NEW_FLAGS_START + 73
#define FLAG_GOT_CORVIKNIGHT_MEGA_STONE                         NEW_FLAGS_START + 74
#define FLAG_GOT_DREDNAW_MEGA_STONE                             NEW_FLAGS_START + 75
#define FLAG_GOT_FLAPPLE_MEGA_STONE                             NEW_FLAGS_START + 76
#define FLAG_GOT_GARBODOR_MEGA_STONE                            NEW_FLAGS_START + 77
#define FLAG_GOT_HATTERENE_MEGA_STONE                           NEW_FLAGS_START + 78
#define FLAG_GOT_KINGLER_MEGA_STONE                             NEW_FLAGS_START + 79
#define FLAG_GOT_LAPRAS_MEGA_STONE                              NEW_FLAGS_START + 80
#define FLAG_GOT_MACHAMP_MEGA_STONE                             NEW_FLAGS_START + 81
#define FLAG_GOT_ORBEETLE_MEGA_STONE                            NEW_FLAGS_START + 82
#define FLAG_GOT_SANDACONDA_MEGA_STONE                          NEW_FLAGS_START + 83
#define FLAG_GOT_SNORLAX_MEGA_STONE                             NEW_FLAGS_START + 84

#define FLAG_GOT_BADGE_01                                       NEW_FLAGS_START + 85
#define FLAG_GOT_BADGE_02                                       NEW_FLAGS_START + 86
#define FLAG_GOT_BADGE_03                                       NEW_FLAGS_START + 87
#define FLAG_GOT_BADGE_04                                       NEW_FLAGS_START + 88
#define FLAG_GOT_BADGE_05                                       NEW_FLAGS_START + 89
#define FLAG_GOT_BADGE_06                                       NEW_FLAGS_START + 90
#define FLAG_GOT_BADGE_07                                       NEW_FLAGS_START + 91
#define FLAG_GOT_BADGE_08                                       NEW_FLAGS_START + 92
#define FLAG_GOT_BADGE_09                                       NEW_FLAGS_START + 93
#define FLAG_GOT_BADGE_10                                       NEW_FLAGS_START + 94
#define FLAG_GOT_BADGE_11                                       NEW_FLAGS_START + 95
#define FLAG_GOT_BADGE_12                                       NEW_FLAGS_START + 96
#define FLAG_GOT_BADGE_13                                       NEW_FLAGS_START + 97
#define FLAG_GOT_BADGE_14                                       NEW_FLAGS_START + 98
#define FLAG_GOT_BADGE_15                                       NEW_FLAGS_START + 99
#define FLAG_GOT_BADGE_16                                       NEW_FLAGS_START + 100
#define FLAG_HIDE_GYM_MONS                                      NEW_FLAGS_START + 101
#define FLAG_IS_MOVE_TUTOR                                      NEW_FLAGS_START + 102
#define FLAG_USING_FLYING_TAXIS                                 NEW_FLAGS_START + 103
#define FLAG_MYSTERY_GIFT_GALARIAN_ARTICUNO                     NEW_FLAGS_START + 104
#define FLAG_MYSTERY_GIFT_GALARIAN_ZAPDOS                       NEW_FLAGS_START + 105
#define FLAG_MYSTERY_GIFT_GALARIAN_MOLTRES                      NEW_FLAGS_START + 106

#define FLAGS_COUNT                                         9135 //Added 3000 new flags

// Special Flags (Stored in EWRAM (gSpecialFlags), not in the SaveBlock)
#define SPECIAL_FLAGS_START                     16384
#define FLAG_HIDE_MAP_NAME_POPUP                (SPECIAL_FLAGS_START + 0x0)
#define FLAG_DONT_TRANSITION_MUSIC              (SPECIAL_FLAGS_START + 0x1)
#define FLAG_ENABLE_MULTI_CORRIDOR_DOOR         (SPECIAL_FLAGS_START + 0x2)
#define FLAG_SPECIAL_FLAG_UNUSED_0x4003         (SPECIAL_FLAGS_START + 0x3) // Unused Flag
#define FLAG_STORING_ITEMS_IN_PYRAMID_BAG       (SPECIAL_FLAGS_START + 0x4)
// FLAG_SPECIAL_FLAG_0x4005 - 0x407F also exist and are unused
#define SPECIAL_FLAGS_END                       (SPECIAL_FLAGS_START + 0x7F)

#define NUM_BADGES            16
#define NUM_BADGES_PER_REGION 8

#endif // GUARD_CONSTANTS_FLAGS_H
