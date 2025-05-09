#ifndef GUARD_CONSTANTS_POKEMON_H
#define GUARD_CONSTANTS_POKEMON_H

// Pokemon types
#define TYPE_NONE             255
#define TYPE_NORMAL           0
#define TYPE_FIGHTING         1
#define TYPE_FLYING           2
#define TYPE_POISON           3
#define TYPE_GROUND           4
#define TYPE_ROCK             5
#define TYPE_BUG              6
#define TYPE_GHOST            7
#define TYPE_STEEL            8
#define TYPE_MYSTERY          9
#define TYPE_FIRE             10
#define TYPE_WATER            11
#define TYPE_GRASS            12
#define TYPE_ELECTRIC         13
#define TYPE_PSYCHIC          14
#define TYPE_ICE              15
#define TYPE_DRAGON           16
#define TYPE_DARK             17
#define TYPE_FAIRY            18
#define NUMBER_OF_MON_TYPES   19

// Pokemon egg groups
#define EGG_GROUP_NONE          0
#define EGG_GROUP_MONSTER       1
#define EGG_GROUP_WATER_1       2
#define EGG_GROUP_BUG           3
#define EGG_GROUP_FLYING        4
#define EGG_GROUP_FIELD         5
#define EGG_GROUP_FAIRY         6
#define EGG_GROUP_GRASS         7
#define EGG_GROUP_HUMAN_LIKE    8
#define EGG_GROUP_WATER_3       9
#define EGG_GROUP_MINERAL       10
#define EGG_GROUP_AMORPHOUS     11
#define EGG_GROUP_WATER_2       12
#define EGG_GROUP_DITTO         13
#define EGG_GROUP_DRAGON        14
#define EGG_GROUP_UNDISCOVERED  15

#define EGG_GROUPS_PER_MON      2

// Pokemon natures
#define NATURE_HARDY    0
#define NATURE_LONELY   1
#define NATURE_BRAVE    2
#define NATURE_ADAMANT  3
#define NATURE_NAUGHTY  4
#define NATURE_BOLD     5
#define NATURE_DOCILE   6
#define NATURE_RELAXED  7
#define NATURE_IMPISH   8
#define NATURE_LAX      9
#define NATURE_TIMID    10
#define NATURE_HASTY    11
#define NATURE_SERIOUS  12
#define NATURE_JOLLY    13
#define NATURE_NAIVE    14
#define NATURE_MODEST   15
#define NATURE_MILD     16
#define NATURE_QUIET    17
#define NATURE_BASHFUL  18
#define NATURE_RASH     19
#define NATURE_CALM     20
#define NATURE_GENTLE   21
#define NATURE_SASSY    22
#define NATURE_CAREFUL  23
#define NATURE_QUIRKY   24
#define NUM_NATURES     25

// Pokemon Stats
#define STAT_HP      0
#define STAT_ATK     1
#define STAT_DEF     2
#define STAT_SPEED   3
#define STAT_SPATK   4
#define STAT_SPDEF   5
#define STAT_ACC     6 // Only in battles.
#define STAT_EVASION 7 // Only in battles.


#define NUM_NATURE_STATS NUM_STATS - 1 // excludes HP
#define NUM_BATTLE_STATS NUM_STATS + 2 // includes Accuracy and Evasion

//For Signature Moves
#define STAT_HIGHEST_ATTACK      NUM_BATTLE_STATS + 1
#define STAT_LOWEST_ATTACK       NUM_BATTLE_STATS + 2
#define STAT_HIGHEST_DEFENSE     NUM_BATTLE_STATS + 3
#define STAT_LOWEST_DEFENSE      NUM_BATTLE_STATS + 4

#define MIN_STAT_STAGE     0
#define DEFAULT_STAT_STAGE 6
#define MAX_STAT_STAGE    12

// Shiny odds
#define SHINY_ODDS                  16 // Actual probability is SHINY_ODDS/65536
#define SHINY_ODDS_WITH_SHINY_CHARM 32 // Actual probability is SHINY_ODDS/65536

