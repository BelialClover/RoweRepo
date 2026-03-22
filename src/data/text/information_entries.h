enum{
    INFORMATION_ENTRIES_BASIC,
    INFORMATION_ENTRIES_FAQ,
    INFORMATION_ENTRIES_TRAINER_TIPS,
    NUM_INFORMATION_ENTRIES,
};

//Page Stuff
enum{
    INFORMATION_PAGE_1,
    INFORMATION_PAGE_2,
    INFORMATION_PAGE_3,
    INFORMATION_PAGE_4,
    INFORMATION_PAGE_5,
    MAX_NUM_INFORMATION_PAGES,
};

//Basic Information
enum{
    BASIC_INFORMATION_1,
    BASIC_INFORMATION_2,
    BASIC_INFORMATION_3,
    BASIC_INFORMATION_4,
    BASIC_INFORMATION_5,
    BASIC_INFORMATION_6,
    NUM_BASIC_ENTRIES,
};

//FAQ Information
enum{
    FAQ_INFORMATION_1,
    FAQ_INFORMATION_2,
    FAQ_INFORMATION_3,
    FAQ_INFORMATION_4,
    FAQ_INFORMATION_5,
    FAQ_INFORMATION_6,
    FAQ_INFORMATION_7,
    FAQ_INFORMATION_8,
    FAQ_INFORMATION_9,
    FAQ_INFORMATION_10,
    FAQ_INFORMATION_11,
    FAQ_INFORMATION_12,
    FAQ_INFORMATION_13,
    FAQ_INFORMATION_14,
    FAQ_INFORMATION_15,
    FAQ_INFORMATION_16,
    NUM_FAQ_ENTRIES,
};

//Trainer Tips Information
enum{
    TRAINER_TIPS_INFORMATION_1,
    TRAINER_TIPS_INFORMATION_2,
    TRAINER_TIPS_INFORMATION_3,
    TRAINER_TIPS_INFORMATION_4,
    TRAINER_TIPS_INFORMATION_5,
    TRAINER_TIPS_INFORMATION_6,
    TRAINER_TIPS_INFORMATION_7,
    TRAINER_TIPS_INFORMATION_8,
    TRAINER_TIPS_INFORMATION_9,
    TRAINER_TIPS_INFORMATION_10,
    TRAINER_TIPS_INFORMATION_11,
    TRAINER_TIPS_INFORMATION_12,
    NUM_TRAINER_TIPS_ENTRIES,
};

const struct MenuEntry sMenuEntry[NUM_INFORMATION_ENTRIES] = {
    [INFORMATION_ENTRIES_BASIC] = {
        .title = _("Basic Information"),
        .numEntries = NUM_BASIC_ENTRIES,
    },
    [INFORMATION_ENTRIES_FAQ] = {
        .title = _("Frequently Asked Questions"),
        .numEntries = NUM_FAQ_ENTRIES,
    },
    [INFORMATION_ENTRIES_TRAINER_TIPS] = {
        .title = _("Trainer Tips"),
        .numEntries = NUM_TRAINER_TIPS_ENTRIES,
    },
};

/*
//Example
            //Page 1
            _(
                "All the evolution items are sold in Oldale     \n"
                "Battle Mart for 20BP                           \n"
                "be changed. Only Abilities are changed from    \n"
                "within the Pokemon summary screen."
            ),
            //Page 2
            _(
                "Pokemon within this game have 3 passive        \n"
                "Abilities which are called Innates, these can't\n"
                "be changed. Only Abilities are changed from    \n"
                "within the Pokemon summary screen."
            ),
            //Page 3
            _(
                "Pokemon within this game have 3 passive        \n"
                "Abilities which are called Innates, these can't\n"
                "be changed. Only Abilities are changed from    \n"
                "within the Pokemon summary screen."
            ),
*/

#define INFORMATION_ENTRIES_WIDTH  213
#define FORMAT_INFORMATION_ENTRIES(str) _f(8, 213, str) // FONT_SMALL_NARROW, 213px width

