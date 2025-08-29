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
    BASIC_INFORMATION_7,
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
    FAQ_INFORMATION_17,
    /*FAQ_INFORMATION_18,
    FAQ_INFORMATION_19,
    FAQ_INFORMATION_20,
    FAQ_INFORMATION_21,
    FAQ_INFORMATION_22,*/
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
    TRAINER_TIPS_INFORMATION_13,
    TRAINER_TIPS_INFORMATION_14,
    TRAINER_TIPS_INFORMATION_15,
    TRAINER_TIPS_INFORMATION_16,
    TRAINER_TIPS_INFORMATION_17,
    TRAINER_TIPS_INFORMATION_18,
    TRAINER_TIPS_INFORMATION_19,
    TRAINER_TIPS_INFORMATION_20,
    TRAINER_TIPS_INFORMATION_21,
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
                    "-3 Different Game Difficulties\n"
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
            .title = _("Level Cap"),
            .description = {
                [INFORMATION_PAGE_1] =
                _(
                    "The game has a different Level Cap depending on\n"
                    "the difficulty, easy mode has no cap.          \n"
                    "\n"
                    "Normal Mode:                                   \n"
                    "-Pokémon will stop receiving stats after the   \n"
                    "level cap and will gain them back after a badge\n"
                    "\n"
                    "Hard Mode:                                     \n"
                    "-Your Pokémon will stop gaining exp after you  \n"
                    "reach the level cap."
                ),
            },
            .numPages = 1
        },
        [BASIC_INFORMATION_4] = {
            .title = _("Pokemon Styles"),
            .description = {
                [INFORMATION_PAGE_1] =
                _(
                    "This game has 8 different Pokemon Styles, each \n"
                    "style having different strengths and weaknesses\n"
                    "modifying the base stats of a Pokemon directly,\n"
                    "they are unlocked at different levels, the next\n"
                    "pages lists all of them.\n"
                ),
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
        [BASIC_INFORMATION_5] = {
            .title = _("Easy Difficulty"),
            .description = {
                //Page 1
                _(
                    "-The game is overall easier than Normal Mode.  \n"
                    "-There are no level caps.                      \n"
                    "-The AI should be dumber than in Normal Mode."
                ),
            },
            .numPages = 1
        },
        [BASIC_INFORMATION_6] = {
            .title = _("Normal Difficulty"),
            .description = {
                //Page 1
                _(
                    "-The AI is smarter than in Easy Mode.          \n"
                    "-The Level of the Trainer and Wild Pokémon is  \n"
                    " Higher than in Easy Mode.                     \n"
                    "-Trainers will have more Pokémon early in the  \n"
                    " game.                                         \n"
                    "-Your Pokémon will not gain stats after they   \n"
                    " reach a level cap but you can get new moves   \n"
                    " and evolve, after you get your next badge your\n"
                    " Pokémon stats will go back to normal."
                ),
            },
            .numPages = 1
        },
        [BASIC_INFORMATION_7] = {
            .title = _("Hard Difficulty"),
            .description = {
                //Page 1
                _(
                    "-Smarter AI                                    \n"
                    "-Battle Mode is always set to Set.             \n"
                    "-The Level of the Trainer and Wild Pokémon is  \n"
                    " Higher than in Normal/Easy Mode.              \n"
                    "-Gym Leaders Pokémon number scales depending on\n"
                    " the number of Pokémon on your team on the     \n"
                    " first fights.                                 \n"
                    "-You can't use items on a Trainer battles.     \n"
                    "-You can't save while in the elite four rooms. \n"
                    "-You get some bonuses from playing on hard."
                ),
            },
            .numPages = 1
        },
    },
    [INFORMATION_ENTRIES_FAQ] = {
        [FAQ_INFORMATION_1] = {
            .title = _("What are the supported Emulators?"),
            .description = 
            //Page 1
            _(
                "For PC: mGBA standalone emulator               \n"
                "Android:  MyBoy!, Pizzaboy GBA or Retroarch    \n"
                "using the mGBA core                            \n"
                "3DS:  Virtual Console Injection(with NSUI not  \n"
                "GBA Ultimate Injector) and open agb firm       \n"
                "Vita and Switch:  mGBA standalone emulator     \n"
                "IOs: OpenEMU with mGBA core, afterplay.io,     \n"
                "Ingnited Emulator with mGBA core, Retroarch in \n"
                "the App store(Don't use Delta Emulator)"
            ),
            .numPages = 1
        },
        /*[FAQ_INFORMATION_1] = {
            .title = _("Where can I Find X Evolution Stone or Item?"),
            .description = 
            //Page 1
            _(
                "All the evolution items are sold in Oldale     \n"
                "Battle Mart for 20BP."
            ),
            .numPages = 1
        },*/
        [FAQ_INFORMATION_2] = {
            .title = _("Why does every cry sounds the same?"),
            .description = 
            //Page 1
            _(
                "They were removed to make space for more stuff \n"
                " since the gba cartidge can only go up to 32mb,\n"
                "the cries use around 16mb so they were removed \n"
                "to make space for more features and content.   \n"
                "If you don't want to hear the same cries you   \n"
                "can disable them in the options by changing the\n"
                "Use generic cry option to off."
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_3] = {
            .title = _("Is every Pokémon available in this game?"),
            .description = 
            //Page 1
            _(
                "Every Pokémon up to gen 9 are available in this\n"
                "game, the only exeptions are mythicals,        \n"
                "legendaries and paradoxes but all the other    \n"
                "Pokémon are obtainable in game somehow."
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_4] = {
            .title = _("What is the Surprise Me Option?"),
            .description = 
            //Page 1
            _(
                "It gives you any First Stage Pokémon randomly  \n"
                "the only exeptions are mythicals and           \n"
                "legendaries."
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_5] = {
            .title = _("How can I Mega Evolve in this game?"),
            .description = 
            //Page 1
            _(
                "By pressing Start in the move screen with a    \n"
                "Pokémon that can Mega Evolve holding its Mega  \n"
                "Stone after you have the Mega Bracelet         \n"
                "(Obtained after 11 Badges)"
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_6] = {
            .title = _("How can I evolve Pokémon that evolve by trade?"),
            .description = 
            //Page 1
            _(
                "Use the Link Cable as an evolution stone, and  \n"
                "for mons that use items(example metal coat)    \n"
                "just use the items directly."
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_7] = {
            .title = _("How can I Wonder Trade in this game?"),
            .description = 
            //Page 1
            _(
                "Go to any Pokémon Center with 5bp and talk to  \n"
                "the blue nurse next to the Nurse Joy."
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_8] = {
            .title = _("Is there any Egg Move Tutor?"),
            .description = 
            //Page 1
            _(
                "Yes, it can be found in any Pokémon center next\n"
                "to the nurse joy, you need 9 badges and will   \n"
                "cost some BP per move"
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_9] = {
            .title = _("Can I change my Pokémon Abilities/Natures?"),
            .description = 
            //Page 1
            _(
                "Yes, but you need an Ability Capsule/Patch or a\n"
                "Nature Mint, they can be obtained on the\n"
                "Oldale Town Battle Mart for some BP."
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_10] = {
            .title = _("Where can I find X Pokémon?"),
            .description = 
            //Page 1
            _(
                "Check the Pokedex, you don't need to see any of\n"
                "them to see their location, or you can use the \n"
                "online Pokédex in another device."
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_11] = {
            .title = _("How can I evolve X Pokémon?"),
            .description = 
            //Page 1
            _(
                "The in-game Pokedex tells you how to evolve    \n"
                "every pokemon in the game, if you have that    \n"
                "Pokémon in your party check the summary screen \n"
                "take a look there."
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_12] = {
            .title = _("How can I get the Hidden Pokemon?"),
            .description = 
            //Page 1
            _(
                "After each 50 steps you get a Pokemon          \n"
                "notification from the dexnav press A while     \n"
                "walking to be able to fight it, there is a     \n"
                "possibility that its a hidden Pokemon."
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_13] = {
            .title = _("Are my saves compatible with future versions?"),
            .description = 
            //Page 1
            _(
                "Yes, they are compatible if that changes at    \n"
                "some point I will notify everyone in the       \n"
                "Pokecommunity post."
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_14] = {
            .title = _("How can I change Rotom Forms?"),
            .description = 
            //Page 1
            _(
                "By talking to the box in the Bike Store."
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_15] = {
            .title = _("Why does my Pokémon won't evolve?"),
            .description = 
            //Page 1
            _(
                "Check that you haven't used an Exiolite on that\n"
                "specific Pokémon and the Pokémon isn't holding \n"
                "an Eviolite as this game changed it to make it \n"
                "work similar to an everstone.                  \n"
                "Also check that the Pokémon evolution is not   \n"
                "different in this game since some of them were \n"
                "changed, check the in-game Pokedex for more    \n"
                "information, and make sure you are not in the \n"
                "No-Evolution mode."
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_16] = {
            .title = _("What is the shiny rate in this game?"),
            .description = 
            //Page 1
            _(
                "The same shiny rate is 1/4000 but you can get a\n"
                "shiny charm that doubles those chances after   \n"
                "you get your 16th badge."
            ),
            .numPages = 1
        },
        [FAQ_INFORMATION_17] = {
            .title = _("Is any Pokémon shiny locked?"),
            .description = 
            //Page 1
            _(
                "No, there are no shiny locked Pokemon."
            ),
            .numPages = 1
        },
    },
    
    [INFORMATION_ENTRIES_TRAINER_TIPS] = {
        [TRAINER_TIPS_INFORMATION_1] = {
            .title = _("1 - Wonder Trade"),
            .description = 
            //Page 1
            _(
                "You can wonder trade in any Pokémon Center in  \n"
                "exchange for 5BP."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_2] = {
            .title = _("2 - Mystery Gift"),
            .description = 
            //Page 1
            _(
                "You can get your mystery gift by saving the    \n"
                "game, reseting and using the option Myster Gift\n"
                "in the save load menu."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_3] = {
            .title = _("3 - Starters"),
            .description = 
            //Page 1
            _(
                "You can get starters by trading red, green and \n"
                "blue shards in Lavaridge, Fortree and Lilycove."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_4] = {
            .title = _("4 - Ash Greninja"),
            .description = 
            //Page 1
            _(
                "You can change any Greninja ability with an    \n"
                "ability capsule to get a Battle Bond Greninja."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_5] = {
            .title = _("5 - Evolution Requirment"),
            .description = 
            //Page 1
            _(
                "You can see any Pokémon Evolution requirements \n"
                "in the summary screen in the last page by      \n"
                "scrolling the info pressing A."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_6] = {
            .title = _("6 - Dexnav Chain"),
            .description = 
            //Page 1
            _(
                "If the dexnav chain is not working for you it's\n"
                "because you have to Register the Pokemon in the\n"
                "dexnav before starting the chain by pressing R \n"
                "in the Dexnav menu."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_7] = {
            .title = _("7 - Evolution Items"),
            .description = 
            //Page 1
            _(
                "You can get all the evolution items in Oldale  \n"
                "or in Eight island at 20 Battle Points each."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_8] = {
            .title = _("8 - Nature Mints"),
            .description = 
            //Page 1
            _(
                "You can get nature mints in Oldale Battle Mart \n"
                "for 10BP a piece."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_9] = {
            .title = _("9 - Gym Leader"),
            .description = 
            //Page 1
            _(
                "In hard mode the Gym leader will match the     \n"
                "number of Pokémon in your team early on, if you\n"
                "are having problems you can leave some of them \n"
                "in the Pokemon Storage System."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_10] = {
            .title = _("10 - Farm BP"),
            .description = 
            //Page 1
            _(
                "You can farm BP by rebattling Gym Trainers, you\n"
                "can fight them an infinite number of times by  \n"
                "talking with the leader after defeating it in a\n"
                "rematch."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_11] = {
            .title = _("11 - Mega Bracelet"),
            .description = 
            //Page 1
            _(
                "You can get the Mega Bracelet by defeating 11  \n"
                "gym leaders."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_12] = {
            .title = _("12 - Sevii Island Tickets"),
            .description = 
            //Page 1
            _(
                "You can get more Sevii Island Tickets by       \n"
                "finding corless at the end of each island route\n"
                "or dungeon, you also always start with one     \n"
                "random ticket."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_13] = {
            .title = _("13 - Level Caps"),
            .description = 
            //Page 1
            _(
                "In Normal or Hard difficulty mode, the level of\n"
                "the Gym Leader's strongest pokemon will        \n"
                "determine your own Level Cap. On Normal mode,  \n"
                "you will gain XP & levels but your stats will  \n"
                "remain locked in at the level cap until you    \n"
                "clear the Gym. On Hard mode, you will not gain \n"
                "any XP until you clear the Gym."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_14] = {
            .title = _("14 - Trainer Skills - Stat Boosts"),
            .description = 
            //Page 1
            _(
                "Don't forget to invest some of your Trainer    \n"
                "Skill points into Stat Boosts! For each point  \n"
                "you invest, all pokemon you own gain an 3 IVs  \n"
                "in that Stat."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_15] = {
            .title = _("16 - Trainer Skills - Stat Boosts 2"),
            .description = 
            //Page 1
            _(
                "All Pokemon start with 0 IVs until you begin   \n"
                "putting in Skill points for Stat Boosts. If you\n"
                "notice your Pokemon isn't performing the way   \n"
                "you like, try adding to your Stat Boosts."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_16] = {
            .title = _("16 - Trainer Skills - Bonus Battle"),
            .description = 
            //Page 1
            _(
                "BP is used for some of the best & most         \n"
                "important items in the game, so take advantage \n"
                "early by investing in Bonus Battle skills.     \n"
                "This increases the chance you get double BP    \n"
                "from any battle."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_17] = {
            .title = _("17 - Trainer Skills - XP Boosts"),
            .description = 
            //Page 1
            _(
                "There's a lot of milestones to reach in Rowe   \n"
                "but if you want to get there fast invest in    \n"
                "these Skills. Trainer XP Boost will make       \n"
                "collecting other skills much easier, while     \n"
                "Pokemon XP boost will help lessen the grind on \n"
                "your journey!"
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_18] = {
            .title = _("18 - Trainer Skills - XP Boosts"),
            .description = 
            //Page 1
            _(
                "Pokemon in your party that know an Egg/Tutor   \n"
                "move can teach your other (compatible) Pokemon \n"
                "how to use the move. Simply place two pokemon  \n"
                "of the same egg group in your party and selec  \n"
                "Learn Moves on the pokemon you want to teach.  \n"
                "Ifyou're struggling early in the game, try     \n"
                "catching lots of pokemon and seeing if you can \n"
                "get any Egg moves!"
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_19] = {
            .title = _("19 - Shiny Odds"),
            .description = 
            //Page 1
            _(
                "Your Shiny odds are 1/4096, but you can make   \n"
                "finding them easier by acquiring the Shiny     \n"
                "Charm, rewarded after defeating all 16 gyms."
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_20] = {
            .title = _("20 - Dexnav Shiny Hunt"),
            .description = 
            //Page 1
            _(
                "You can Shiny hunt with DexNav! Target your    \n"
                "selected pokemon, and you will have increased  \n"
                "odds after 50 consecutive KOs. Be sure to bring\n"
                "a party member who can efficiently fight your  \n"
                "target!"
            ),
            .numPages = 1
        },
        [TRAINER_TIPS_INFORMATION_21] = {
            .title = _("21 - Encounter First Stages"),
            .description = 
            //Page 1
            _(
                "If you give your leading Pokémon an Everstone, \n"
                "you will only encounter the base form of the   \n"
                "Pokemon you would've seen, regardless of the   \n"
                "Level of the wild pokemon."
            ),
            .numPages = 1
        },
    },
};