// Flags for Get(Box)MonData / Set(Box)MonData
#define MON_DATA_PERSONALITY        0
#define MON_DATA_OT_ID              1
#define MON_DATA_NICKNAME           2
#define MON_DATA_LANGUAGE           3
#define MON_DATA_SANITY_IS_BAD_EGG  4
#define MON_DATA_SANITY_HAS_SPECIES 5
#define MON_DATA_SANITY_IS_EGG      6
#define MON_DATA_OT_NAME            7
#define MON_DATA_MARKINGS           8
#define MON_DATA_CHECKSUM           9
#define MON_DATA_ENCRYPT_SEPARATOR 10
#define MON_DATA_SPECIES           11
#define MON_DATA_HELD_ITEM         12
#define MON_DATA_MOVE1             13
#define MON_DATA_MOVE2             14
#define MON_DATA_MOVE3             15
#define MON_DATA_MOVE4             16
#define MON_DATA_PP1               17
#define MON_DATA_PP2               18
#define MON_DATA_PP3               19
#define MON_DATA_PP4               20
#define MON_DATA_PP_BONUSES        21
#define MON_DATA_COOL              22
#define MON_DATA_BEAUTY            23
#define MON_DATA_CUTE              24
#define MON_DATA_EXP               25
#define MON_DATA_HP_EV             26
#define MON_DATA_ATK_EV            27
#define MON_DATA_DEF_EV            28
#define MON_DATA_SPEED_EV          29
#define MON_DATA_SPATK_EV          30
#define MON_DATA_SPDEF_EV          31
#define MON_DATA_FRIENDSHIP        32
#define MON_DATA_SMART             33
#define MON_DATA_POKERUS           34
#define MON_DATA_MET_LOCATION      35
#define MON_DATA_MET_LEVEL         36
#define MON_DATA_MET_GAME          37
#define MON_DATA_POKEBALL          38
#define MON_DATA_HP_IV             39
#define MON_DATA_ATK_IV            40
#define MON_DATA_DEF_IV            41
#define MON_DATA_SPEED_IV          42
#define MON_DATA_SPATK_IV          43
#define MON_DATA_SPDEF_IV          44
#define MON_DATA_IS_EGG            45
#define MON_DATA_ABILITY_NUM       46
#define MON_DATA_TOUGH             47
#define MON_DATA_SHEEN             48
#define MON_DATA_OT_GENDER         49
#define MON_DATA_COOL_RIBBON       50
#define MON_DATA_BEAUTY_RIBBON     51
#define MON_DATA_CUTE_RIBBON       52
#define MON_DATA_SMART_RIBBON      53
#define MON_DATA_TOUGH_RIBBON      54
#define MON_DATA_STATUS            55
#define MON_DATA_LEVEL             56
#define MON_DATA_HP                57
#define MON_DATA_MAX_HP            58
#define MON_DATA_ATK               59
#define MON_DATA_DEF               60
#define MON_DATA_SPEED             61
#define MON_DATA_SPATK             62
#define MON_DATA_SPDEF             63
#define MON_DATA_MAIL              64
#define MON_DATA_SPECIES2          65
#define MON_DATA_IVS               66
#define MON_DATA_CHAMPION_RIBBON   67
#define MON_DATA_WINNING_RIBBON    68
#define MON_DATA_VICTORY_RIBBON    69
#define MON_DATA_ARTIST_RIBBON     70
#define MON_DATA_EFFORT_RIBBON     71
#define MON_DATA_GIFT_RIBBON_1     72
#define MON_DATA_GIFT_RIBBON_2     73
#define MON_DATA_GIFT_RIBBON_3     74
#define MON_DATA_GIFT_RIBBON_4     75
#define MON_DATA_GIFT_RIBBON_5     76
#define MON_DATA_GIFT_RIBBON_6     77
#define MON_DATA_GIFT_RIBBON_7     78
#define MON_DATA_IS_EVENT          79
#define MON_DATA_IS_SHINY          80
#define MON_DATA_KNOWN_MOVES       81
#define MON_DATA_RIBBON_COUNT      82
#define MON_DATA_RIBBONS           83
#define MON_DATA_ATK2              84
#define MON_DATA_DEF2              85
#define MON_DATA_SPEED2            86
#define MON_DATA_SPATK2            87
#define MON_DATA_SPDEF2            88
#define MON_DATA_FORM_ID           89
#define MON_DATA_NATURE            90
#define MON_DATA_EXIOLITE_ENABLED  91
#define MON_DATA_STYLE             92
#define MON_DATA_IS_ALPHA          93
#define MON_DATA_HP_TYPE           94
#define MON_DATA_SPEED_DOWN        95
#define MON_DATA_CAUGHT_SEASON     96

