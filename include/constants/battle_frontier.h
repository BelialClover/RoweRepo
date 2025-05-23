#ifndef GUARD_CONSTANTS_BATTLE_FRONTIER_H
#define GUARD_CONSTANTS_BATTLE_FRONTIER_H

#define FRONTIER_CHALLENGE(facility, mode) ((facility << 8) + mode)

// Battle Frontier facility ids.
#define FRONTIER_FACILITY_TOWER    0
#define FRONTIER_FACILITY_DOME     1
#define FRONTIER_FACILITY_PALACE   2  // also Verdanturf Tent
#define FRONTIER_FACILITY_ARENA    3  // also Fallarbor Tent
#define FRONTIER_FACILITY_FACTORY  4  // also Slateport Tent
#define FRONTIER_FACILITY_PIKE     5
#define FRONTIER_FACILITY_PYRAMID  6
#define NUM_FRONTIER_FACILITIES    7
// VAR_FRONTIER_FACILITY is re-used for the below facilities as well
#define FACILITY_LINK_CONTEST      7
#define FACILITY_UNION_ROOM        8
#define FACILITY_MULTI_OR_EREADER  9  // Direct Corner multi battles, multi battle with Steven, and e-Reader battles

// Battle Frontier lvl modes.
#define FRONTIER_LVL_50   0
#define FRONTIER_LVL_OPEN 1
#define FRONTIER_LVL_TENT 2

// Battle Frontier battle modes.
#define FRONTIER_MODE_SINGLES      0
#define FRONTIER_MODE_DOUBLES      1
#define FRONTIER_MODE_MULTIS       2
#define FRONTIER_MODE_LINK_MULTIS  3
#define FRONTIER_MODE_COUNT        4

// Challenge Statuses
#define CHALLENGE_STATUS_SAVING   1
#define CHALLENGE_STATUS_PAUSED   2
#define CHALLENGE_STATUS_WON      3
#define CHALLENGE_STATUS_LOST     4

// Special trainer battles.
#define SPECIAL_BATTLE_TOWER 0
#define SPECIAL_BATTLE_SECRET_BASE 1
#define SPECIAL_BATTLE_EREADER 2
#define SPECIAL_BATTLE_DOME 3
#define SPECIAL_BATTLE_PALACE 4
#define SPECIAL_BATTLE_ARENA 5
#define SPECIAL_BATTLE_FACTORY 6
#define SPECIAL_BATTLE_PIKE_SINGLE 7
#define SPECIAL_BATTLE_STEVEN 8
#define SPECIAL_BATTLE_PIKE_DOUBLE 9
#define SPECIAL_BATTLE_PYRAMID 10
#define SPECIAL_BATTLE_MULTI 11

#define ABILITY_1               0
#define ABILITY_2               1
#define ABILITY_HIDDEN          2
#define ABILITY_RANDOM          3

#define MAX_BATTLE_FRONTIER_POINTS 50000 //Used to be 9999
#define MAX_STREAK 9999

// These sets of facility ids would be redunant if the order was consistent
// The order is important for this set so that all the non-link records can be continuous
#define RANKING_HALL_BATTLE_TOWER_SINGLES   0
#define RANKING_HALL_BATTLE_TOWER_DOUBLES   1
#define RANKING_HALL_BATTLE_TOWER_MULTIS    2
#define RANKING_HALL_BATTLE_DOME            3
#define RANKING_HALL_BATTLE_PALACE          4
#define RANKING_HALL_BATTLE_ARENA           5
#define RANKING_HALL_BATTLE_FACTORY         6
#define RANKING_HALL_BATTLE_PIKE            7
#define RANKING_HALL_BATTLE_PYRAMID         8
#define RANKING_HALL_BATTLE_TOWER_LINK      9

#define FRONTIER_MANIAC_BATTLE_TOWER_SINGLES   0
#define FRONTIER_MANIAC_BATTLE_TOWER_DOUBLES   1
#define FRONTIER_MANIAC_BATTLE_TOWER_MULTIS    2
#define FRONTIER_MANIAC_BATTLE_TOWER_LINK      3
#define FRONTIER_MANIAC_BATTLE_DOME            4
#define FRONTIER_MANIAC_BATTLE_FACTORY         5
#define FRONTIER_MANIAC_BATTLE_PALACE          6
#define FRONTIER_MANIAC_BATTLE_ARENA           7
#define FRONTIER_MANIAC_BATTLE_PIKE            8
#define FRONTIER_MANIAC_BATTLE_PYRAMID         9
#define FRONTIER_MANIAC_FACILITY_COUNT        10

#define FRONTIER_MANIAC_MESSAGE_COUNT 3

// Frontier Gambler
#define FRONTIER_GAMBLER_WAITING     0
#define FRONTIER_GAMBLER_PLACED_BET  1
#define FRONTIER_GAMBLER_WON         2
#define FRONTIER_GAMBLER_LOST        3