const struct InformationEntry sInformationEntry[NUM_INFORMATION_ENTRIES][MAX_NUM_ENTRIES_PER_TAB] = {
    [INFORMATION_ENTRIES_BASIC] = {
        [BASIC_INFORMATION_1] = {
            .title = _("Your Information"),
            .description = {
                [INFORMATION_PAGE_1] =
                _(
                    "-Game Seed:\n"
                    "-Game Version:\n"
                    "-Your Difficulty:\n"
                    "-Your Badges:\n"
                    "-Current Player Level Cap:\n"
                    "-Are you Champion:\n"
                    "-Has Defeated Rayquaza:\n"
                ),
                [INFORMATION_PAGE_2] =
                _(
                    "-Grindless Mode:\n"
                    "-No Evs Mode:\n"
                    "-Scalemon Mode:\n"
                    "-Gym Shuffle Mode:\n"
                    "-Inverse Mode:\n"
                    "-Randomized Mode:\n"
                    "-True Random Mode:\n"
                    "-Random Party Mode:\n"
                    "-Double Battle Mode:\n"
                    "-No Evolution Mode:\n"
                ),
                [INFORMATION_PAGE_3] =
                _(
                    "-Random Type Mode:\n"
                    "-Random Ability Mode:\n"
                    "-Third Type Mode:\n"
                    "-Old STAB Mode:\n"
                    "-No Split Mode:\n"
                    "-No Mega Mode:\n"
                    "-Vanilla Mode:\n"
                ),
            },
            .numPages = 3
        },

        [BASIC_INFORMATION_2] = {
            .title = _("Game Features"),
            .description = {
                [INFORMATION_PAGE_1] =
                _(
                    "-16 Badges\n"
                    "-Explore the region in any order you want.\n"
                    "-Following Pokémon\n"
                    "-Trainer Color Customization\n"
                    "-Tons of QoL Changes to teambuild really easily\n"
                    "-Trainer Skills\n"
                    "-Egg/TMHM Move Tutor\n"
                    "-Mystery Gift System\n"
                    "-New Game+\n"
                ),
                [INFORMATION_PAGE_2] =
                _(
                    "-Multiple Title Screens\n"
                    "-Achievements\n"
                    "-Chose between 9 starters or get one randomly.\n"
                    "-3 Different Game Difficulties\n"
                    "-Regional Music Options\n"
                    "-Seasons\n"
                    "-Color variants for some specific Pokemon\n"
                    "-Scalemon Mode\n"
                    "-In-Game Randomized Mode\n"
                ),
                [INFORMATION_PAGE_3] =
                _(
                    "-Double Battle Mode\n"
                    "-Inverse Mode\n"
                    "-No Evs mode\n"
                    "-Random Party Mode\n"
                    "-Little Cup like mode\n"
                    "-No need for HMs\n"
                    "-In Game Wonder Trades\n"
                    "-Nature Mints\n"
                ),
                [INFORMATION_PAGE_4] =
                _(
                    "-A way to change you Mons Poke Balls\n"
                    "-Pokémon from all the 9 Gens\n"
                    "-Auto Run Options\n"
                    "-120 TMs\n"
                    "-Physical/Special Split\n"
                    "-Daily Gym Leader Rematches\n"
                    "-Level scaling for wild and Trainer Mons\n"
                    "-Re-Usable TMs\n"
                    "-Mega Evolutions\n"
                ),
                [INFORMATION_PAGE_5] =
                _(
                    "-DexNav\n"
                    "-Flying Taxis\n"
                    "-Name Rater, Move Tutor and Move Deleter\n"
                    "on all the Pokémon Centers.\n"
                    "-Level caps depending on the difficulty\n"
                    "-Gen 6 Exp.Share\n"
                    "-Eon Flute\n"
                    "-A lot more\n"
                ),
            },
            .numPages = 5,
        },
        [BASIC_INFORMATION_3] = {
            .title = _("Pokemon Styles"),
            .description = {
                [INFORMATION_PAGE_1] = FORMAT_INFORMATION_ENTRIES("This game has 8 different Pokemon Styles, each style having different strengths and weaknesses modifying the base stats of a Pokemon directly, they are unlocked at different levels, the next pages lists all of them."),
                [INFORMATION_PAGE_2] =
                _(
                    "-Balanced\n"
                    "Unlocked at the start, default stats.\n"
                    "-Disruptor\n"
                    "Unlocked at level 15, -33% Atk +33% Speed.\n"
                    "-Tank\n"
                    "Unlocked at level 23, -33% Speed +25% Def.\n"
                    "-Striker\n"
                    "Unlocked at level 31, -33% Def +33% Atk.\n"
                ),
                [INFORMATION_PAGE_3] =
                _(
                    "-Speedster\n"
                    "Unlocked at level 39, -33% Def +33% Speed.\n"
                    "-Bruiser\n"
                    "Unlocked at level 39, -33% Atk +25% Def.\n"
                    "-Juggernaut\n"
                    "Unlocked at level 55, -50% Speed +33% Atk.\n"
                    "-All Rounder\n"
                    "Unlocked at level 63, Balances all the stats.\n"
                ),
            },
            .numPages = 3
        },
        [BASIC_INFORMATION_4] = {
            .title = _("Easy Difficulty"),
            .description = {
                [INFORMATION_PAGE_1] =
                _(
                    "-There are no level caps.\n"
                    "-Reduced AI intelligence.\n"
                    "-Lowest wild and trainer Pokémon levels.\n"
                    "-NPC Pokémon have the lowest IVs.\n"
                    "-Can choose SET or SHIFT battle style.\n"
                ),
            },
            .numPages = 1
        },
        [BASIC_INFORMATION_5] = {
            .title = _("Normal Difficulty"),
            .description = {
                [INFORMATION_PAGE_1] =
                _(
                    "-Smarter AI than Easy Mode.\n"
                    "-Higher wild and trainer Pokémon levels.\n"
                    "-NPC Pokémon have higher IVs than Easy.\n"
                    "-Soft level cap: your Pokémon stop gaining\n"
                    " stats at the cap but still earn EXP, learn\n"
                    " moves and can evolve. Stats return to normal\n"
                    " after you get your next badge.\n"
                    "-Can customize level cap in options.\n"
                ),
            },
            .numPages = 1
        },
        [BASIC_INFORMATION_6] = {
            .title = _("Hard Difficulty"),
            .description = {
                [INFORMATION_PAGE_1] =
                _(
                    "-Smartest AI.\n"
                    "-Highest wild and trainer Pokémon levels.\n"
                    "-NPC Pokémon have the highest IVs.\n"
                    "-Hard level cap: Pokémon gain NO EXP at cap.\n"
                    "-Battle Mode is forced to Set.\n"
                    "-Cannot customize level cap in options.\n"
                ),
                [INFORMATION_PAGE_2] =
                _(
                    "-Gym Leaders scale to your team size in the\n"
                    " first fights.\n"
                    "-You can't use items in trainer battles.\n"
                    "-You can't save in the Elite Four rooms.\n"
                    "-You get some bonuses for playing on hard.\n"
                ),
            },
            .numPages = 2
        },
    },
    [INFORMATION_ENTRIES_FAQ] = {
        [FAQ_INFORMATION_1] = {
            .title = _("How do IVs work in this game?"),
            .description = {
                [INFORMATION_PAGE_1] = FORMAT_INFORMATION_ENTRIES("Unlike traditional Pokémon games, IVs are not random. All Pokémon start with 1 IV in each stat. IVs are controlled globally through the Trainer Skills menu under Stat Boosts. Each Skill point you invest gives +3 IVs to that stat for ALL Pokémon you own."),
                [INFORMATION_PAGE_2] = FORMAT_INFORMATION_ENTRIES("Each Stat Boost skill has a max level of 10, giving 31 IVs per stat (the maximum). There are separate skills for HP, Atk, Def, Sp.Atk, Sp.Def, and Speed. If your Pokémon feel weak, make sure you have invested Skill points into Stat Boosts!"),
            },
            .numPages = 2
        },
        [FAQ_INFORMATION_2] = {
            .title = _("How do I find or evolve a Pokémon?"),
            .description = FORMAT_INFORMATION_ENTRIES("The in-game Pokédex shows every Pokémon's location and evolution method, even if you haven't seen it yet. You can also check the summary screen of a Pokémon in your party for its evolution requirements."),
            .numPages = 1
        },
        [FAQ_INFORMATION_3] = {
            .title = _("How do trade evolutions work?"),
            .description = FORMAT_INFORMATION_ENTRIES("Use a Link Cable as an evolution item on the Pokémon. For Pokémon that normally need a held item to trade-evolve (like Metal Coat), just use that item directly on the Pokémon instead."),
            .numPages = 1
        },
        [FAQ_INFORMATION_4] = {
            .title = _("Why won't my Pokémon evolve?"),
            .description = FORMAT_INFORMATION_ENTRIES("Make sure your Pokémon is not holding an Eviolite, as it works like an Everstone in this game and prevents evolution. Also check that you haven't used an Exiolite on it. Some evolution methods have been changed, so check the in-game Pokédex. Finally, make sure you're not in No-Evolution Mode."),
            .numPages = 1
        },
        [FAQ_INFORMATION_5] = {
            .title = _("How do I change Abilities or Natures?"),
            .description = FORMAT_INFORMATION_ENTRIES("Use an Ability Capsule or Ability Patch to change abilities, or a Nature Mint to change natures. All of these can be purchased at the Oldale Town Battle Mart for BP."),
            .numPages = 1
        },
        [FAQ_INFORMATION_6] = {
            .title = _("How do shinies work in this game?"),
            .description = FORMAT_INFORMATION_ENTRIES("The shiny rate is 1/4096. After earning all 16 badges, you receive a Shiny Charm that doubles your odds to 1/2048. No Pokémon in this game is shiny locked."),
            .numPages = 1
        },
        [FAQ_INFORMATION_7] = {
            .title = _("How do I Mega Evolve?"),
            .description = FORMAT_INFORMATION_ENTRIES("First, obtain the Mega Bracelet by defeating 11 Gym Leaders. Then, in battle, press Start on the move screen while your Pokémon is holding its Mega Stone."),
            .numPages = 1
        },
        [FAQ_INFORMATION_8] = {
            .title = _("Is every Pokémon available?"),
            .description = FORMAT_INFORMATION_ENTRIES("Every Pokémon up to Gen 9 is available. The only exceptions are Mythicals, Legendaries, and Paradox Pokémon. All other Pokémon can be obtained in-game."),
            .numPages = 1
        },
        [FAQ_INFORMATION_9] = {
            .title = _("How do I Wonder Trade?"),
            .description = FORMAT_INFORMATION_ENTRIES("Go to any Pokémon Center and talk to the blue nurse next to Nurse Joy. It costs 5 BP per trade."),
            .numPages = 1
        },
        [FAQ_INFORMATION_10] = {
            .title = _("Is there an Egg Move Tutor?"),
            .description = FORMAT_INFORMATION_ENTRIES("Yes, you can find one in every Pokémon Center next to Nurse Joy. You need at least 9 badges to use it, and each move costs some BP."),
            .numPages = 1
        },
        [FAQ_INFORMATION_11] = {
            .title = _("How do I get Hidden Pokémon?"),
            .description = FORMAT_INFORMATION_ENTRIES("Every 50 steps, the DexNav may detect a nearby Pokémon. Press A while walking to encounter it. There is a chance that it will be a Hidden Pokémon with special attributes."),
            .numPages = 1
        },
        [FAQ_INFORMATION_12] = {
            .title = _("What is the Surprise Me option?"),
            .description = FORMAT_INFORMATION_ENTRIES("It gives you a random first-stage Pokémon as your starter. Mythicals and Legendaries are excluded."),
            .numPages = 1
        },
        [FAQ_INFORMATION_13] = {
            .title = _("What are the supported emulators?"),
            .description = {
                [INFORMATION_PAGE_1] =
                _(
                    "-PC: mGBA standalone emulator\n"
                    "-Android: MyBoy!, Pizzaboy GBA, or\n"
                    " Retroarch with the mGBA core\n"
                    "-3DS: VC Injection (NSUI, not GBA\n"
                    " Ultimate Injector) or open agb firm\n"
                    "-Vita/Switch: mGBA standalone emulator\n"
                ),
                [INFORMATION_PAGE_2] =
                _(
                    "-iOS: OpenEMU with mGBA core,\n"
                    " afterplay.io, Ignited Emulator with\n"
                    " mGBA core, or Retroarch from the\n"
                    " App Store.\n"
                    "\n"
                    "Do NOT use Delta Emulator.\n"
                ),
            },
            .numPages = 2
        },
        [FAQ_INFORMATION_14] = {
            .title = _("Why does every cry sound the same?"),
            .description = FORMAT_INFORMATION_ENTRIES("Unique cries were removed to free up space. The GBA cartridge only supports 32MB, and cries alone used about 16MB. You can disable the generic cries in the Options menu by setting 'Use generic cry' to Off."),
            .numPages = 1
        },
        [FAQ_INFORMATION_15] = {
            .title = _("How do I change Rotom's form?"),
            .description = FORMAT_INFORMATION_ENTRIES("Talk to the box inside the Bike Store to change Rotom's form."),
            .numPages = 1
        },
        [FAQ_INFORMATION_16] = {
            .title = _("Are saves compatible with updates?"),
            .description = FORMAT_INFORMATION_ENTRIES("Yes, your saves are compatible with future versions. If this ever changes, it will be announced on the Pokecommunity post."),
            .numPages = 1
        },
    },

    [INFORMATION_ENTRIES_TRAINER_TIPS] = {
        [TRAINER_TIPS_INFORMATION_1] = {
            .title = _("1 - Oldale Battle Mart"),
            .description = FORMAT_INFORMATION_ENTRIES("The Oldale Battle Mart sells Evolution Items (20 BP each), Nature Mints (10 BP each), Ability Capsules, Ability Patches, and other important items. Visit Eight Island for the same selection."),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_2] = {
            .title = _("2 - Trainer Skills"),
            .description = FORMAT_INFORMATION_ENTRIES("Invest in Bonus Battle skills early to increase your chance of earning double BP from battles. Trainer XP Boost helps you unlock more skills faster, while Pokémon XP Boost reduces the grind on your journey."),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_3] = {
            .title = _("3 - Egg Moves"),
            .description = FORMAT_INFORMATION_ENTRIES("Pokémon in your party that know an Egg or Tutor move can teach it to compatible party members. Place two Pokémon of the same Egg Group in your party and select Learn Moves. Great for getting strong moves early!"),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_4] = {
            .title = _("4 - Farming BP"),
            .description = FORMAT_INFORMATION_ENTRIES("You can farm BP by rebattling Gym Trainers. After defeating a Gym Leader in a rematch, talk to them to reset their trainers so you can fight them again."),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_5] = {
            .title = _("5 - Evolution Requirements"),
            .description = FORMAT_INFORMATION_ENTRIES("You can check any Pokémon's evolution requirements in the summary screen on the last page by pressing A to scroll through the info."),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_6] = {
            .title = _("6 - DexNav Chaining"),
            .description = FORMAT_INFORMATION_ENTRIES("To start a DexNav chain, you must first register the target Pokémon by pressing R in the DexNav menu. Without registering, the chain won't work."),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_7] = {
            .title = _("7 - DexNav Shiny Hunting"),
            .description = {
                [INFORMATION_PAGE_1] = FORMAT_INFORMATION_ENTRIES("You can shiny hunt using the DexNav. Register your target Pokémon and KO them to build up your Search Level. Higher Search Levels unlock better shiny odds. The DexNav Chain Trainer Skill also boosts your starting Search Level."),
                [INFORMATION_PAGE_2] = FORMAT_INFORMATION_ENTRIES("Search Level 200+: about 1/1000 shiny chance. Search Level 400+: about 1/500 shiny chance. Search Level 500+: about 1/250 shiny chance. The Shiny Charm and certain date bonuses grant extra rolls, improving your odds further."),
            },
            .numPages = 2
        },
        [TRAINER_TIPS_INFORMATION_8] = {
            .title = _("8 - Encounter First Stages"),
            .description = FORMAT_INFORMATION_ENTRIES("If your lead Pokémon holds an Everstone, you will only encounter the base form of wild Pokémon, regardless of their level."),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_9] = {
            .title = _("9 - Getting More Starters"),
            .description = FORMAT_INFORMATION_ENTRIES("You can obtain additional starters by trading Red, Green, and Blue Shards to NPCs in Lavaridge, Fortree, and Lilycove."),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_10] = {
            .title = _("10 - Mystery Gift"),
            .description = FORMAT_INFORMATION_ENTRIES("To claim a Mystery Gift, save your game, reset, and select the Mystery Gift option from the title screen menu."),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_11] = {
            .title = _("11 - Sevii Island Tickets"),
            .description = FORMAT_INFORMATION_ENTRIES("You start the game with one random Sevii Island ticket. To unlock more islands, find Colress at the end of each island's route or dungeon."),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_12] = {
            .title = _("12 - Ash Greninja"),
            .description = FORMAT_INFORMATION_ENTRIES("Use an Ability Capsule on any Greninja to change its ability to Battle Bond, turning it into Ash-Greninja."),
            .numPages = 1
        },
    },
};