#define MIN_LEVEL 1
#define MAX_LEVEL 100

#define OT_ID_PLAYER_ID       0
#define OT_ID_PRESET          1
#define OT_ID_RANDOM_NO_SHINY 2
#define OT_ID_RANDOM_FORCED_SHINY 3

#define MON_GIVEN_TO_PARTY      0
#define MON_GIVEN_TO_PC         1
#define MON_CANT_GIVE           2

#define PLAYER_HAS_TWO_USABLE_MONS     0
#define PLAYER_HAS_ONE_MON             1
#define PLAYER_HAS_ONE_USABLE_MON      2

#define MON_ALREADY_KNOWS_MOVE  0xFFFE
#define MON_HAS_MAX_MOVES       0xFFFF

#define LEVEL_UP_MOVE_ID   0x01FF
#define LEVEL_UP_MOVE_LV   0xFE00
#define LEVEL_UP_END       0xFFFF

#define MAX_LEVEL_DIFF_PRE_EV    5
#define MAX_LEVEL_UP_MOVES       40

#define MON_MALE       0x00
#define MON_FEMALE     0xFE
#define MON_GENDERLESS 0xFF

#define HIDDEN_NATURE_NONE      0  // 25 natures. not 0xFF to conserve bits


// Constants for AdjustFriendship
#define FRIENDSHIP_EVENT_GROW_LEVEL       0
#define FRIENDSHIP_EVENT_VITAMIN          1 // unused, handled by PokemonUseItemEffects
#define FRIENDSHIP_EVENT_BATTLE_ITEM      2 // unused, handled by PokemonUseItemEffects
#define FRIENDSHIP_EVENT_LEAGUE_BATTLE    3
#define FRIENDSHIP_EVENT_LEARN_TMHM       4
#define FRIENDSHIP_EVENT_WALKING          5
#define FRIENDSHIP_EVENT_FAINT_SMALL      6
#define FRIENDSHIP_EVENT_FAINT_FIELD_PSN  7
#define FRIENDSHIP_EVENT_FAINT_LARGE      8 // If opponent was >= 30 levels higher. See AdjustFriendshipOnBattleFaint

#define MAX_FRIENDSHIP  0xFF

#define STATUS_PRIMARY_NONE      0
#define STATUS_PRIMARY_POISON    1
#define STATUS_PRIMARY_PARALYSIS 2
#define STATUS_PRIMARY_SLEEP     3
#define STATUS_PRIMARY_FREEZE    4
#define STATUS_PRIMARY_BURN      5
#define STATUS_PRIMARY_POKERUS   6
#define STATUS_PRIMARY_FAINTED   7

#define MAX_PER_STAT_EVS    252
#define MAX_TOTAL_EVS       510
#define EV_ITEM_RAISE_LIMIT MAX_PER_STAT_EVS

#define UNOWN_FORM_COUNT 28