#define FRONTIER_GAMBLER_BET_5      0
#define FRONTIER_GAMBLER_BET_10     1
#define FRONTIER_GAMBLER_BET_15     2
#define FRONTIER_GAMBLER_BET_CANCEL 3

#define FRONTIER_GAMBLER_CHALLENGE_COUNT 12

#define EXCHANGE_CORNER_DECOR1_CLERK     0
#define EXCHANGE_CORNER_DECOR2_CLERK     1
#define EXCHANGE_CORNER_VITAMIN_CLERK    2
#define EXCHANGE_CORNER_HOLD_ITEM_CLERK  3

#define F_EV_SPREAD_HP         (1 << 0)
#define F_EV_SPREAD_ATTACK     (1 << 1)
#define F_EV_SPREAD_DEFENSE    (1 << 2)
#define F_EV_SPREAD_SPEED      (1 << 3)
#define F_EV_SPREAD_SP_ATTACK  (1 << 4)
#define F_EV_SPREAD_SP_DEFENSE (1 << 5)

#define BATTLE_FRONTIER_ITEM_NONE           0
#define BATTLE_FRONTIER_ITEM_KINGS_ROCK     1
#define BATTLE_FRONTIER_ITEM_SITRUS_BERRY   2
#define BATTLE_FRONTIER_ITEM_ORAN_BERRY     3
#define BATTLE_FRONTIER_ITEM_CHESTO_BERRY   4
#define BATTLE_FRONTIER_ITEM_HARD_STONE     5
#define BATTLE_FRONTIER_ITEM_FOCUS_BAND     6
#define BATTLE_FRONTIER_ITEM_PERSIM_BERRY   7
#define BATTLE_FRONTIER_ITEM_MIRACLE_SEED   8
#define BATTLE_FRONTIER_ITEM_BERRY_JUICE    9
#define BATTLE_FRONTIER_ITEM_MACHO_BRACE    10
#define BATTLE_FRONTIER_ITEM_SILVER_POWDER  11
#define BATTLE_FRONTIER_ITEM_CHERI_BERRY    12
#define BATTLE_FRONTIER_ITEM_BLACK_GLASSES  13
#define BATTLE_FRONTIER_ITEM_BLACK_BELT     14
#define BATTLE_FRONTIER_ITEM_SOUL_DEW       15
#define BATTLE_FRONTIER_ITEM_CHOICE_BAND    16
#define BATTLE_FRONTIER_ITEM_MAGNET         17
#define BATTLE_FRONTIER_ITEM_SILK_SCARF     18
#define BATTLE_FRONTIER_ITEM_WHITE_HERB     19
#define BATTLE_FRONTIER_ITEM_DEEP_SEA_SCALE 20
#define BATTLE_FRONTIER_ITEM_DEEP_SEA_TOOTH 21
#define BATTLE_FRONTIER_ITEM_MYSTIC_WATER   22
#define BATTLE_FRONTIER_ITEM_SHARP_BEAK     23
#define BATTLE_FRONTIER_ITEM_QUICK_CLAW     24
#define BATTLE_FRONTIER_ITEM_LEFTOVERS      25
#define BATTLE_FRONTIER_ITEM_RAWST_BERRY    26
#define BATTLE_FRONTIER_ITEM_LIGHT_BALL     27
#define BATTLE_FRONTIER_ITEM_POISON_BARB    28
#define BATTLE_FRONTIER_ITEM_NEVER_MELT_ICE 29
#define BATTLE_FRONTIER_ITEM_ASPEAR_BERRY   30
#define BATTLE_FRONTIER_ITEM_SPELL_TAG      31
#define BATTLE_FRONTIER_ITEM_BRIGHT_POWDER  32
#define BATTLE_FRONTIER_ITEM_LEPPA_BERRY    33
#define BATTLE_FRONTIER_ITEM_SCOPE_LENS     34
#define BATTLE_FRONTIER_ITEM_TWISTED_SPOON  35
#define BATTLE_FRONTIER_ITEM_METAL_COAT     36
#define BATTLE_FRONTIER_ITEM_MENTAL_HERB    37
#define BATTLE_FRONTIER_ITEM_CHARCOAL       38
#define BATTLE_FRONTIER_ITEM_PECHA_BERRY    39
#define BATTLE_FRONTIER_ITEM_SOFT_SAND      40
#define BATTLE_FRONTIER_ITEM_LUM_BERRY      41
#define BATTLE_FRONTIER_ITEM_DRAGON_SCALE   42
#define BATTLE_FRONTIER_ITEM_DRAGON_FANG    43
#define BATTLE_FRONTIER_ITEM_IAPAPA_BERRY   44
#define BATTLE_FRONTIER_ITEM_WIKI_BERRY     45
#define BATTLE_FRONTIER_ITEM_SEA_INCENSE    46
#define BATTLE_FRONTIER_ITEM_SHELL_BELL     47
#define BATTLE_FRONTIER_ITEM_SALAC_BERRY    48
#define BATTLE_FRONTIER_ITEM_LANSAT_BERRY   49
#define BATTLE_FRONTIER_ITEM_APICOT_BERRY   50
#define BATTLE_FRONTIER_ITEM_STARF_BERRY    51
#define BATTLE_FRONTIER_ITEM_LIECHI_BERRY   52
#define BATTLE_FRONTIER_ITEM_STICK          53
#define BATTLE_FRONTIER_ITEM_LAX_INCENSE    54
#define BATTLE_FRONTIER_ITEM_AGUAV_BERRY    55
#define BATTLE_FRONTIER_ITEM_FIGY_BERRY     56
#define BATTLE_FRONTIER_ITEM_THICK_CLUB     57
#define BATTLE_FRONTIER_ITEM_MAGO_BERRY     58
#define BATTLE_FRONTIER_ITEM_METAL_POWDER   59
#define BATTLE_FRONTIER_ITEM_PETAYA_BERRY   60
#define BATTLE_FRONTIER_ITEM_LUCKY_PUNCH    61
#define BATTLE_FRONTIER_ITEM_GANLON_BERRY   62
#define BATTLE_FRONTIER_ITEM_FLAME_ORB   	63
#define BATTLE_FRONTIER_ITEM_LIFE_ORB   	64
#define BATTLE_FRONTIER_ITEM_FOCUS_SASH   	65
#define BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY 66
#define BATTLE_FRONTIER_ITEM_CHOICE_SCARF   67
#define BATTLE_FRONTIER_ITEM_CHOICE_SPECS   68
#define BATTLE_FRONTIER_ITEM_ASSAULT_VEST   69
#define BATTLE_FRONTIER_ITEM_HERACRONITE    70
#define BATTLE_FRONTIER_ITEM_BLACK_SLUDGE   71
#define BATTLE_FRONTIER_ITEM_EVIOLITE       72
#define BATTLE_FRONTIER_ITEM_HEAT_ROCK      73
#define BATTLE_FRONTIER_ITEM_PIDGEOTITE     74
#define BATTLE_FRONTIER_ITEM_GARDEVOIRITE   75
#define BATTLE_FRONTIER_ITEM_AMPHAROSITE    76
#define BATTLE_FRONTIER_ITEM_MEDICHAMITE    77
#define BATTLE_FRONTIER_ITEM_METAGROSSITE   78
#define BATTLE_FRONTIER_ITEM_ICY_ROCK       79
#define BATTLE_FRONTIER_ITEM_ROCKY_HELMET   80
#define BATTLE_FRONTIER_ITEM_GALLADITE      81
#define BATTLE_FRONTIER_ITEM_DIANCITE       82
#define BATTLE_FRONTIER_ITEM_SALAMENCITE    83
#define BATTLE_FRONTIER_ITEM_BLASTOISINITE  84
#define BATTLE_FRONTIER_ITEM_GENGARITE      85
#define BATTLE_FRONTIER_ITEM_ABOMASITE      86	
#define BATTLE_FRONTIER_ITEM_BEEDRILLITE    87
#define BATTLE_FRONTIER_ITEM_IRON_BALL      88	
#define BATTLE_FRONTIER_ITEM_WISE_GLASSES   89	
#define BATTLE_FRONTIER_ITEM_WIDE_LENS      90	
#define BATTLE_FRONTIER_ITEM_TYRANITARITE   91	
#define BATTLE_FRONTIER_ITEM_AGGRONITE      92	
#define BATTLE_FRONTIER_ITEM_SLOWBRONITE    93	
#define BATTLE_FRONTIER_ITEM_CHARIZARDITE_Y 94	
#define BATTLE_FRONTIER_ITEM_AIR_BALLOON    95	
#define BATTLE_FRONTIER_ITEM_ABSOLITE       96	
#define BATTLE_FRONTIER_ITEM_AERODACTYLITE  97	
#define BATTLE_FRONTIER_ITEM_ALAKAZITE	    98
#define BATTLE_FRONTIER_ITEM_ALTARIANITE	99
#define BATTLE_FRONTIER_ITEM_POWER_HERB	    100
#define BATTLE_FRONTIER_ITEM_LOPUNNITE	    101
#define BATTLE_FRONTIER_ITEM_MAWILITE	    102
#define BATTLE_FRONTIER_ITEM_STEELIXITE	    103
#define BATTLE_FRONTIER_ITEM_CAMERUPTITE	104
#define BATTLE_FRONTIER_ITEM_SHARPEDONITE	105

#endif // GUARD_CONSTANTS_BATTLE_FRONTIER_H