// Battle move flags
#define FLAG_MAKES_CONTACT          (1 << 0)
#define FLAG_PROTECT_AFFECTED       (1 << 1)
#define FLAG_MAGICCOAT_AFFECTED     (1 << 2)
#define FLAG_MAGIC_COAT_AFFECTED    (1 << 2) //Same as the above
#define FLAG_SNATCH_AFFECTED        (1 << 3)
#define FLAG_MIRROR_MOVE_AFFECTED   (1 << 4)
#define FLAG_KINGSROCK_AFFECTED     (1 << 5)
#define FLAG_HIGH_CRIT              (1 << 6)
#define FLAG_RECKLESS_BOOST         (1 << 7)
#define FLAG_IRON_FIST_BOOST        (1 << 8)
#define FLAG_SHEER_FORCE_BOOST      (1 << 9)
#define FLAG_STRONG_JAW_BOOST       (1 << 10)
#define FLAG_MEGA_LAUNCHER_BOOST    (1 << 11)
#define FLAG_STAT_STAGES_IGNORED    (1 << 12)
#define FLAG_DMG_MINIMIZE           (1 << 13)
#define FLAG_DMG_UNDERGROUND        (1 << 14)
#define FLAG_DMG_UNDERWATER         (1 << 15)
#define FLAG_SOUND                  (1 << 16)
#define FLAG_BALLISTIC              (1 << 17)
#define FLAG_PROTECTION_MOVE        (1 << 18)
#define FLAG_POWDER                 (1 << 19)
#define FLAG_TARGET_ABILITY_IGNORED (1 << 20)
#define FLAG_DANCE                  (1 << 21)
#define FLAG_DMG_IN_AIR             (1 << 22) // X2 dmg on air, always hits target on air
#define FLAG_HIT_IN_AIR             (1 << 23) // dmg is normal, always hits target on air
#define FLAG_STRIKER_BOOST          (1 << 24)
#define FLAG_BLADEMASTER_BOOST      (1 << 25)
#define FLAG_WIND_BASED             (1 << 26)

// Split defines.
#define SPLIT_PHYSICAL  0
#define SPLIT_SPECIAL   1
#define SPLIT_STATUS    2
#define SPLIT_HIGHEST   3 //Uses the highest stat
#define SPLIT_WEAKEST   4 //Uses the weakest stat

// Growth rates
#define GROWTH_MEDIUM_FAST  0
#define GROWTH_ERRATIC      1
#define GROWTH_FLUCTUATING  2
#define GROWTH_MEDIUM_SLOW  3
#define GROWTH_FAST         4
#define GROWTH_SLOW         5

// Body colors for pokedex search
#define BODY_COLOR_RED      0
#define BODY_COLOR_BLUE     1
#define BODY_COLOR_YELLOW   2
#define BODY_COLOR_GREEN    3
#define BODY_COLOR_BLACK    4
#define BODY_COLOR_BROWN    5
#define BODY_COLOR_PURPLE   6
#define BODY_COLOR_GRAY     7
#define BODY_COLOR_WHITE    8
#define BODY_COLOR_PINK     9

#define F_SUMMARY_SCREEN_FLIP_SPRITE 0x80

// Evolution types
#define EVO_MEGA_EVOLUTION                0xffff // Not an actual evolution, used to temporarily mega evolve in battle.
#define EVO_MOVE_MEGA_EVOLUTION           0xfffe // Mega Evolution that checks for a move instead of held item.
#define EVO_FRIENDSHIP                    1      // Pokémon levels up with friendship ≥ 220
#define EVO_FRIENDSHIP_DAY                2      // Pokémon levels up during the day with friendship ≥ 220
#define EVO_FRIENDSHIP_NIGHT              3      // Pokémon levels up at night with friendship ≥ 220
#define EVO_LEVEL                         4      // Pokémon reaches the specified level
#define EVO_TRADE                         5      // Pokémon is traded
#define EVO_TRADE_ITEM                    6      // Pokémon is traded while it's holding the specified item
#define EVO_ITEM                          7      // specified item is used on Pokémon
#define EVO_LEVEL_ATK_GT_DEF              8      // Pokémon reaches the specified level with attack > defense
#define EVO_LEVEL_ATK_EQ_DEF              9      // Pokémon reaches the specified level with attack = defense
#define EVO_LEVEL_ATK_LT_DEF              10     // Pokémon reaches the specified level with attack < defense
#define EVO_LEVEL_SILCOON                 11     // Pokémon reaches the specified level with a Silcoon personality value
#define EVO_LEVEL_CASCOON                 12     // Pokémon reaches the specified level with a Cascoon personality value
#define EVO_LEVEL_NINJASK                 13     // Pokémon reaches the specified level (special value for Ninjask)
#define EVO_LEVEL_SHEDINJA                14     // Pokémon reaches the specified level (special value for Shedinja)
#define EVO_BEAUTY                        15     // Pokémon levels up with beauty ≥ specified value
#define EVO_LEVEL_FEMALE                  16     // Pokémon reaches the specified level, is female
#define EVO_LEVEL_MALE                    17     // Pokémon reaches the specified level, is male
#define EVO_LEVEL_NIGHT                   18     // Pokémon reaches the specified level, is night
#define EVO_LEVEL_DAY                     19     // Pokémon reaches the specified level, is day
#define EVO_LEVEL_DUSK                    20     // Pokémon reaches the specified level, is dusk (5-6 P.M)
#define EVO_ITEM_HOLD_DAY                 21     // Pokémon levels up, holds specified item at day
#define EVO_ITEM_HOLD_NIGHT               22     // Pokémon levels up, holds specified item at night
#define EVO_MOVE                          23     // Pokémon levels up, knows specified move
#define EVO_MOVE_TYPE                     24     // Pokémon levels up, knows move with specified type
#define EVO_MAPSEC                        25     // Pokémon levels up on specified mapsec
#define EVO_ITEM_MALE                     26     // specified item is used on a male Pokémon
#define EVO_ITEM_FEMALE                   27     // specified item is used on a female Pokémon
#define EVO_LEVEL_RAIN                    28     // Pokémon reaches the specified level while it's raining
#define EVO_SPECIFIC_MON_IN_PARTY         29     // Pokémon levels up with a specified Pokémon in party
#define EVO_LEVEL_DARK_TYPE_MON_IN_PARTY  30     // Pokémon reaches the specified level with a Dark Type Pokémon in party
#define EVO_TRADE_SPECIFIC_MON            31     // Pokémon is traded for a specified Pokémon
#define EVO_SPECIFIC_MAP                  32     // Pokémon levels up on specified map
#define EVO_ITEM_SEVII                    33     // specified item is used on Pokémon while holding a Strange Souvenir
#define EVO_LEVEL_NIGHT_ALOLA             34     // Pokémon reaches the specified level, is night, holding Strange Souvenir
#define EVO_VIVILLON             		  35     // Vivillon evolution
#define EVO_LEVEL_RARE_FORMS   		      36     // Toxel, Dunsparce and Tandemaus Only
#define EVO_ALCREMIE             		  37     // 
#define EVO_MELMETAL             		  38     // Meltan Only
#define EVO_LEVEL_EXIOLITE                39     // Pokémon reaches the specified level + Can Be Disabled
#define EVO_EXIOLITE             		  40     // These Pokémon don't evolve but get their stats with exiolite and evolite boost
#define EVO_LEVEL_SEVII             	  41     // Pokémon reaches the specified level, holding Strange Souvenir
#define EVO_LEVEL_NOT_SEVII               42     // Pokémon reaches the specified level, holding Strange Souvenir
#define EVO_ITEM_NOT_SEVII                44

#define EVOS_PER_MON 10

//#define POKEMON_FAMILIES 465
#define POKEMON_FAMILIES 469

#define NUM_MALE_LINK_FACILITY_CLASSES   8
#define NUM_FEMALE_LINK_FACILITY_CLASSES 8

// Pokémon animation function ids (for front and back)
// Each front anim uses 1, and each back anim uses a set of 3
#define ANIM_V_SQUISH_AND_BOUNCE                0
#define ANIM_CIRCULAR_STRETCH_TWICE             1
#define ANIM_H_VIBRATE                          2
#define ANIM_H_SLIDE                            3
#define ANIM_V_SLIDE                            4
#define ANIM_BOUNCE_ROTATE_TO_SIDES             5
#define ANIM_V_JUMPS_H_JUMPS                    6
#define ANIM_ROTATE_TO_SIDES                    7
#define ANIM_ROTATE_TO_SIDES_TWICE              8
#define ANIM_GROW_VIBRATE                       9
#define ANIM_ZIGZAG_FAST                        10
#define ANIM_SWING_CONCAVE                      11
#define ANIM_SWING_CONCAVE_FAST                 12
#define ANIM_SWING_CONVEX                       13
#define ANIM_SWING_CONVEX_FAST                  14
#define ANIM_H_SHAKE                            15
#define ANIM_V_SHAKE                            16
#define ANIM_CIRCULAR_VIBRATE                   17
#define ANIM_TWIST                              18
#define ANIM_SHRINK_GROW                        19
#define ANIM_CIRCLE_C_CLOCKWISE                 20
#define ANIM_GLOW_BLACK                         21
#define ANIM_H_STRETCH                          22
#define ANIM_V_STRETCH                          23
#define ANIM_RISING_WOBBLE                      24
#define ANIM_V_SHAKE_TWICE                      25
#define ANIM_TIP_MOVE_FORWARD                   26
#define ANIM_H_PIVOT                            27
#define ANIM_V_SLIDE_WOBBLE                     28
#define ANIM_H_SLIDE_WOBBLE                     29
#define ANIM_V_JUMPS_BIG                        30
#define ANIM_SPIN_LONG                          31
#define ANIM_GLOW_ORANGE                        32
#define ANIM_GLOW_RED                           33
#define ANIM_GLOW_BLUE                          34
#define ANIM_GLOW_YELLOW                        35
#define ANIM_GLOW_PURPLE                        36
#define ANIM_BACK_AND_LUNGE                     37
#define ANIM_BACK_FLIP                          38
#define ANIM_FLICKER                            39
#define ANIM_BACK_FLIP_BIG                      40
#define ANIM_FRONT_FLIP                         41
#define ANIM_TUMBLING_FRONT_FLIP                42
#define ANIM_FIGURE_8                           43
#define ANIM_FLASH_YELLOW                       44
#define ANIM_SWING_CONCAVE_FAST_SHORT           45
#define ANIM_SWING_CONVEX_FAST_SHORT            46
#define ANIM_ROTATE_UP_SLAM_DOWN                47
#define ANIM_DEEP_V_SQUISH_AND_BOUNCE           48
#define ANIM_H_JUMPS                            49
#define ANIM_H_JUMPS_V_STRETCH                  50
#define ANIM_ROTATE_TO_SIDES_FAST               51
#define ANIM_ROTATE_UP_TO_SIDES                 52
#define ANIM_FLICKER_INCREASING                 53
#define ANIM_TIP_HOP_FORWARD                    54
#define ANIM_PIVOT_SHAKE                        55
#define ANIM_TIP_AND_SHAKE                      56
#define ANIM_VIBRATE_TO_CORNERS                 57
#define ANIM_GROW_IN_STAGES                     58
#define ANIM_V_SPRING                           59
#define ANIM_V_REPEATED_SPRING                  60
#define ANIM_SPRING_RISING                      61
#define ANIM_H_SPRING                           62
#define ANIM_H_REPEATED_SPRING_SLOW             63
#define ANIM_H_SLIDE_SHRINK                     64
#define ANIM_LUNGE_GROW                         65
#define ANIM_CIRCLE_INTO_BG                     66
#define ANIM_RAPID_H_HOPS                       67
#define ANIM_FOUR_PETAL                         68
#define ANIM_V_SQUISH_AND_BOUNCE_SLOW           69
#define ANIM_H_SLIDE_SLOW                       70
#define ANIM_V_SLIDE_SLOW                       71
#define ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL       72
#define ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW        73
#define ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW  74
#define ANIM_ZIGZAG_SLOW                        75
#define ANIM_H_SHAKE_SLOW                       76
#define ANIM_V_SHAKE_SLOW                       77
#define ANIM_TWIST_TWICE                        78
#define ANIM_CIRCLE_C_CLOCKWISE_SLOW            79
#define ANIM_V_SHAKE_TWICE_SLOW                 80
#define ANIM_V_SLIDE_WOBBLE_SMALL               81
#define ANIM_V_JUMPS_SMALL                      82
#define ANIM_SPIN                               83
#define ANIM_TUMBLING_FRONT_FLIP_TWICE          84
#define ANIM_DEEP_V_SQUISH_AND_BOUNCE_TWICE     85
#define ANIM_H_JUMPS_V_STRETCH_TWICE            86
#define ANIM_V_SHAKE_BACK                       87
#define ANIM_V_SHAKE_BACK_SLOW                  88
#define ANIM_V_SHAKE_H_SLIDE_SLOW               89
#define ANIM_V_STRETCH_BOTH_ENDS_SLOW           90
#define ANIM_H_STRETCH_FAR_SLOW                 91
#define ANIM_V_SHAKE_LOW_TWICE                  92
#define ANIM_H_SHAKE_FAST                       93
#define ANIM_H_SLIDE_FAST                       94
#define ANIM_H_VIBRATE_FAST                     95
#define ANIM_H_VIBRATE_FASTEST                  96
#define ANIM_V_SHAKE_BACK_FAST                  97
#define ANIM_V_SHAKE_LOW_TWICE_SLOW             98
#define ANIM_V_SHAKE_LOW_TWICE_FAST             99
#define ANIM_CIRCLE_C_CLOCKWISE_LONG            100
#define ANIM_GROW_STUTTER_SLOW                  101
#define ANIM_V_SHAKE_H_SLIDE                    102
#define ANIM_V_SHAKE_H_SLIDE_FAST               103
#define ANIM_TRIANGLE_DOWN_SLOW                 104
#define ANIM_TRIANGLE_DOWN                      105
#define ANIM_TRIANGLE_DOWN_TWICE                106
#define ANIM_GROW                               107
#define ANIM_GROW_TWICE                         108
#define ANIM_H_SPRING_FAST                      109
#define ANIM_H_SPRING_SLOW                      110
#define ANIM_H_REPEATED_SPRING_FAST             111
#define ANIM_H_REPEATED_SPRING                  112
#define ANIM_SHRINK_GROW_FAST                   113
#define ANIM_SHRINK_GROW_SLOW                   114
#define ANIM_V_STRETCH_BOTH_ENDS                115
#define ANIM_V_STRETCH_BOTH_ENDS_TWICE          116
#define ANIM_H_STRETCH_FAR_TWICE                117
#define ANIM_H_STRETCH_FAR                      118
#define ANIM_GROW_STUTTER_TWICE                 119
#define ANIM_GROW_STUTTER                       120
#define ANIM_CONCAVE_ARC_LARGE_SLOW             121
#define ANIM_CONCAVE_ARC_LARGE                  122
#define ANIM_CONCAVE_ARC_LARGE_TWICE            123
#define ANIM_CONVEX_DOUBLE_ARC_SLOW             124
#define ANIM_CONVEX_DOUBLE_ARC                  125
#define ANIM_CONVEX_DOUBLE_ARC_TWICE            126
#define ANIM_CONCAVE_ARC_SMALL_SLOW             127
#define ANIM_CONCAVE_ARC_SMALL                  128
#define ANIM_CONCAVE_ARC_SMALL_TWICE            129
#define ANIM_H_DIP                              130
#define ANIM_H_DIP_FAST                         131
#define ANIM_H_DIP_TWICE                        132
#define ANIM_SHRINK_GROW_VIBRATE_FAST           133
#define ANIM_SHRINK_GROW_VIBRATE                134
#define ANIM_SHRINK_GROW_VIBRATE_SLOW           135
#define ANIM_JOLT_RIGHT_FAST                    136
#define ANIM_JOLT_RIGHT                         137
#define ANIM_JOLT_RIGHT_SLOW                    138
#define ANIM_SHAKE_FLASH_YELLOW_FAST            139
#define ANIM_SHAKE_FLASH_YELLOW                 140
#define ANIM_SHAKE_FLASH_YELLOW_SLOW            141
#define ANIM_SHAKE_GLOW_RED_FAST                142
#define ANIM_SHAKE_GLOW_RED                     143
#define ANIM_SHAKE_GLOW_RED_SLOW                144
#define ANIM_SHAKE_GLOW_GREEN_FAST              145
#define ANIM_SHAKE_GLOW_GREEN                   146
#define ANIM_SHAKE_GLOW_GREEN_SLOW              147
#define ANIM_SHAKE_GLOW_BLUE_FAST               148
#define ANIM_SHAKE_GLOW_BLUE                    149
#define ANIM_SHAKE_GLOW_BLUE_SLOW               150
#define ANIM_SHAKE_GLOW_BLACK_SLOW              151
#define ANIM_SHAKE_GLOW_WHITE_SLOW              152
#define ANIM_SHAKE_GLOW_PURPLE_SLOW             153

#define MOVE_TUTOR_LEVEL_UP_MOVES 0
#define MOVE_TUTOR_EGG_MOVES      1
#define MOVE_TUTOR_MOVES          2
#define MOVE_TUTOR_TM_MOVES       3

#define EDIT_EVS_LEVEL         90

#endif // GUARD_CONSTANTS_POKEMON_H
