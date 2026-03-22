#define MINT_PRICE         4500
#define MINT_PRICE_BP      10
#define EVO_ITEMS_PRICE    4500
#define EVO_ITEMS_PRICE_BP 20
#define MEGA_STONE_ITEMS_PRICE_BP 35
#define FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET 0

#define ITEM_DESCRIPTION_WIDTH  103
#define ITEM_DESCRIPTION_FONT  8 // FONT_SMALL_NARROW
#define FORMAT_ITEM_DESCRIPTION(str) (const u8[]) _f(ITEM_DESCRIPTION_FONT, ITEM_DESCRIPTION_WIDTH, str)

const struct Item gItems[ITEMS_COUNT] =
{
    [ITEM_NONE] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("?????"),
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

// Pokeballs
    [ITEM_MASTER_BALL] =
    {
        .name = _("Poké Ball"),
        .itemId = ITEM_MASTER_BALL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sirve para atrapar Pokémon salvajes."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tool used for catching wild Pokémon."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 1,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 0,
        .buyFlag = FLAG_TEMP_1,
    },

    [ITEM_ULTRA_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ultraball"),
#else
        .name = _("Ultra Ball"),
#endif
        .itemId = ITEM_ULTRA_BALL,
        .price = 600,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Es muy buena. Tiene más índice de éxito que la Superball."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A better Ball with a higher catch rate than a Great Ball."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 1,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 1,
    },

    [ITEM_GREAT_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Superball"),
#else
        .name = _("Great Ball"),
#endif
        .itemId = ITEM_GREAT_BALL,
        .price = 300,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Es buena. Tiene más índice de éxito que la Poké Ball."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A good Ball with a higher catch rate than a Poké Ball."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 2,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 2,
    },

    [ITEM_POKE_BALL] =
    {
        .name = _("Poké Ball"),
        .itemId = ITEM_POKE_BALL,
        .price = 100,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sirve para atrapar Pokémon salvajes."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tool used for catching wild Pokémon."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 3,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 3,
    },

    [ITEM_SAFARI_BALL] =
    {
        .name = _("Safari Ball"),
        .itemId = ITEM_SAFARI_BALL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene una función especial. Se usa en la Zona Safari."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A special Ball that is used only in the Safari Zone."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 4,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 4,
    },

    [ITEM_NET_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Malla Ball"),
#else
        .name = _("Net Ball"),
#endif
        .itemId = ITEM_NET_BALL,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Funciona bien con los Pokémon de tipo Agua y Bicho."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Ball that works well on Water- and Bug-type Pokémon."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 5,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 5,
    },

    [ITEM_DIVE_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Buceo Ball"),
#else
        .name = _("Dive Ball"),
#endif
        .itemId = ITEM_DIVE_BALL,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Funciona mejor con los Pokémon del fondo del mar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Ball that works better on Pokémon on the ocean floor."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 6,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 6,
    },

    [ITEM_NEST_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Nido Ball"),
#else
        .name = _("Nest Ball"),
#endif
        .itemId = ITEM_NEST_BALL,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Funciona mejor con los Pokémon de menor nivel."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Ball that works better on weaker Pokémon."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 7,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 7,
    },

    [ITEM_REPEAT_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Acopio Ball"),
#else
        .name = _("Repeat Ball"),
#endif
        .itemId = ITEM_REPEAT_BALL,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Funciona mejor con los que son iguales a los que ya tienes."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Ball that works better on Pokémon caught before."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 8,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 8,
    },

    [ITEM_TIMER_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Turno Ball"),
#else
        .name = _("Timer Ball"),
#endif
        .itemId = ITEM_TIMER_BALL,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Funciona mejor al avanzar el combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Ball that gains power in battles taking many turns."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 9,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 9,
    },

    [ITEM_LUXURY_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Lujo Ball"),
#else
        .name = _("Luxury Ball"),
#endif
        .itemId = ITEM_LUXURY_BALL,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Es muy acogedora. Hace a los Pokémon más simpáticos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A cozy Ball that makes Pokémon more friendly."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 10,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 10,
    },

    [ITEM_PREMIER_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Honor Ball"),
#else
        .name = _("Premier Ball"),
#endif
        .itemId = ITEM_PREMIER_BALL,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Es muy particular. Se hizo para conmemorar algo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A rare Ball made in commemoration of some event."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 11,
    },

    [ITEM_LEVEL_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Nivel Ball"),
#else
        .name = _("Level Ball"),
#endif
        .itemId = ITEM_LEVEL_BALL,
        .price = 2000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Funciona mejor con Pokémon de bajo nivel."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Ball that works well on lower level Pokémon."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 12,
    },

    [ITEM_LURE_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cebo Ball"),
#else
        .name = _("Lure Ball"),
#endif
        .itemId = ITEM_LURE_BALL,
        .price = 2000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Funciona mejor con Pokémon pescados con una caña."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Ball that works well on fished up Pokémon."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 13,
    },

    [ITEM_MOON_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Luna Ball"),
#else
        .name = _("Moon Ball"),
#endif
        .itemId = ITEM_MOON_BALL,
        .price = 2000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Va muy bien con Pokémon que evol. con Piedra Lunar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Ball that works well on Moon Stone users."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 14,
    },

    [ITEM_FRIEND_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Amigo Ball"),
#else
        .name = _("Friend Ball"),
#endif
        .itemId = ITEM_FRIEND_BALL,
        .price = 2000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace a los Pokémon más amigables al ser atrapados."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Ball that makes a Pokémon friendly when caught."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 15,
    },

    [ITEM_LOVE_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Amor Ball"),
#else
        .name = _("Love Ball"),
#endif
        .itemId = ITEM_LOVE_BALL,
        .price = 2000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Funciona mejor con Pokémon del sexo opuesto."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Works well on Pokémon of the opposite gender."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 16,
    },

    [ITEM_HEAVY_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Peso Ball"),
#else
        .name = _("Heavy Ball"),
#endif
        .itemId = ITEM_HEAVY_BALL,
        .price = 2000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Funciona mejor con Pokémon pesados."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Works well on very heavy Pokémon."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 17,
    },

    [ITEM_FAST_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Rapid Ball"),
#else
        .name = _("Fast Ball"),
#endif
        .itemId = ITEM_FAST_BALL,
        .price = 2000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Funciona mejor con Pokémon rápidos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Works well on very fast Pokémon."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 18,
    },

    [ITEM_HEAL_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Sana Ball"),
#else
        .name = _("Heal Ball"),
#endif
        .itemId = ITEM_HEAL_BALL,
        .price = 300,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Cura a los Pokémon atrapados."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A remedial Ball that restores caught Pokémon."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 19,
    },

    [ITEM_QUICK_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Veloz Ball"),
#else
        .name = _("Quick Ball"),
#endif
        .itemId = ITEM_QUICK_BALL,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Funciona mejor al ser usada en el primer turno."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Works well if used on the first turn."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 20,
    },

    [ITEM_DUSK_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ocaso Ball"),
#else
        .name = _("Dusk Ball"),
#endif
        .itemId = ITEM_DUSK_BALL,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Funciona mejor al ser usada en lugares oscuros."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Works well if used in a dark place."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 21,
    },

    [ITEM_CHERISH_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gloria Ball"),
#else
        .name = _("Cherish Ball"),
#endif
        .itemId = ITEM_CHERISH_BALL,
        .price = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Creada para. conmemorar un evento."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A rare Ball made in commemoration of some event."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 22,
    },

    [ITEM_SPORT_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Competi Ball"),
#else
        .name = _("Sport Ball"),
#endif
        .itemId = ITEM_SPORT_BALL,
        .price = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Utilizada en el concurso cazabichos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A special Ball used in the Bug- Catching Contest."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 23, // To Do
    },

    [ITEM_PARK_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Parque Ball"),
#else
        .name = _("Park Ball"),
#endif
        .itemId = ITEM_PARK_BALL,
        .price = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Utilizada en el Parque Compi."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A special Ball for the Pal Park."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 24, // To Do
    },

    [ITEM_DREAM_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ensueño Ball"),
#else
        .name = _("Dream Ball"),
#endif
        .itemId = ITEM_DREAM_BALL,
        .price = 2400,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Funciona mejor con Pokémon dormidos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Poké Ball used in the Entree Forest. It doesn't fail."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 25, // To Do
    },

    [ITEM_BEAST_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ente Ball"),
#else
        .name = _("Beast Ball"),
#endif
        .itemId = ITEM_BEAST_BALL,
        .price = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Diseñada para atrapar Ultra Entes."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Ball designed to catch Ultra Beasts."),
#endif
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 26, // To Do
    },

// Medicine

    [ITEM_POTION] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Poción"),
#else
        .name = _("Potion"),
#endif
        .itemId = ITEM_POTION,
        .price = 300,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Restaura 20 PS de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Restores the HP of a Pokémon by 20 points."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_ANTIDOTE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Antídoto"),
#else
        .name = _("Antidote"),
#endif
        .itemId = ITEM_ANTIDOTE,
        .price = 100,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Cura a un Pokémon envenenado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Heals a poisoned Pokémon."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_BURN_HEAL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Antiquemar"),
#else
        .name = _("Burn Heal"),
#endif
        .itemId = ITEM_BURN_HEAL,
        .price = 250,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Cura a un Pokémon quemado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Heals Pokémon of a burn."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_ICE_HEAL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Antihielo"),
#else
        .name = _("Ice Heal"),
#endif
        .itemId = ITEM_ICE_HEAL,
        .price = 250,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Descongela a los Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Defrosts a frozen Pokémon."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_AWAKENING] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Despertar"),
#else
        .name = _("Awakening"),
#endif
        .itemId = ITEM_AWAKENING,
        .price = 250,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Despierta a un Pokémon dormido."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Awakens a sleeping Pokémon."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_PARALYZE_HEAL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Antiparalizador"),
#else
        .name = _("Parlyz Heal"),
#endif
        .itemId = ITEM_PARALYZE_HEAL,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Cura a un Pokémon paralizado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Heals a paralyzed Pokémon."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_FULL_RESTORE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Restaurar Todo"),
#else
        .name = _("Full Restore"),
#endif
        .itemId = ITEM_FULL_RESTORE,
        .price = 3000,
        .holdEffectParam = 255,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Restaura todos los PS y el estado de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Fully restores the HP and status of a Pokémon."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_MAX_POTION] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Máxima Poción"),
#else
        .name = _("Max Potion"),
#endif
        .itemId = ITEM_MAX_POTION,
        .price = 2500,
        .holdEffectParam = 255,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Restaura todos los PS de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Fully restores the HP of a Pokémon."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_HYPER_POTION] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Hiperpoción"),
#else
        .name = _("Hyper Potion"),
#endif
        .itemId = ITEM_HYPER_POTION,
        .price = 1200,
        .holdEffectParam = 120,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Restaura 120 PS de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Restores the HP of a Pokémon by 120 points."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_SUPER_POTION] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Superpoción"),
#else
        .name = _("Super Potion"),
#endif
        .itemId = ITEM_SUPER_POTION,
        .price = 700,
        .holdEffectParam = 60,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Restaura 60 PS de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Restores the HP of a Pokémon by 60 points."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_FULL_HEAL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cura Total"),
#else
        .name = _("Full Heal"),
#endif
        .itemId = ITEM_FULL_HEAL,
        .price = 600,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Cura los problemas de estado de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Heals all the status problems of one Pokémon."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_REVIVE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Revivir"),
#else
        .name = _("Revive"),
#endif
        .itemId = ITEM_REVIVE,
        .price = 1500,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace revivir a un Pokémon. Le da la mitad de los PS."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Revives a fainted Pokémon with half its HP."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_MAX_REVIVE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Revivir Máximo"),
#else
        .name = _("Max Revive"),
#endif
        .itemId = ITEM_MAX_REVIVE,
        .price = 4000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace revivir a un Pokémon debilitado. Le da todos los PS."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Revives a fainted Pokémon with all its HP."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_FRESH_WATER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Agua Fresca"),
#else
        .name = _("Fresh Water"),
#endif
        .itemId = ITEM_FRESH_WATER,
        .price = 200,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Agua mineral que restaura 30 PS."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A mineral water that restores HP by 30 points."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_SODA_POP] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Refresco"),
#else
        .name = _("Soda Pop"),
#endif
        .itemId = ITEM_SODA_POP,
        .price = 300,
        .holdEffectParam = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bebida gaseosa que restaura 50 PS."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A fizzy soda drink that restores HP by 50 points."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_LEMONADE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Limonada"),
#else
        .name = _("Lemonade"),
#endif
        .itemId = ITEM_LEMONADE,
        .price = 350,
        .holdEffectParam = 70,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bebida dulce que restaura 70 PS."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A very sweet drink that restores HP by 70 points."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_MOOMOO_MILK] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Leche Mu-Mu"),
#else
        .name = _("Moomoo Milk"),
#endif
        .itemId = ITEM_MOOMOO_MILK,
        .price = 500,
        .holdEffectParam = 100,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Nutritiva leche que restaura 100 PS."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A nutritious milk that restores HP by 100 points."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_ENERGY_POWDER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Polvo Energía"),
#else
        .name = _("Energypowder"),
#endif
        .itemId = ITEM_ENERGY_POWDER,
        .price = 500,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Polvo amargo que restaura 50 PS."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A bitter powder that restores HP by 50 points."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_ENERGY_ROOT] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Raíz Energía"),
#else
        .name = _("Energy Root"),
#endif
        .itemId = ITEM_ENERGY_ROOT,
        .price = 800,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Raíz amarga que restaura 200 PS."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A bitter root that restores HP by 200 points."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_HEAL_POWDER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Polvo Curación"),
#else
        .name = _("Heal Powder"),
#endif
        .itemId = ITEM_HEAL_POWDER,
        .price = 450,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Polvos amargos que curan los problemas de estado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A bitter powder that heals all status problems."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_REVIVAL_HERB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Hierba Revivir"),
#else
        .name = _("Revival Herb"),
#endif
        .itemId = ITEM_REVIVAL_HERB,
        .price = 2800,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hierba amarga que hace revivir a un Pokémon debilitado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A very bitter herb that revives a fainted Pokémon."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_ETHER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Éter"),
#else
        .name = _("Ether"),
#endif
        .itemId = ITEM_ETHER,
        .price = 1200,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Restaura 10 PP del ataque que elijas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Restores the PP of a selected move by 10."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
        .secondaryId = 0,
    },

    [ITEM_MAX_ETHER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Éter Máximo"),
#else
        .name = _("Max Ether"),
#endif
        .itemId = ITEM_MAX_ETHER,
        .price = 2000,
        .holdEffectParam = 255,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Restaura los PP del ataque que elijas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Fully restores the PP of a selected move."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
        .secondaryId = 0,
    },

    [ITEM_ELIXIR] =
    {
        .name = _("Elixir"),
        .itemId = ITEM_ELIXIR,
        .price = 3000,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Restaura 10 PP de todos los ataques."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Restores the PP of all moves by 10."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
        .secondaryId = 0,
    },

    [ITEM_MAX_ELIXIR] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Elixir Máximo"),
#else
        .name = _("Max Elixir"),
#endif
        .itemId = ITEM_MAX_ELIXIR,
        .price = 4500,
        .holdEffectParam = 255,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Restaura los PP de todos los ataques de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Fully restores the PP of a Pokémon's moves."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
        .secondaryId = 0,
    },

    [ITEM_LAVA_COOKIE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Galleta Lava"),
#else
        .name = _("Lava Cookie"),
#endif
        .itemId = ITEM_LAVA_COOKIE,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Dulce típico que cura los problemas de estado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A local specialty that heals all status problems."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_BLUE_FLUTE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Flauta Azul"),
#else
        .name = _("Blue Flute"),
#endif
        .itemId = ITEM_BLUE_FLUTE,
        .price = 100,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Flauta de cristal que despierta a los Pokémon dormidos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A glass flute that awakens sleeping Pokémon."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_YELLOW_FLUTE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Flauta Amarilla"),
#else
        .name = _("Yellow Flute"),
#endif
        .itemId = ITEM_YELLOW_FLUTE,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Flauta de cristal que espabila a los Pokémon confusos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A glass flute that snaps Pokémon out of confusion."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_RED_FLUTE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Flauta Roja"),
#else
        .name = _("Red Flute"),
#endif
        .itemId = ITEM_RED_FLUTE,
        .price = 300,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Flauta de cristal que pone fin a la atracción."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A glass flute that snaps Pokémon out of attraction."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_BLACK_FLUTE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Flauta Negra"),
#else
        .name = _("Black Flute"),
#endif
        .itemId = ITEM_BLACK_FLUTE,
        .price = 400,
        .holdEffectParam = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Flauta de cristal que aleja a los Pokémon salvajes."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A glass flute that keeps away wild Pokémon."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
        .secondaryId = 0,
    },

    [ITEM_WHITE_FLUTE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Flauta Blanca"),
#else
        .name = _("White Flute"),
#endif
        .itemId = ITEM_WHITE_FLUTE,
        .price = 500,
        .holdEffectParam = 150,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Flauta de cristal que atrae a los Pokémon salvajes."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A glass flute that lures wild Pokémon."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
        .secondaryId = 0,
    },

    [ITEM_BERRY_JUICE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Zumo de Baya"),
#else
        .name = _("Berry Juice"),
#endif
        .itemId = ITEM_BERRY_JUICE,
        .price = 100,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Zumo 100% natural que restaura 20 PS."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A 100% pure juice that restores HP by 20 points."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_SWEET_HEART] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Corazón Dulce"),
#else
        .name = _("Sweet Heart"),
#endif
        .itemId = ITEM_SWEET_HEART,
        .price = 3000,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Un chocolate muy dulce que restaura 20 PS."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A sweet chocolate that restores HP by 20 points."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_BIG_MALASADA] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Malasada Maxi"),
#else
        .name = _("Big Malasada"),
#endif
        .itemId = ITEM_BIG_MALASADA,
        .price = 350,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Cura los problemas de estado de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Heals all the status problems of one Pokémon."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_OLD_GATEAU] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Barrita Plus"),
#else
        .name = _("Old Gateau"),
#endif
        .itemId = ITEM_OLD_GATEAU,
        .price = 350,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Cura los problemas de estado de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Heals all the status problems of one Pokémon."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_SACRED_ASH] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ceniza Sagrada"),
#else
        .name = _("Sacred Ash"),
#endif
        .itemId = ITEM_SACRED_ASH,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Recupera del todo a los Pokémon debilitados."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Fully revives and restores all fainted Pokémon."),
#endif
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_SacredAsh,
        .secondaryId = 0,
    },

// Collectibles

    [ITEM_SHOAL_SALT] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Sal Cardumen"),
#else
        .name = _("Shoal Salt"),
#endif
        .itemId = ITEM_SHOAL_SALT,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sal procedente de lo más profundo de la Cueva Cardumen."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Salt obtained from deep inside the Shoal Cave."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SHOAL_SHELL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Concha Cardumen"),
#else
        .name = _("Shoal Shell"),
#endif
        .itemId = ITEM_SHOAL_SHELL,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Concha marina de lo más profundo de la Cueva Cardumen."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A seashell found deep inside the Shoal Cave."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_RED_SHARD] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Parte Roja"),
#else
        .name = _("Red Shard"),
#endif
        .itemId = ITEM_RED_SHARD,
        .price = 200,
        .bpPrice = MINT_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Parte de un objeto antiguo. Se vende a bajo precio."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A shard from an ancient item. Can be sold cheaply."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BLUE_SHARD] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Parte Azul"),
#else
        .name = _("Blue Shard"),
#endif
        .itemId = ITEM_BLUE_SHARD,
        .price = 200,
        .bpPrice = MINT_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Parte de un objeto antiguo. Se vende a bajo precio."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A shard from an ancient item. Can be sold cheaply."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_YELLOW_SHARD] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Parte Amarilla"),
#else
        .name = _("Yellow Shard"),
#endif
        .itemId = ITEM_YELLOW_SHARD,
        .price = 200,
        .bpPrice = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Parte de un objeto antiguo. Se vende a bajo precio."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A shard from an ancient item. Can be sold cheaply."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_GREEN_SHARD] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Parte Verde"),
#else
        .name = _("Green Shard"),
#endif
        .itemId = ITEM_GREEN_SHARD,
        .price = 200,
        .bpPrice = MINT_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Parte de un objeto antiguo. Se vende a bajo precio."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A shard from an ancient item. Can be sold cheaply."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

// Vitamins

    [ITEM_HP_UP] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Más PS"),
#else
        .name = _("HP Up"),
#endif
        .itemId = ITEM_HP_UP,
        .price = 900,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Aumenta los PS de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the base HP of one Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_PROTEIN] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Proteína"),
#else
        .name = _("Protein"),
#endif
        .itemId = ITEM_PROTEIN,
        .price = 900,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Aumenta el Ataque de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the base Attack stat of one Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_IRON] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Hierro"),
#else
        .name = _("Iron"),
#endif
        .itemId = ITEM_IRON,
        .price = 900,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Aumenta la Defensa de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the base Defense stat of one Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_CARBOS] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carburante"),
#else
        .name = _("Carbos"),
#endif
        .itemId = ITEM_CARBOS,
        .price = 900,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube la Velocidad de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the base Speed stat of one Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_CALCIUM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Calcio"),
#else
        .name = _("Calcium"),
#endif
        .itemId = ITEM_CALCIUM,
        .price = 900,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube el At. Esp. de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the base Sp. Atk stat of one Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_RARE_CANDY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Caramelo Raro"),
#else
        .name = _("Rare Candy"),
#endif
        .itemId = ITEM_RARE_CANDY,
        .price = 9800,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Aumenta 1 nivel a un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the level of a Pokémon by one."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },
    
    [ITEM_POWER_CANDY] =
    {
        .name = _("Power Candy"),
        .itemId = ITEM_POWER_CANDY,
        .price = 9800,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Despierta a los Pokémon. Suena de maravilla."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("An item that powers up a Pokémon Individual Values."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_PowerCandy,
        .secondaryId = 0,
    },

    [ITEM_PP_UP] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Más PP"),
#else
        .name = _("PP Up"),
#endif
        .itemId = ITEM_PP_UP,
        .price = 2500,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Aumenta los PP máximos del ataque que elijas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the maximum PP of a selected move."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc =  ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ZINC] =
    {
        .name = _("Zinc"),
        .itemId = ITEM_ZINC,
        .price = 900,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Aumenta la Def. Esp. de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the base Sp. Def stat of one Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_PP_MAX] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("PP Máximos"),
#else
        .name = _("PP Max"),
#endif
        .itemId = ITEM_PP_MAX,
        .price = 5000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Aumenta los PP del ataque que elijas al máximo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the PP of a move to its maximum points."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

// Battle items

    [ITEM_GUARD_SPEC] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Protección X"),
#else
        .name = _("Guard Spec."),
#endif
        .itemId = ITEM_GUARD_SPEC,
        .price = 700,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Evita la reducción de características durante el combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Prevents stat reduction when used in battle."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
        .secondaryId = 0,
    },

    [ITEM_DIRE_HIT] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Directo"),
#else
        .name = _("Dire Hit"),
#endif
        .itemId = ITEM_DIRE_HIT,
        .price = 650,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Aumenta el índice de golpe crítico en un combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the critical-hit ratio during one battle."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
        .secondaryId = 0,
    },

    [ITEM_X_ATTACK] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ataque X"),
#else
        .name = _("X Attack"),
#endif
        .itemId = ITEM_X_ATTACK,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Aumenta el Ataque durante un combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the stat Attack during one battle."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
        .secondaryId = 0,
    },

    [ITEM_X_DEFENSE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Defensa X"),
#else
        .name = _("X Defend"),
#endif
        .itemId = ITEM_X_DEFENSE,
        .price = 2000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Aumenta la Defensa durante un combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the stat Defense during one battle."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
        .secondaryId = 0,
    },

    [ITEM_X_SPEED] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Velocidad X"),
#else
        .name = _("X Speed"),
#endif
        .itemId = ITEM_X_SPEED,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Aumenta la Velocidad durante un combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the stat Speed during one battle."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
        .secondaryId = 0,
    },

    [ITEM_X_ACCURACY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Precisión X"),
#else
        .name = _("X Accuracy"),
#endif
        .itemId = ITEM_X_ACCURACY,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube la Precisión de los ataques en un combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises accuracy of attack moves during one battle."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
        .secondaryId = 0,
    },

    [ITEM_X_SP_ATK] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("At. Especial X"),
#else
        .name = _("X Sp. Atk."),
#endif
        .itemId = ITEM_X_SP_ATK,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Aumenta el At. Esp. en un combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the stat Sp. Atk during one battle."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
        .secondaryId = 0,
    },

    [ITEM_X_SP_DEF] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Def. Especial X"),
#else
        .name = _("X Sp. Def."),
#endif
        .itemId = ITEM_X_SP_DEF,
        .price = 2000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Aumenta la Def. Esp. en un combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the stat Sp. Def during one battle."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
        .secondaryId = 0,
    },

    [ITEM_POKE_DOLL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Poké Muñeco"),
#else
        .name = _("Poké Doll"),
#endif
        .itemId = ITEM_POKE_DOLL,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sirve para huir de un combate con un Pokémon salvaje."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Use to flee from any battle with a wild Pokémon."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_Escape,
        .secondaryId = 0,
    },

    [ITEM_FLUFFY_TAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cola Skitty"),
#else
        .name = _("Fluffy Tail"),
#endif
        .itemId = ITEM_FLUFFY_TAIL,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sirve para huir de un combate con un Pokémon salvaje."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Use to flee from any battle with a wild Pokémon."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_Escape,
        .secondaryId = 0,
    },

// Field items

    [ITEM_SUPER_REPEL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Superrepelente"),
#else
        .name = _("Super Repel"),
#endif
        .itemId = ITEM_SUPER_REPEL,
        .price = 500,
        .holdEffectParam = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Repele Pokémon salvajes débiles 200 pasos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Repels weak wild Pokémon for 200 steps."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .secondaryId = 0,
    },

    [ITEM_MAX_REPEL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Repelente Maximo"),
#else
        .name = _("Max Repel"),
#endif
        .itemId = ITEM_MAX_REPEL,
        .price = 700,
        .holdEffectParam = 250,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Repele Pokémon salvajes débiles 250 pasos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Repels weak wild Pokémon for 250 steps."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .secondaryId = 0,
    },

    [ITEM_ABILITY_CAPSULE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cáps. Habilidad"),
#else
        .name = _("Ability Capsule"),
#endif
        .itemId = ITEM_ABILITY_CAPSULE,
        .price = 5000,
        .bpPrice = 15,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Intercambia la Habilidad de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Switches a Pokémon's ability."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_AbilityCapsule,
        .secondaryId = 0,
    },
    
    [ITEM_ABILITY_PATCH] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Parche Hab."),
#else
        .name = _("Ability Patch"),
#endif
        .itemId = ITEM_ABILITY_PATCH,
        .price = 10000,
        .bpPrice = 30,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Intercambia la Habilidad de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Allows a Pokémon with a regular Ability to have a rare Ability."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_AbilityPatch,
        .secondaryId = 0,
    },

    [ITEM_ESCAPE_ROPE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cuerda Huida"),
#else
        .name = _("Escape Rope"),
#endif
        .itemId = ITEM_ESCAPE_ROPE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sirve para huir de una cueva u otros sitios cerrados."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Use to escape instantly from a cave or a dungeon."),
#endif
        #if I_KEY_ESCAPE_ROPE >= GEN_8
        .price = 0,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        #else
        .price = 550,
        .importance = 0,
        .pocket = POCKET_ITEMS,
        #endif
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_EscapeRope,
        .secondaryId = 0,
    },

    [ITEM_REPEL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Repelente"),
#else
        .name = _("Repel"),
#endif
        .itemId = ITEM_REPEL,
        .price = 350,
        .holdEffectParam = 100,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Repele Pokémon salvajes débiles 100 pasos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Repels weak wild Pokémon for 100 steps."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .secondaryId = 0,
    },

// Evolution stones

    [ITEM_SUN_STONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piedra Solar"),
#else
        .name = _("Sun Stone"),
#endif
        .itemId = ITEM_SUN_STONE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace evolucionar a varias especies de Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_MOON_STONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piedra Lunar"),
#else
        .name = _("Moon Stone"),
#endif
        .itemId = ITEM_MOON_STONE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace evolucionar a varias especies de Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_FIRE_STONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piedra Fuego"),
#else
        .name = _("Fire Stone"),
#endif
        .itemId = ITEM_FIRE_STONE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace evolucionar a varias especies de Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_THUNDER_STONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piedra Trueno"),
#else
        .name = _("ThunderStone"),
#endif
        .itemId = ITEM_THUNDER_STONE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace evolucionar a varias especies de Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_WATER_STONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piedra Agua"),
#else
        .name = _("Water Stone"),
#endif
        .itemId = ITEM_WATER_STONE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace evolucionar a varias especies de Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_LEAF_STONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piedra Hoja"),
#else
        .name = _("Leaf Stone"),
#endif
        .itemId = ITEM_LEAF_STONE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace evolucionar a varias especies de Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_DAWN_STONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piedra Alba"),
#else
        .name = _("Dawn Stone"),
#endif
        .itemId = ITEM_DAWN_STONE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace evolucionar a varias especies de Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_DUSK_STONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piedra Noche"),
#else
        .name = _("Dusk Stone"),
#endif
        .itemId = ITEM_DUSK_STONE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace evolucionar a varias especies de Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_SHINY_STONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piedra Día"),
#else
        .name = _("Shiny Stone"),
#endif
        .itemId = ITEM_SHINY_STONE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace evolucionar a varias especies de Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_ICE_STONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piedra Hielo"),
#else
        .name = _("Ice Stone"),
#endif
        .itemId = ITEM_ICE_STONE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace evolucionar a varias especies de Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

// Valuable items

    [ITEM_RED_APRICORN] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bonguri Rojo"),
#else
        .name = _("Red Apricorn"),
#endif
        .itemId = ITEM_RED_APRICORN,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bonguri de color rojo y aroma muy penetrante."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A red apricorn. It assails your nostrils."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BLUE_APRICORN] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bonguri Azul"),
#else
        .name = _("Blue Apricorn"),
#endif
        .itemId = ITEM_BLUE_APRICORN,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bonguri de color azul y aroma tierno."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A blue apricorn. It smells a bit like grass."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_YELLOW_APRICORN] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bonguri Amarillo"),
#else
        .name = _("Yellow Apricorn"),
#endif
        .itemId = ITEM_YELLOW_APRICORN,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bonguri de color azul y aroma refrescante."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A yellow apricorn. It has an invigor- ating scent."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_GREEN_APRICORN] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bonguri Verde"),
#else
        .name = _("Green Apricorn"),
#endif
        .itemId = ITEM_GREEN_APRICORN,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bonguri de color verde y aroma a café tostado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A green apricorn. It has a strange, aromatic scent."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PINK_APRICORN] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bonguri Rosa"),
#else
        .name = _("Pink Apricorn"),
#endif
        .itemId = ITEM_PINK_APRICORN,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bonguri de color rosa y aroma azul."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A pink apricorn. It has a nice, sweet scent."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_WHITE_APRICORN] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bonguri Blanco"),
#else
        .name = _("White Apricorn"),
#endif
        .itemId = ITEM_WHITE_APRICORN,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bonguri de color blanco sin aroma alguno."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A white apricorn. It doesn't smell like anything."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BLACK_APRICORN] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bonguri Negro"),
#else
        .name = _("Black Apricorn"),
#endif
        .itemId = ITEM_BLACK_APRICORN,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bonguri de color negro y aroma indescriptible."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A black apricorn. It has an inde- scribable scent."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_TINY_MUSHROOM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Mini Seta"),
#else
        .name = _("Tiny Mushroom"),
#endif
        .itemId = ITEM_TINY_MUSHROOM,
        .price = 500,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Seta común. Se vende a bajo precio."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A plain mushroom that would sell at a cheap price."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BIG_MUSHROOM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Seta Grande"),
#else
        .name = _("Big Mushroom"),
#endif
        .itemId = ITEM_BIG_MUSHROOM,
        .price = 5000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Seta poco común. Se vende a alto precio."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A rare mushroom that would sell at a high price."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PEARL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Perla"),
#else
        .name = _("Pearl"),
#endif
        .itemId = ITEM_PEARL,
        .price = 1400,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bonita perla que se vende a bajo precio."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A pretty pearl that would sell at a cheap price."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BIG_PEARL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Perla Grande"),
#else
        .name = _("Big Pearl"),
#endif
        .itemId = ITEM_BIG_PEARL,
        .price = 7500,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Perla grande y bella que se vende a alto precio."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A lovely large pearl that would sell at a high price."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_STARDUST] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Polvoestelar"),
#else
        .name = _("Stardust"),
#endif
        .itemId = ITEM_STARDUST,
        .price = 2000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bonita arena roja que se vende a alto precio."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Beautiful red sand. Can be sold at a high price."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_STAR_PIECE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Trozo Estrella"),
#else
        .name = _("Star Piece"),
#endif
        .itemId = ITEM_STAR_PIECE,
        .price = 9800,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Trozo de gema roja que se vende a alto precio."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A red gem shard. It would sell for a very high price."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_NUGGET] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pepita"),
#else
        .name = _("Nugget"),
#endif
        .itemId = ITEM_NUGGET,
        .price = 10000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Pepita de oro puro que se vende a alto precio."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A nugget of pure gold. Can be sold at a high price."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_HEART_SCALE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Escama Corazón"),
#else
        .name = _("Heart Scale"),
#endif
        .itemId = ITEM_HEART_SCALE,
        .holdEffect = HOLD_EFFECT_HEART_SCALE,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Escama preciosa. Pieza codiciada por coleccionistas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A lovely scale. It is coveted by collectors."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_RED_NECTAR] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Néctar Rojo"),
#else
        .name = _("Red Nectar"),
#endif
        .itemId = ITEM_RED_NECTAR,
        .price = 300,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Nectar floral que cambia la forma de cierto Pokémon"),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Flower nectar that changes the form of certain Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Placeholder
        .secondaryId = 0,
    },

    [ITEM_YELLOW_NECTAR] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Néctar Amarillo"),
#else
        .name = _("Yellow Nectar"),
#endif
        .itemId = ITEM_YELLOW_NECTAR,
        .price = 300,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Nectar floral que cambia la forma de cierto Pokémon"),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Flower nectar that changes the form of certain Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Placeholder
        .secondaryId = 0,
    },

    [ITEM_PINK_NECTAR] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Néctar Rosa"),
#else
        .name = _("Pink Nectar"),
#endif
        .itemId = ITEM_PINK_NECTAR,
        .price = 300,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Nectar floral que cambia la forma de cierto Pokémon"),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Flower nectar that changes the form of certain Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Placeholder
        .secondaryId = 0,
    },

    [ITEM_PURPLE_NECTAR] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Néctar Violeta"),
#else
        .name = _("Purple Nectar"),
#endif
        .itemId = ITEM_PURPLE_NECTAR,
        .price = 300,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Nectar floral que cambia la forma de cierto Pokémon"),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Flower nectar that changes the form of certain Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Placeholder
        .secondaryId = 0,
    },

    [ITEM_RARE_BONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Hueso Raro"),
#else
        .name = _("Rare Bone"),
#endif
        .itemId = ITEM_RARE_BONE,
        .price = 5000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Un hueso poco común que se vende a alto precio."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A very rare bone. It can be sold at a high price."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

// Mail
    [ITEM_ORANGE_MAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carta Naranja"),
#else
        .name = _("Orange Mail"),
#endif
        .itemId = ITEM_ORANGE_MAIL,
        .price = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sale Zigzagoon. Debe llevarla un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Zigzagoon-print Mail to be held by a Pokémon."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = 0,
    },

    [ITEM_HARBOR_MAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carta Puerto"),
#else
        .name = _("Harbor Mail"),
#endif
        .itemId = ITEM_HARBOR_MAIL,
        .price = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sale Wingull. Debe llevarla un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Wingull-print Mail to be held by a Pokémon."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = 1,
    },

    [ITEM_GLITTER_MAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carta Brillo"),
#else
        .name = _("Glitter Mail"),
#endif
        .itemId = ITEM_GLITTER_MAIL,
        .price = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sale Pikachu. Debe llevarla un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Pikachu-print Mail to be held by a Pokémon."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = 2,
    },

    [ITEM_MECH_MAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carta Imán"),
#else
        .name = _("Mech Mail"),
#endif
        .itemId = ITEM_MECH_MAIL,
        .price = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sale Magnemite. Debe llevarla un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Magnemite-print Mail to be held by a Pokémon."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = 3,
    },

    [ITEM_WOOD_MAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carta Madera"),
#else
        .name = _("Wood Mail"),
#endif
        .itemId = ITEM_WOOD_MAIL,
        .price = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sale Slakoth. Debe llevarla un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Slakoth-print Mail to be held by a Pokémon."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = 4,
    },

    [ITEM_WAVE_MAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carta Ola"),
#else
        .name = _("Wave Mail"),
#endif
        .itemId = ITEM_WAVE_MAIL,
        .price = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sale Wailmer. Debe llevarla un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Wailmer-print Mail to be held by a Pokémon."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = 5,
    },

    [ITEM_BEAD_MAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carta Imagen"),
#else
        .name = _("Bead Mail"),
#endif
        .itemId = ITEM_BEAD_MAIL,
        .price = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Carta con la imagen del Pokémon que la lleva."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Mail featuring a sketch of the holding Pokémon."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = 6,
    },

    [ITEM_SHADOW_MAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carta Sombra"),
#else
        .name = _("Shadow Mail"),
#endif
        .itemId = ITEM_SHADOW_MAIL,
        .price = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sale Duskull. Debe llevarla un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Duskull-print Mail to be held by a Pokémon."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = 7,
    },

    [ITEM_TROPIC_MAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carta Tropical"),
#else
        .name = _("Tropic Mail"),
#endif
        .itemId = ITEM_TROPIC_MAIL,
        .price = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sale Bellossom. Debe llevarla un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A Bellossom-print Mail to be held by a Pokémon."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = 8,
    },

    [ITEM_DREAM_MAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carta Sueño"),
#else
        .name = _("Dream Mail"),
#endif
        .itemId = ITEM_DREAM_MAIL,
        .price = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Carta con la imagen del Pokémon que la lleva."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Mail featuring a sketch of the holding Pokémon."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = 9,
    },

    [ITEM_FAB_MAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carta Fabulosa"),
#else
        .name = _("Fab Mail"),
#endif
        .itemId = ITEM_FAB_MAIL,
        .price = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Fabuloso dibujo. Debe llevarla un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A gorgeous-print Mail to be held by a Pokémon."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = 10,
    },

    [ITEM_RETRO_MAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carta Retro"),
#else
        .name = _("Retro Mail"),
#endif
        .itemId = ITEM_RETRO_MAIL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Carta con las imágenes de tres Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Mail featuring the drawings of three Pokémon."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = 11,
    },

// Berries

    [ITEM_CHERI_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Zreza"),
#else
        .name = _("Cheri Berry"),
#endif
        .itemId = ITEM_CHERI_BERRY,
        .price = 200,
        .holdEffect = HOLD_EFFECT_CURE_PAR,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, cura la parálisis en el combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that heals paralysis in battle."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_CHESTO_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Atania"),
#else
        .name = _("Chesto Berry"),
#endif
        .itemId = ITEM_CHESTO_BERRY,
        .price = 200,
        .holdEffect = HOLD_EFFECT_CURE_SLP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, te despierta en el combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that awakens Pokémon in battle."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_PECHA_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Meloc"),
#else
        .name = _("Pecha Berry"),
#endif
        .itemId = ITEM_PECHA_BERRY,
        .price = 200,
        .holdEffect = HOLD_EFFECT_CURE_PSN,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, cura el envenenamiento en el combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that heals poisoning in battle."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_RAWST_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Safre"),
#else
        .name = _("Rawst Berry"),
#endif
        .itemId = ITEM_RAWST_BERRY,
        .price = 200,
        .holdEffect = HOLD_EFFECT_CURE_BRN,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, cura las quemaduras en el combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that heals a burn in battle."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_ASPEAR_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Perasi"),
#else
        .name = _("Aspear Berry"),
#endif
        .itemId = ITEM_ASPEAR_BERRY,
        .price = 200,
        .holdEffect = HOLD_EFFECT_CURE_FRZ,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, te descongela en el combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that defrosts Pokémon in battle."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_LEPPA_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Zanama"),
#else
        .name = _("Leppa Berry"),
#endif
        .itemId = ITEM_LEPPA_BERRY,
        .price = 200,
        .holdEffect = HOLD_EFFECT_RESTORE_PP,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, te restaura 10 PP en el combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that restores 10 PP in battle."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
        .secondaryId = 0,
    },

    [ITEM_ORAN_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Aranja"),
#else
        .name = _("Oran Berry"),
#endif
        .itemId = ITEM_ORAN_BERRY,
        .price = 200,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, te restaura 10 PS en el combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that restores 10 HP in battle."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_PERSIM_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Caquic"),
#else
        .name = _("Persim Berry"),
#endif
        .itemId = ITEM_PERSIM_BERRY,
        .price = 200,
        .holdEffect = HOLD_EFFECT_CURE_CONFUSION,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, te saca del estado de confusión."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that heals confusion in battle."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_LUM_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Ziuela"),
#else
        .name = _("Lum Berry"),
#endif
        .itemId = ITEM_LUM_BERRY,
        .price = 1000,
        .bpPrice = 15,
        .holdEffect = HOLD_EFFECT_CURE_STATUS,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, cura los problemas de estado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that heals any status problem in battle."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_SITRUS_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Zidra"),
#else
        .name = _("Sitrus Berry"),
#endif
        .itemId = ITEM_SITRUS_BERRY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_RESTORE_PCT_HP,
        .holdEffectParam = 25, //restores 25% of the max HP
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, te restaura 30 PS en el combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that heals the user HP a little."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_FIGY_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Higog"),
#else
        .name = _("Figy Berry"),
#endif
        .itemId = ITEM_FIGY_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_CONFUSE_SPICY,
        .holdEffectParam = 8,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, te restaura PS, pero puede confundirte."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that restores HP but may confuse."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_WIKI_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Wiki"),
#else
        .name = _("Wiki Berry"),
#endif
        .itemId = ITEM_WIKI_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_CONFUSE_DRY,
        .holdEffectParam = 8,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, te restaura PS, pero puede confundirte."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that restores HP but may confuse."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_MAGO_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Ango"),
#else
        .name = _("Mago Berry"),
#endif
        .itemId = ITEM_MAGO_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_CONFUSE_SWEET,
        .holdEffectParam = 8,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, te restaura PS, pero puede confundirte."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that restores HP but may confuse."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_AGUAV_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Guaya"),
#else
        .name = _("Aguav Berry"),
#endif
        .itemId = ITEM_AGUAV_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_CONFUSE_BITTER,
        .holdEffectParam = 8,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, te restaura PS, pero puede confundirte."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that restores HP but may confuse."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_IAPAPA_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Pabaya"),
#else
        .name = _("Iapapa Berry"),
#endif
        .itemId = ITEM_IAPAPA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_CONFUSE_SOUR,
        .holdEffectParam = 8,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, te restaura PS, pero puede confundirte."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that restores HP but may confuse."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_RAZZ_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Frambu"),
#else
        .name = _("Razz Berry"),
#endif
        .itemId = ITEM_RAZZ_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da Frambu. Sirve para hacer {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow Razz."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BLUK_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Oram"),
#else
        .name = _("Bluk Berry"),
#endif
        .itemId = ITEM_BLUK_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da Oram. Sirve para hacer {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow Bluk."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_NANAB_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Latano"),
#else
        .name = _("Nanab Berry"),
#endif
        .itemId = ITEM_NANAB_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da Latano. Sirve para hacer {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow Nanab."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_WEPEAR_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Peragu"),
#else
        .name = _("Wepear Berry"),
#endif
        .itemId = ITEM_WEPEAR_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da Peragu. Sirve para hacer {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow Wepear."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PINAP_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Pinia"),
#else
        .name = _("Pinap Berry"),
#endif
        .itemId = ITEM_PINAP_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da Pinia. Sirve para hacer {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow Pinap."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_POMEG_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Grana"),
#else
        .name = _("Pomeg Berry"),
#endif
        .itemId = ITEM_POMEG_BERRY,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace amable al Pokémon, pero baja los PS."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes a Pokémon friendly but lowers base HP."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .secondaryId = 0,
    },

    [ITEM_KELPSY_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Algama"),
#else
        .name = _("Kelpsy Berry"),
#endif
        .itemId = ITEM_KELPSY_BERRY,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace amable al Pokémon, pero baja el Ataque."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes a Pokémon friendly but lowers base Attack."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .secondaryId = 0,
    },

    [ITEM_QUALOT_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Ispero"),
#else
        .name = _("Qualot Berry"),
#endif
        .itemId = ITEM_QUALOT_BERRY,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace amable al Pokémon, pero baja la Defensa."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes a Pokémon friendly but lowers base Defense."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .secondaryId = 0,
    },

    [ITEM_HONDEW_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Meluce"),
#else
        .name = _("Hondew Berry"),
#endif
        .itemId = ITEM_HONDEW_BERRY,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace amable al Pokémon, pero baja el At. Esp."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes a Pokémon friendly but lowers base Sp. Atk."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .secondaryId = 0,
    },

    [ITEM_GREPA_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Uvav"),
#else
        .name = _("Grepa Berry"),
#endif
        .itemId = ITEM_GREPA_BERRY,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace amable al Pokémon, pero baja la Def. Esp."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes a Pokémon friendly but lowers base Sp. Def."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .secondaryId = 0,
    },

    [ITEM_TAMATO_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Tamate"),
#else
        .name = _("Tamato Berry"),
#endif
        .itemId = ITEM_TAMATO_BERRY,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace amable al Pokémon, pero baja la Velocid."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes a Pokémon friendly but lowers base Speed."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .secondaryId = 0,
    },

    [ITEM_CORNN_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Mais"),
#else
        .name = _("Cornn Berry"),
#endif
        .itemId = ITEM_CORNN_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da Mais. Sirve para hacer {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow Cornn."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_MAGOST_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Aostan"),
#else
        .name = _("Magost Berry"),
#endif
        .itemId = ITEM_MAGOST_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da Aostan. Sirve para hacer {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow Magost."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_RABUTA_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Rautan"),
#else
        .name = _("Rabuta Berry"),
#endif
        .itemId = ITEM_RABUTA_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da Rautan. Sirve para hacer {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow Rabuta."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_NOMEL_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Monli"),
#else
        .name = _("Nomel Berry"),
#endif
        .itemId = ITEM_NOMEL_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da Monli. Sirve para hacer {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow Nomel."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SPELON_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Wikano"),
#else
        .name = _("Spelon Berry"),
#endif
        .itemId = ITEM_SPELON_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da Wikano. Sirve para hacer {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow Spelon."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PAMTRE_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Plamna"),
#else
        .name = _("Pamtre Berry"),
#endif
        .itemId = ITEM_PAMTRE_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da Plamna. Sirve para hacer {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow Pamtre."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_WATMEL_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Sambia"),
#else
        .name = _("Watmel Berry"),
#endif
        .itemId = ITEM_WATMEL_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da Sambia. Sirve para hacer {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow Watmel."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_DURIN_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Rudion"),
#else
        .name = _("Durin Berry"),
#endif
        .itemId = ITEM_DURIN_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da Rudion. Sirve para hacer {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow Durin."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BELUE_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Andano"),
#else
        .name = _("Belue Berry"),
#endif
        .itemId = ITEM_BELUE_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da Andano. Sirve para hacer {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow Belue."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_LIECHI_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Lichi"),
#else
        .name = _("Liechi Berry"),
#endif
        .itemId = ITEM_LIECHI_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_ATTACK_UP,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, subirá el Ataque en un momento de apuro."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises Attack in a pinch."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_GANLON_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Gonlan"),
#else
        .name = _("Ganlon Berry"),
#endif
        .itemId = ITEM_GANLON_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_DEFENSE_UP,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, subirá la Defensa en un momento de apuro."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises Defense in a pinch."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SALAC_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Aslac"),
#else
        .name = _("Salac Berry"),
#endif
        .itemId = ITEM_SALAC_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_SPEED_UP,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, subirá la Velocidad en un momento de apuro."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises Speed in a pinch."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PETAYA_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Yapati"),
#else
        .name = _("Petaya Berry"),
#endif
        .itemId = ITEM_PETAYA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_SP_ATTACK_UP,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, subirá el At. Esp. en un momento de apuro."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises Sp. Atk in a pinch."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_APICOT_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Aricoc"),
#else
        .name = _("Apicot Berry"),
#endif
        .itemId = ITEM_APICOT_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_SP_DEFENSE_UP,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, subirá la Def. Esp. en un momento de apuro."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises Sp. Def in a pinch."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_LANSAT_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Zonlan"),
#else
        .name = _("Lansat Berry"),
#endif
        .itemId = ITEM_LANSAT_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_CRITICAL_UP,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, sube la posibilidad de dar un golpe crítico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that ups the critical- hit rate in a pinch."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_STARF_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Arabol"),
#else
        .name = _("Starf Berry"),
#endif
        .itemId = ITEM_STARF_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RANDOM_STAT_UP,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, subirá una caract. en un momento de apuro."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that sharply boosts a stat in a pinch."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_MICLE_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Lagro"),
#else
        .name = _("Micle Berry"),
#endif
        .itemId = ITEM_MICLE_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_NONE, // Placeholder
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, subirá la Precisión en un momento de apuro."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("When held, it ups the Accuracy of a move in a pinch."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ENIGMA_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Enigma"),
#else
        .name = _("Enigma Berry"),
#endif
        .itemId = ITEM_ENIGMA_BERRY,
        .price = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("En suelo fértil da algo raro. De ella se hacen {POKEBLOCK}S."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("{POKEBLOCK} ingredient. Plant in loamy soil to grow a mystery."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_EnigmaBerry,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_EnigmaBerry,
        .secondaryId = 0,
    },

    [ITEM_OCCA_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Caoca"),
#else
        .name = _("Occa Berry"),
#endif
        .itemId = ITEM_OCCA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIRE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Fuego si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Fire move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PASSHO_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Pasio"),
#else
        .name = _("Passho Berry"),
#endif
        .itemId = ITEM_PASSHO_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_WATER,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Fuego si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Water move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_WACAN_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Gualot"),
#else
        .name = _("Wacan Berry"),
#endif
        .itemId = ITEM_WACAN_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ELECTRIC,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Eléctrico si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Electric move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_RINDO_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Tamar"),
#else
        .name = _("Rindo Berry"),
#endif
        .itemId = ITEM_RINDO_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GRASS,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Planta si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Grass move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_YACHE_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Rimoya"),
#else
        .name = _("Yache Berry"),
#endif
        .itemId = ITEM_YACHE_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ICE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Hielo si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Ice move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CHOPLE_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Pomaro"),
#else
        .name = _("Chople Berry"),
#endif
        .itemId = ITEM_CHOPLE_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIGHTING,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Lucha si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Fighting move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_KEBIA_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Kebia"),
#else
        .name = _("Kebia Berry"),
#endif
        .itemId = ITEM_KEBIA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_POISON,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Veneno si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Poison move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SHUCA_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Acardo"),
#else
        .name = _("Shuca Berry"),
#endif
        .itemId = ITEM_SHUCA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GROUND,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Tierra si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Ground move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_COBA_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Kouba"),
#else
        .name = _("Coba Berry"),
#endif
        .itemId = ITEM_COBA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIGHTING,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Volador si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Flying move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PAYAPA_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Payapa"),
#else
        .name = _("Payapa Berry"),
#endif
        .itemId = ITEM_PAYAPA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_PSYCHIC,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Psíquico si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Psychic move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_TANGA_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Yecana"),
#else
        .name = _("Tanga Berry"),
#endif
        .itemId = ITEM_TANGA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_BUG,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Bicho si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Bug move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CHARTI_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Alcho"),
#else
        .name = _("Charti Berry"),
#endif
        .itemId = ITEM_CHARTI_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ROCK,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Roca si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Rock move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_KASIB_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Drasi"),
#else
        .name = _("Kasib Berry"),
#endif
        .itemId = ITEM_KASIB_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GHOST,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Fantasma si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Ghost move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_HABAN_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Anjiro"),
#else
        .name = _("Haban Berry"),
#endif
        .itemId = ITEM_HABAN_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_DRAGON,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Dragón si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Dragon move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_COLBUR_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Dillo"),
#else
        .name = _("Colbur Berry"),
#endif
        .itemId = ITEM_COLBUR_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_DARK,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Siniesto si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Dark move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BABIRI_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Baribá"),
#else
        .name = _("Babiri Berry"),
#endif
        .itemId = ITEM_BABIRI_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_STEEL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Acero si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Steel move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CHILAN_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Chilan"),
#else
        .name = _("Chilan Berry"),
#endif
        .itemId = ITEM_CHILAN_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Tipo si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Normal move."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ROSELI_BERRY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Baya Hibis"),
#else
        .name = _("Roseli Berry"),
#endif
        .itemId = ITEM_ROSELI_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FAIRY,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Debilita un ataque tipo Hada si es débil contra él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that weakens a Fairy move if weak to it."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CUSTAP_BERRY] =
    {
        .name = _("Custap Berry"),
        .itemId = ITEM_CUSTAP_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_NONE, // To Do
        .holdEffectParam = TYPE_FAIRY,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Quién la lleve podrá moverse primero 1 vez en un apuro."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("It allows a Pokémon in a pinch to move first just once."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_JABOCA_BERRY] =
    {
        .name = _("Jaboca Berry"),
        .itemId = ITEM_JABOCA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_NONE, // To Do
        .holdEffectParam = TYPE_FAIRY,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Quien la lleve hará daño a quién le de un ataque físico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("If hit by a physical move, it will hurt the attacker a bit."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ROWAP_BERRY] =
    {
        .name = _("Rowap Berry"),
        .itemId = ITEM_ROWAP_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_NONE, // To Do
        .holdEffectParam = TYPE_FAIRY,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Quien la lleve hará daño a quién le de un ataque especial."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("If hit by a special move, it will hurt the attacker a bit."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_KEE_BERRY] =
    {
        .name = _("Kee Berry"),
        .itemId = ITEM_KEE_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_NONE, // To Do
        .holdEffectParam = TYPE_FAIRY,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube algo la Def. si recibe un ataque físico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("If hit by a physical move, it raises the DEFENSE a bit."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_MARANGA_BERRY] =
    {
        .name = _("Maranga Berry"),
        .itemId = ITEM_MARANGA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_NONE, // To Do
        .holdEffectParam = TYPE_FAIRY,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube algo la Def. Esp. si recibe un ataque especial."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("If hit by a special move, it raises the SP. DEF. a bit."),
#endif
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

// Hold items

    [ITEM_BRIGHT_POWDER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Polvo Brillo"),
#else
        .name = _("Bright Powder"),
#endif
        .itemId = ITEM_BRIGHT_POWDER,
        .price = 10,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, lanza un destello que ba- ja la Precisión."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that casts a glare to reduce accuracy."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_WHITE_HERB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Hierba Blanca"),
#else
        .name = _("White Herb"),
#endif
        .itemId = ITEM_WHITE_HERB,
        .price = 5000,
        .bpPrice = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_STATS,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, restau- ra características debilitadas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that restores any lowered stat."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_MACHO_BRACE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Vestidura"),
#else
        .name = _("Macho Brace"),
#endif
        .itemId = ITEM_MACHO_BRACE,
        .price = 10000,
        .bpPrice = 15,
        .holdEffect = HOLD_EFFECT_MACHO_BRACE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, se crece rápido, pero baja la Velocidad."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that promotes growth, but reduces Speed."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_EXP_SHARE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Repartir Exp."),
#else
        .name = _("Exp. Share"),
#endif
        .itemId = ITEM_EXP_SHARE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_EXP_SHARE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Objeto que reparte Exp. obtenida en combates."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that spreads experience from battles."),
#endif
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_ExpShare,
        .secondaryId = 0,
    },

    [ITEM_QUICK_CLAW] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Garra Rápida"),
#else
        .name = _("Quick Claw"),
#endif
        .itemId = ITEM_QUICK_CLAW,
        .price = 100,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_QUICK_CLAW,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, se puede golpear en primer lugar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that occasionally allows the first strike."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SOOTHE_BELL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Campana Alivio"),
#else
        .name = _("Soothe Bell"),
#endif
        .itemId = ITEM_SOOTHE_BELL,
        .price = 1000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_HAPPINESS_UP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, calma los ánimos y fomenta la amistad."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that calms spirits and fosters friendship."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_MENTAL_HERB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Hierba Mental"),
#else
        .name = _("Mental Herb"),
#endif
        .itemId = ITEM_MENTAL_HERB,
        .price = 5000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_CURE_ATTRACT,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, los Pokémon se liberan del enamoramiento."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that snaps Pokémon out of infatuation."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CHOICE_BAND] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cinta Elección"),
#else
        .name = _("Choice Band"),
#endif
        .itemId = ITEM_CHOICE_BAND,
        .price = 10000,
        .bpPrice = 20,
        .holdEffect = HOLD_EFFECT_CHOICE_BAND,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube el Ataque, pero sólo deja usarun movimiento."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises a move's power, but permits only that move."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_KINGS_ROCK] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Roca del Rey"),
#else
        .name = _("King's Rock"),
#endif
        .itemId = ITEM_KINGS_ROCK,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, puede hacer retroceder al rival si lo hieres."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that may cause flinching when the foe is hit."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_UTILITY_UMBRELLA] =
    {
        .name = _("U-Umbrella"),
        .itemId = ITEM_UTILITY_UMBRELLA,
        .price = 4000,
        .bpPrice = 20,
        .holdEffect = HOLD_EFFECT_UTILITY_UMBRELLA,
        .holdEffectParam = 0,
        .description = FORMAT_ITEM_DESCRIPTION("Protects the holder from the effects of rain and harsh sun."),
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SILVER_POWDER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Polvo Plata"),
#else
        .name = _("Silver Powder"),
#endif
        .itemId = ITEM_SILVER_POWDER,
        .price = 2500,
        .holdEffect = HOLD_EFFECT_BUG_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, forta- lece los ataques de tipo Bicho."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of Bug-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_AMULET_COIN] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Moneda Amuleto"),
#else
        .name = _("Amulet Coin"),
#endif
        .itemId = ITEM_AMULET_COIN,
        .price = 1000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Si el que lo lleva lucha en combate, duplica el dinero."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Doubles money in battle if the holder takes part."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CLEANSE_TAG] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Amuleto"),
#else
        .name = _("Cleanse Tag"),
#endif
        .itemId = ITEM_CLEANSE_TAG,
        .price = 200,
        .holdEffect = HOLD_EFFECT_REPEL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, ayuda a repeler a los Pokémon salvajes."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that helps repel wild Pokémon."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SOUL_DEW] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Rocío Bondad"),
#else
        .name = _("Soul Dew"),
#endif
        .itemId = ITEM_SOUL_DEW,
        .price = 2000,
        .bpPrice = 50,
        .holdEffect = HOLD_EFFECT_SOUL_DEW,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, suben el At. y la Def. Esp. de Latios y Latias."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Hold item: raises Sp. Atk & Sp. Def of Latios & Latias."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_DEEP_SEA_TOOTH] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Diente Marino"),
#else
        .name = _("Deep Sea Tooth"),
#endif
        .itemId = ITEM_DEEP_SEA_TOOTH,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_TOOTH,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, sube el At. Esp. de Clamperl."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the Sp. Atk of Clamperl."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_DEEP_SEA_SCALE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Escama Marina"),
#else
        .name = _("Deep Sea Scale"),
#endif
        .itemId = ITEM_DEEP_SEA_SCALE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_SCALE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, sube la Def. Esp. de Clamperl."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the Sp. Def of Clamperl."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_SMOKE_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bola Humo"),
#else
        .name = _("Smoke Ball"),
#endif
        .itemId = ITEM_SMOKE_BALL,
        .price = 200,
        .holdEffect = HOLD_EFFECT_CAN_ALWAYS_RUN,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Se usa para huir de combates contra Pokémon salvajes."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that assures fleeing from wild Pokémon."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_EVERSTONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piedra Eterna"),
#else
        .name = _("Everstone"),
#endif
        .itemId = ITEM_EVERSTONE,
        .price = 2000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_PREVENT_EVOLVE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("El que lleve esta piedra mágica no evolucionará."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A wondrous hold item that prevents evolution."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_FOCUS_BAND] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cinta Focus"),
#else
        .name = _("Focus Band"),
#endif
        .itemId = ITEM_FOCUS_BAND,
        .price = 9000,
        .bpPrice = 15,
        .holdEffect = HOLD_EFFECT_FOCUS_BAND,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, quizá evites debilitarte."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that occasionally prevents fainting."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_LUCKY_EGG] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Huevo Suerte"),
#else
        .name = _("Lucky Egg"),
#endif
        .itemId = ITEM_LUCKY_EGG,
        .price = 200,
        .bpPrice = 15,
        .holdEffect = HOLD_EFFECT_LUCKY_EGG,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, ganarás muchos más puntos de Exp. en combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that boosts Exp. points earned in battle."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SCOPE_LENS] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Periscopio"),
#else
        .name = _("Scope Lens"),
#endif
        .itemId = ITEM_SCOPE_LENS,
        .price = 5000,
        .bpPrice = 15,
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, aumenta la posibilidad de golpe crítico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that improves the critical-hit rate."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_METAL_COAT] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Revest. Metálico"),
#else
        .name = _("Metal Coat"),
#endif
        .itemId = ITEM_METAL_COAT,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_STEEL_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, forta- lece los ataques de tipo Acero."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of Steel-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_LEFTOVERS] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Restos"),
#else
        .name = _("Leftovers"),
#endif
        .itemId = ITEM_LEFTOVERS,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_LEFTOVERS,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlos, van restaurando los PS durante el combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that gradually restores HP in battle."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_DRAGON_SCALE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Escama Dragón"),
#else
        .name = _("Dragon Scale"),
#endif
        .itemId = ITEM_DRAGON_SCALE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_DRAGON_SCALE,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Rara escama que llevan los Pokémon de tipo Dragón."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A strange scale held by Dragon- type Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_OVAL_STONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piedra Oval"),
#else
        .name = _("Oval Stone"),
#endif
        .itemId = ITEM_OVAL_STONE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace evolucionar a cierto Pokémon. Parece un huevo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Helps a certain Pokémon to evolve. Looks like an egg."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PROTECTOR] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Protector"),
#else
        .name = _("Protector"),
#endif
        .itemId = ITEM_PROTECTOR,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Amado por cierto. Pokémon. Es muy pesado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A certain Pokémon loves it. It's quite heavy."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_ELECTIRIZER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Electrizador"),
#else
        .name = _("Electirizer"),
#endif
        .itemId = ITEM_ELECTIRIZER,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Amado por cierto. Pokémon. Lleno de Electricidad."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A certain Pokémon loves it. It's full of electricity."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_MAGMARIZER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Magmatizador"),
#else
        .name = _("Magmarizer"),
#endif
        .itemId = ITEM_MAGMARIZER,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Amado por cierto. Pokémon. Lleno de energía térmica."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A certain Pokémon loves it. It's full of magma energy."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_DUBIOUS_DISC] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Extraño"),
#else
        .name = _("Dubious Disc"),
#endif
        .itemId = ITEM_DUBIOUS_DISC,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Amado por cierto. Pokémon. Sobre- cargado con datos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A certain Pokémon loves it. It's over- flowing with data."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_REAPER_CLOTH] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tela Terrible"),
#else
        .name = _("Reaper Cloth"),
#endif
        .itemId = ITEM_REAPER_CLOTH,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Amado por cierto. Pokémon. Imbuido con gran energía."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Loved by a certain Pokémon. Imbued with strong energy."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_RAZOR_CLAW] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Garra Afilada"),
#else
        .name = _("Razor Claw"),
#endif
        .itemId = ITEM_RAZOR_CLAW,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_NONE, // Placeholder.
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace evolucionar a cierto Pokémon. Muy afilada."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Helps a certain Pokémon to evolve. It's a sharp claw."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_RAZOR_FANG] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Colmillo Agudo"),
#else
        .name = _("Razor Fang"),
#endif
        .itemId = ITEM_RAZOR_FANG,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace evolucionar a cierto Pokémon. Muy afilado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Helps a certain Pokémon to evolve. It's a sharp fang."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PRISM_SCALE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Escama Bella"),
#else
        .name = _("Prism Scale"),
#endif
        .itemId = ITEM_PRISM_SCALE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Escama misteriosa. Hace evolucionar a cierto Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A mysterious scale. It helps a certain Pokémon to evolve."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_WHIPPED_DREAM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Dulce de Nata"),
#else
        .name = _("Whipped Dream"),
#endif
        .itemId = ITEM_WHIPPED_DREAM,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Un dulce suave amado por cierto Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A soft and sweet treat loved by some Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_SACHET] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Saquito Fragante"),
#else
        .name = _("Sachet"),
#endif
        .itemId = ITEM_SACHET,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Saco con fragancia amado por cierto Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A sachet filled with perfumes loved by some Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_LIGHT_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bola Luminosa"),
#else
        .name = _("Light Ball"),
#endif
        .itemId = ITEM_LIGHT_BALL,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_LIGHT_BALL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, el At. Esp. de Pikachu aumentará."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the Sp. Atk of Pikachu."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SOFT_SAND] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Arena Fina"),
#else
        .name = _("Soft Sand"),
#endif
        .itemId = ITEM_SOFT_SAND,
        .price = 100,
        .holdEffect = HOLD_EFFECT_GROUND_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, forta- lece los ataques de tipo Tierra."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of Ground-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_HARD_STONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piedra Dura"),
#else
        .name = _("Hard Stone"),
#endif
        .itemId = ITEM_HARD_STONE,
        .price = 100,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, forta- lece los ataques de tipo Roca."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of Rock-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_MIRACLE_SEED] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Semilla Milagro"),
#else
        .name = _("Miracle Seed"),
#endif
        .itemId = ITEM_MIRACLE_SEED,
        .price = 100,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, forta- lece los ataques de tipo Planta."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of Grass-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BLACK_GLASSES] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gafas de Sol"),
#else
        .name = _("Black Glasses"),
#endif
        .itemId = ITEM_BLACK_GLASSES,
        .price = 100,
        .holdEffect = HOLD_EFFECT_DARK_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlas, forta- lecen los ataques de tipo Siniestro."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of Dark-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BLACK_BELT] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cinturón Negro"),
#else
        .name = _("Black Belt"),
#endif
        .itemId = ITEM_BLACK_BELT,
        .price = 100,
        .holdEffect = HOLD_EFFECT_FIGHTING_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, forta- lece los ataques de tipo Lucha."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that boosts Fighting- type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_MAGNET] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Imán"),
#else
        .name = _("Magnet"),
#endif
        .itemId = ITEM_MAGNET,
        .price = 100,
        .holdEffect = HOLD_EFFECT_ELECTRIC_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, forta- lece los ataques de tipo Eléctrico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that boosts Electric- type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_MYSTIC_WATER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Agua Mística"),
#else
        .name = _("Mystic Water"),
#endif
        .itemId = ITEM_MYSTIC_WATER,
        .price = 100,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, forta- lece los ataques de tipo Agua."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of Water-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SHARP_BEAK] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pico Afilado"),
#else
        .name = _("Sharp Beak"),
#endif
        .itemId = ITEM_SHARP_BEAK,
        .price = 100,
        .holdEffect = HOLD_EFFECT_FLYING_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, forta- lece los ataques de tipo Volador."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of Flying-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_POISON_BARB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Flecha Venenosa"),
#else
        .name = _("Poison Barb"),
#endif
        .itemId = ITEM_POISON_BARB,
        .price = 100,
        .holdEffect = HOLD_EFFECT_POISON_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, forta- lece los ataques de tipo Veneno."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of Poison-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_NEVER_MELT_ICE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Antiderretir"),
#else
        .name = _("Never-Melt Ice"),
#endif
        .itemId = ITEM_NEVER_MELT_ICE,
        .price = 100,
        .holdEffect = HOLD_EFFECT_ICE_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, forta- lece los ataques de tipo Hielo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of Ice-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SPELL_TAG] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Hechizo"),
#else
        .name = _("Spell Tag"),
#endif
        .itemId = ITEM_SPELL_TAG,
        .price = 100,
        .holdEffect = HOLD_EFFECT_GHOST_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, forta- lece los ataques de tipo Fantasma."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of Ghost-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_TWISTED_SPOON] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cuchara Torcida"),
#else
        .name = _("Twisted Spoon"),
#endif
        .itemId = ITEM_TWISTED_SPOON,
        .price = 100,
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, forta- lece los ataques de tipo Psíquico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that boosts Psychic- type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CHARCOAL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carbón"),
#else
        .name = _("Charcoal"),
#endif
        .itemId = ITEM_CHARCOAL,
        .price = 9800,
        .holdEffect = HOLD_EFFECT_FIRE_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, forta- lece los ataques de tipo Fuego."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of Fire-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_DRAGON_FANG] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Colmillo Dragón"),
#else
        .name = _("Dragon Fang"),
#endif
        .itemId = ITEM_DRAGON_FANG,
        .price = 100,
        .holdEffect = HOLD_EFFECT_DRAGON_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, forta- lece los ataques de tipo Dragón."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of Dragon-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SILK_SCARF] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pañuelo Seda"),
#else
        .name = _("Silk Scarf"),
#endif
        .itemId = ITEM_SILK_SCARF,
        .price = 100,
        .holdEffect = HOLD_EFFECT_NORMAL_POWER,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, forta- lece los ataques de tipo Normal."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of Normal-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_UP_GRADE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Mejora"),
#else
        .name = _("Upgrade"),
#endif
        .itemId = ITEM_UP_GRADE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_UP_GRADE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Peculiar caja hecha en Silph S.A."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A peculiar box made by Silph Co."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_SHELL_BELL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cascabel Concha"),
#else
        .name = _("Shell Bell"),
#endif
        .itemId = ITEM_SHELL_BELL,
        .price = 2000,
        .bpPrice = 7,
        .holdEffect = HOLD_EFFECT_SHELL_BELL,
        .holdEffectParam = 8,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla y golpear al rival, recuperas PS."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that restores HP upon striking the foe."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_POWER_BRACER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Brazal recio"),
#else
        .name = _("Power Bracer"),
#endif
        .itemId = ITEM_POWER_BRACER,
        .price = 5000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, mejora el Ataque, pero baja la Velocidad."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that promotes Atk gain, but reduces Speed."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_ATK,
    },

    [ITEM_POWER_BELT] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cinto recio"),
#else
        .name = _("Power Belt"),
#endif
        .itemId = ITEM_POWER_BELT,
        .price = 5000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, mejora la Defensa, pero baja la Velocidad."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that promotes Def gain, but reduces Speed."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_DEF,
    },

    [ITEM_POWER_LENS] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Lente recia"),
#else
        .name = _("Power Lens"),
#endif
        .itemId = ITEM_POWER_LENS,
        .price = 5000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, mejora el Atq. Esp., pero baja la Velocidad."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Hold item that pro- motes Sp. Atk gain, but reduces Speed."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPATK,
    },

    [ITEM_POWER_BAND] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Banda recia"),
#else
        .name = _("Power Band"),
#endif
        .itemId = ITEM_POWER_BAND,
        .price = 5000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, mejora la Def. Esp., pero baja la Velocidad."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Hold item that pro- motes Sp. Def gain, but reduces Speed."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPDEF,
    },

    [ITEM_POWER_ANKLET] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Franja recia"),
#else
        .name = _("Power Anklet"),
#endif
        .itemId = ITEM_POWER_ANKLET,
        .price = 5000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, mejora la Velocidad, pero baja la Velocidad."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that promotes SPD gain, but reduces Speed."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPEED,
    },

    [ITEM_POWER_WEIGHT] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pesa recia"),
#else
        .name = _("Power Weight"),
#endif
        .itemId = ITEM_POWER_WEIGHT,
        .price = 5000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, mejora los PS, pero baja la Velocidad."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that promotes HP gain, but reduces Speed."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_HP,
    },

    [ITEM_SEA_INCENSE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Incienso marino"),
#else
        .name = _("Sea Incense"),
#endif
        .itemId = ITEM_SEA_INCENSE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, forta- lece algo los ataques tipo Agua."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that slightly boosts Water-type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_LAX_INCENSE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Incienso suave"),
#else
        .name = _("Lax Incense"),
#endif
        .itemId = ITEM_LAX_INCENSE,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, baja algo la Precisión del rival."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that slightly lowers the foe's accuracy."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ODD_INCENSE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Incienso raro"),
#else
        .name = _("Odd Incense"),
#endif
        .itemId = ITEM_ODD_INCENSE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, forta- lece los ataques de tipo Psíquico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that boosts PSYCHIC- type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ROCK_INCENSE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Incienso roca"),
#else
        .name = _("Rock Incense"),
#endif
        .itemId = ITEM_ROCK_INCENSE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, forta- lece los ataques de tipo Roca."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of ROCK-type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_FULL_INCENSE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Incienso lento"),
#else
        .name = _("Full Incense"),
#endif
        .itemId = ITEM_FULL_INCENSE,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .holdEffectParam = 5,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, hace lento al portador."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A held item that makes the holder move slower."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_WAVE_INCENSE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Incienso Acua"),
#else
        .name = _("Wave Incense"),
#endif
        .itemId = ITEM_WAVE_INCENSE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, forta- lece los ataques de tipo Agua."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that slightly boosts WATER-type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ROSE_INCENSE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Incienso floral"),
#else
        .name = _("Rose Incense"),
#endif
        .itemId = ITEM_ROSE_INCENSE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, forta- lece los ataques de tipo Planta."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises the power of GRASS-type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_LUCK_INCENSE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Incienso duplo"),
#else
        .name = _("Luck Incense"),
#endif
        .itemId = ITEM_LUCK_INCENSE,
        .price = 11000,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Si el que lo lleva lucha en combate, duplica el dinero."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Doubles money in battle if the holder takes part."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PURE_INCENSE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Incienso puro"),
#else
        .name = _("Pure Incense"),
#endif
        .itemId = ITEM_PURE_INCENSE,
        .price = 6000,
        .holdEffect = HOLD_EFFECT_REPEL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, ayuda a repeler a los Pokémon salvajes."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that helps repel wild Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_LUCKY_PUNCH] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Puño Suerte"),
#else
        .name = _("Lucky Punch"),
#endif
        .itemId = ITEM_LUCKY_PUNCH,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_LUCKY_PUNCH,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, Chansey dará posiblemente un golpe crítico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises Chansey's critical-hit rate."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_METAL_POWDER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Polvo Metálico"),
#else
        .name = _("Metal Powder"),
#endif
        .itemId = ITEM_METAL_POWDER,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_METAL_POWDER,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Si lo lleva Ditto, su Defensa aumentará."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises Ditto's Defense."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_THICK_CLUB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Hueso Grueso"),
#else
        .name = _("Thick Club"),
#endif
        .itemId = ITEM_THICK_CLUB,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_THICK_CLUB,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo, Cubone o Marowak tendrán mejor Ataque."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises Cubone or Marowak's Attack."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_STICK] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Puerro"),
#else
        .name = _("Leek"),
#endif
        .itemId = ITEM_STICK,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_STICK,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Farfetch'd tiene más índice de golpe crítico al llevarlo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises Farfetch'd's critical-hit ratio."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_RED_SCARF] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pañuelo Rojo"),
#else
        .name = _("Red Scarf"),
#endif
        .itemId = ITEM_RED_SCARF,
        .price = 100,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo en los Concursos, sube el Carisma."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises Cool in Contests."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BLUE_SCARF] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pañuelo Azul"),
#else
        .name = _("Blue Scarf"),
#endif
        .itemId = ITEM_BLUE_SCARF,
        .price = 100,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo en los Concursos, sube la Belleza."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises Beauty in Contests."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PINK_SCARF] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pañuelo Rosa"),
#else
        .name = _("Pink Scarf"),
#endif
        .itemId = ITEM_PINK_SCARF,
        .price = 100,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo en los Concursos, sube la Dulzura."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises Cute in Contests."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_GREEN_SCARF] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pañuelo Verde"),
#else
        .name = _("Green Scarf"),
#endif
        .itemId = ITEM_GREEN_SCARF,
        .price = 100,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo en los Concursos, sube el Ingenio."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises Smart in Contests."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_YELLOW_SCARF] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pañuelo Amarillo"),
#else
        .name = _("Yellow Scarf"),
#endif
        .itemId = ITEM_YELLOW_SCARF,
        .price = 100,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarlo en los Concursos, sube la Dureza."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A hold item that raises Tough in Contests."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

// Key items

    [ITEM_MACH_BIKE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bici Carrera"),
#else
        .name = _("Mach Bike"),
#endif
        .itemId = ITEM_MACH_BIKE,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bici plegable con la que se va el doble de rápido que a pie."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A folding bicycle that doubles your speed or better."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = 0,
    },

    [ITEM_COIN_CASE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Monedero"),
#else
        .name = _("Coin Case"),
#endif
        .itemId = ITEM_COIN_CASE,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Te servirá para llevar hasta 9.999 Fichas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A case that holds up to 9,999 Coins."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CoinCase,
        .secondaryId = 0,
    },

    [ITEM_ITEMFINDER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Zahorí"),
#else
        .name = _("Dowsing Machine"),
#endif
        .itemId = ITEM_ITEMFINDER,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Detector de objetos invisibles por ondas sonoras."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A device that signals an invisible item by sound."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_Itemfinder,
        .secondaryId = 0,
    },

    [ITEM_OLD_ROD] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Caña Vieja"),
#else
        .name = _("Old Rod"),
#endif
        .itemId = ITEM_OLD_ROD,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Pesca Pokémon salvajes en todo tipo de aguas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Use by any body of water to fish for wild Pokémon."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = OLD_ROD,
    },

    [ITEM_GOOD_ROD] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Caña Buena"),
#else
        .name = _("Good Rod"),
#endif
        .itemId = ITEM_GOOD_ROD,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Una buena caña para pescar Pokémon salvajes."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A decent fishing rod for catching wild Pokémon."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = GOOD_ROD,
    },

    [ITEM_SUPER_ROD] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Supercaña"),
#else
        .name = _("Super Rod"),
#endif
        .itemId = ITEM_SUPER_ROD,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Es la mejor caña para pescar Pokémon salvajes."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("The best fishing rod for catching wild Pokémon."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = SUPER_ROD,
    },

    [ITEM_SS_TICKET] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ticket Barco"),
#else
        .name = _("S.S. Ticket"),
#endif
        .itemId = ITEM_SS_TICKET,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Es el billete válido para embarcar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("The ticket required for sailing on a ferry."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CONTEST_PASS] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pase Concurso"),
#else
        .name = _("Contest Pass"),
#endif
        .itemId = ITEM_CONTEST_PASS,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Es necesario para participar en un Concurso Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("The pass required for entering Pokémon Contests."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_WAILMER_PAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Wailmegadera"),
#else
        .name = _("Wailmer Pail"),
#endif
        .itemId = ITEM_WAILMER_PAIL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sirve para regar las Bayas y las plantas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tool used for watering Berries and plants."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_WailmerPail,
        .secondaryId = 0,
    },

    [ITEM_DEVON_GOODS] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piezas Devon"),
#else
        .name = _("Devon Goods"),
#endif
        .itemId = ITEM_DEVON_GOODS,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Paquete con todas las piezas de la máquina de Devon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A package that contains Devon's machine parts."),
#endif
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SOOT_SACK] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Saco Hollín"),
#else
        .name = _("Soot Sack"),
#endif
        .itemId = ITEM_SOOT_SACK,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Saco usado para recoger y guardar cenizas volcánicas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A sack used to gather and hold volcanic ash."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_SootSack,
        .secondaryId = 0,
    },

    [ITEM_BASEMENT_KEY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Llave Sótano"),
#else
        .name = _("Basement Key"),
#endif
        .itemId = ITEM_BASEMENT_KEY,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Llave de MALVALA- NOVA (al sur de Ciudad Malvalona)."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("The key for New Mauville beneath Mauville City."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ACRO_BIKE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bici"),
#else
        .name = _("Bike"),
#endif
        .itemId = ITEM_ACRO_BIKE,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bici plegable ideal para saltar y hacer caballitos y giros."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A folding bicycle with two modes, Acro and Mach."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = 1,
    },

    [ITEM_POKEBLOCK_CASE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tubo {POKEBLOCK}"),
#else
        .name = _("{POKEBLOCK} case"),
#endif
        .itemId = ITEM_POKEBLOCK_CASE,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tubo para los {POKEBLOCK}S hechos con la Licuabayas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A case for holding {POKEBLOCK}s made with a Berry Blender."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 3,
        .fieldUseFunc = ItemUseOutOfBattle_PokeblockCase,
        .secondaryId = 0,
    },

    [ITEM_LETTER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Carta"),
#else
        .name = _("Letter"),
#endif
        .itemId = ITEM_LETTER,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Carta para Steven, del Presidente de Devon S.A."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A letter to Steven from the President of the Devon Corp."),
#endif
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_EON_TICKET] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ticket Eón"),
#else
        .name = _("Eon Ticket"),
#endif
        .itemId = ITEM_EON_TICKET,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Billete necesario para ir hasta una lejana isla del sur."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("The ticket for a ferry to a distant southern island."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 1,
    },

    [ITEM_SCANNER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Escáner"),
#else
        .name = _("Scanner"),
#endif
        .itemId = ITEM_SCANNER,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Dispositivo encon- trado en la Nao Abandonada."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A device found inside the Abandoned Ship."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_GO_GOGGLES] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gafas Aislantes"),
#else
        .name = _("Go-Goggles"),
#endif
        .itemId = ITEM_GO_GOGGLES,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Ingeniosas gafas que protegen de la arena del desierto."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Nifty goggles that protect eyes from desert sandstorms."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_METEORITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Meteorito"),
#else
        .name = _("Meteorite"),
#endif
        .itemId = ITEM_METEORITE,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Meteorito encon- trado en la Cascada Meteoro."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A meteorite found at Meteor Falls."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_FormChangeItem,
        .secondaryId = 0,
    },

    [ITEM_ROOM_1_KEY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ll. Habitación 1"),
#else
        .name = _("Key to Room 1"),
#endif
        .itemId = ITEM_ROOM_1_KEY,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Llave de una de las cabinas de la Nao Abandonada."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A key that opens a door inside the Abandoned Ship."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ROOM_2_KEY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ll. Habitación 2"),
#else
        .name = _("Key to Room 2"),
#endif
        .itemId = ITEM_ROOM_2_KEY,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Llave de una de las cabinas de la Nao Abandonada."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A key that opens a door inside the Abandoned Ship."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ROOM_4_KEY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ll. Habitación 4"),
#else
        .name = _("Key to Room 4"),
#endif
        .itemId = ITEM_ROOM_4_KEY,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Llave de una de las cabinas de la Nao Abandonada."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A key that opens a door inside the Abandoned Ship."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ROOM_6_KEY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ll. Habitación 6"),
#else
        .name = _("Key to Room 6"),
#endif
        .itemId = ITEM_ROOM_6_KEY,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Llave de una de las cabinas de la Nao Abandonada."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A key that opens a door inside the Abandoned Ship."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_STORAGE_KEY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Llave Almacén"),
#else
        .name = _("Storage Key"),
#endif
        .itemId = ITEM_STORAGE_KEY,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Llave del Almacén de la Nao Aban- donada."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("The key to the storage inside the Abandoned Ship."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_DEVON_SCOPE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Detector Devon"),
#else
        .name = _("Devon Scope"),
#endif
        .itemId = ITEM_DEVON_SCOPE,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Dispositivo hecho en Devon para ver Pokémon invisibles."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A device by Devon that signals any unseeable Pokémon."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

// TMs/HMs

    [ITEM_TM01_FOCUS_PUNCH] =
    {
        .name = _("TM01"),
        .itemId = ITEM_TM01_FOCUS_PUNCH,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Es potente, pero hiere al atacante si el rival le atiza."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Powerful, but makes the user flinch if hit by the foe."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM02_DRAGON_CLAW] =
    {
        .name = _("TM02"),
        .itemId = ITEM_TM02_DRAGON_CLAW,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Engancha y araña al rival con garras afiladas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Hooks and slashes the foe with long, sharp claws."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM03_WATER_PULSE] =
    {
        .name = _("TM03"),
        .itemId = ITEM_TM03_WATER_PULSE,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Emite una onda ultrasónica que puede confundir."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Generates an ultrasonic wave that may confuse."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM04_CALM_MIND] =
    {
        .name = _("TM04"),
        .itemId = ITEM_TM04_CALM_MIND,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Se concentra para subir el At. Esp. y la Def. Esp."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises Sp. Atk and Sp. Def by focusing the mind."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM05_ROAR] =
    {
        .name = _("TM05"),
        .itemId = ITEM_TM05_ROAR,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tremendo rugido que hace huir del combate al rival."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A savage roar that makes the foe flee to end the battle."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM06_TOXIC] =
    {
        .name = _("TM06"),
        .itemId = ITEM_TM06_TOXIC,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Envenena con una toxina que se va intensificando."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Poisons the foe with a toxin that gradually worsens."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM07_HAIL] =
    {
        .name = _("TM07"),
        .itemId = ITEM_TM07_HAIL,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tormenta de gra- nizo dañina salvo para el tipo Hielo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Creates a hailstorm that damages all types except Ice."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM08_BULK_UP] =
    {
        .name = _("TM08"),
        .itemId = ITEM_TM08_BULK_UP,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Robustece el cuerpo para subir Ataque y Defensa."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Bulks up the body to boost both Attack & Defense."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM09_BULLET_SEED] =
    {
        .name = _("TM09"),
        .itemId = ITEM_TM09_BULLET_SEED,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Dispara de 2 a 5 ráfagas de semillas seguidas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Shoots 2 to 5 seeds in a row to strike the foe."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM10_HIDDEN_POWER] =
    {
        .name = _("TM10"),
        .itemId = ITEM_TM10_HIDDEN_POWER,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("La fuerza del ataque varía según el Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("The attack power varies among different Pokémon."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM11_SUNNY_DAY] =
    {
        .name = _("TM11"),
        .itemId = ITEM_TM11_SUNNY_DAY,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube los ataques de tipo Fuego durante 5 turnos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the power of Fire-type moves for 5 turns."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM12_TAUNT] =
    {
        .name = _("TM12"),
        .itemId = ITEM_TM12_TAUNT,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Enfada al rival para que sólo use Ataques."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Enrages the foe so it can only use attack moves."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM13_ICE_BEAM] =
    {
        .name = _("TM13"),
        .itemId = ITEM_TM13_ICE_BEAM,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Rayo de hielo que puede llegar a congelar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Fires an icy cold beam that may freeze the foe."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM14_BLIZZARD] =
    {
        .name = _("TM14"),
        .itemId = ITEM_TM14_BLIZZARD,
        .price = 20000,
        .bpPrice = 35,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tormenta de viento y nieve que puede llegar a congelar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A brutal snow-and- wind attack that may freeze the foe."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM15_HYPER_BEAM] =
    {
        .name = _("TM15"),
        .itemId = ITEM_TM15_HYPER_BEAM,
        .price = 20000,
        .bpPrice = 35,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Es eficaz, pero necesita 1 turno para recargarse."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Powerful, but needs recharging the next turn."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM16_LIGHT_SCREEN] =
    {
        .name = _("TM16"),
        .itemId = ITEM_TM16_LIGHT_SCREEN,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Pared de luz que reduce el daño del At. Esp."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Creates a wall of light that lowers Sp. Atk damage."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM17_PROTECT] =
    {
        .name = _("TM17"),
        .itemId = ITEM_TM17_PROTECT,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Anula los daños, pero puede fallar si se usa sin parar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Negates all damage, but may fail if used in succession."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM18_RAIN_DANCE] =
    {
        .name = _("TM18"),
        .itemId = ITEM_TM18_RAIN_DANCE,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube los ataques de tipo Agua durante 5 turnos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the power of Water-type moves for 5 turns."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM19_GIGA_DRAIN] =
    {
        .name = _("TM19"),
        .itemId = ITEM_TM19_GIGA_DRAIN,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Recupera la mitad de PS del daño que produce."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Recovers half the HP of the damage this move inflicts."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM20_SAFEGUARD] =
    {
        .name = _("TM20"),
        .itemId = ITEM_TM20_SAFEGUARD,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Evita alteraciones de estado usando un poder secreto."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Prevents status abnormality with a mystical power."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM21_FRUSTRATION] =
    {
        .name = _("TM21"),
        .itemId = ITEM_TM21_FRUSTRATION,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Cuanto menos le gustes al Pokémon, más fuerte ataca."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("The less the user likes you, the more powerful this move."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM22_SOLARBEAM] =
    {
        .name = _("TM22"),
        .itemId = ITEM_TM22_SOLARBEAM,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("1.{SUPER_ER}: toma luz. 2.º turno: ataca."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Absorbs sunlight in the 1st turn, then attacks next turn."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM23_IRON_TAIL] =
    {
        .name = _("TM23"),
        .itemId = ITEM_TM23_IRON_TAIL,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Golpea con un gran coletazo y puede bajar la Defensa."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Slams the foe with a hard tail. It may lower Defense."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM24_THUNDERBOLT] =
    {
        .name = _("TM24"),
        .itemId = ITEM_TM24_THUNDERBOLT,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Duro ataque eléc- trico que puede paralizar al rival."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A powerful electric attack that may cause paralysis."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM25_THUNDER] =
    {
        .name = _("TM25"),
        .itemId = ITEM_TM25_THUNDER,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Ataca con un rayo que puede paralizar al rival."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Strikes the foe with a thunderbolt. It may paralyze."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM26_EARTHQUAKE] =
    {
        .name = _("TM26"),
        .itemId = ITEM_TM26_EARTHQUAKE,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Provoca un temblor que no afecta a los voladores."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Causes a quake that has no effect on flying foes."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM27_RETURN] =
    {
        .name = _("TM27"),
        .itemId = ITEM_TM27_RETURN,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Cuanto más le gustes al Pokémon más fuerte ataca."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("The more the user likes you, the more powerful this move."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM28_DIG] =
    {
        .name = _("TM28"),
        .itemId = ITEM_TM28_DIG,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("1.{SUPER_ER} turno: cava. 2.º turno: ataca."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Digs underground the 1st turn, then strikes next turn."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM29_PSYCHIC] =
    {
        .name = _("TM29"),
        .itemId = ITEM_TM29_PSYCHIC,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Fuerte ataque psí- quico que puede bajar la Def. Esp."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A powerful psychic attack that may lower Sp. Def."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM30_SHADOW_BALL] =
    {
        .name = _("TM30"),
        .itemId = ITEM_TM30_SHADOW_BALL,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Lanza una bola negra que puede bajar la Def. Esp."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Hurls a dark lump at the foe. It may lower Sp. Def."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM31_BRICK_BREAK] =
    {
        .name = _("TM31"),
        .itemId = ITEM_TM31_BRICK_BREAK,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Destruye barreras como Pantalla Luz y causa daño."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Destroys barriers like Light Screen and causes damage."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM32_DOUBLE_TEAM] =
    {
        .name = _("TM32"),
        .itemId = ITEM_TM32_DOUBLE_TEAM,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Crea ilusiones para mejorar la Evasión."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Creates illusory copies to enhance elusiveness."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM33_REFLECT] =
    {
        .name = _("TM33"),
        .itemId = ITEM_TM33_REFLECT,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Pared de luz que baja los ataques físicos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Creates a wall of light that weakens physical attacks."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM34_SHOCK_WAVE] =
    {
        .name = _("TM34"),
        .itemId = ITEM_TM34_SHOCK_WAVE,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Propina un ataque eléctrico rápido e ineludible."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Zaps the foe with a jolt of electricity that never misses."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM35_FLAMETHROWER] =
    {
        .name = _("TM35"),
        .itemId = ITEM_TM35_FLAMETHROWER,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Lanza un chorro de fuego que puede causar quemaduras."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Looses a stream of fire that may burn the foe."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM36_SLUDGE_BOMB] =
    {
        .name = _("TM36"),
        .itemId = ITEM_TM36_SLUDGE_BOMB,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Descarga de lodo que puede llegar a envenenar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Hurls sludge at the foe. It may poison the foe."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM37_SANDSTORM] =
    {
        .name = _("TM37"),
        .itemId = ITEM_TM37_SANDSTORM,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tormenta de arena que dura varios turnos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Causes a sandstorm that hits the foe over several turns."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM38_FIRE_BLAST] =
    {
        .name = _("TM38"),
        .itemId = ITEM_TM38_FIRE_BLAST,
        .price = 20000,
        .bpPrice = 35,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Potente ataque de fuego que puede quemar al rival."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A powerful fire attack that may burn the foe."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM39_ROCK_TOMB] =
    {
        .name = _("TM39"),
        .itemId = ITEM_TM39_ROCK_TOMB,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Inmoviliza al rival con rocas. Puede bajar la Velocidad."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Stops the foe from moving with rocks. May lower Speed."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM40_AERIAL_ACE] =
    {
        .name = _("TM40"),
        .itemId = ITEM_TM40_AERIAL_ACE,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Ataque tremen- damente rápido e ineludible."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("An extremely fast attack that can't be avoided."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM41_TORMENT] =
    {
        .name = _("TM41"),
        .itemId = ITEM_TM41_TORMENT,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Impide al rival que use un ataque de forma continuada."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Prevents the foe from using the same move in a row."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM42_FACADE] =
    {
        .name = _("TM42"),
        .itemId = ITEM_TM42_FACADE,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube el Ataque al estar quemado, paraliz. o enven."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises Attack when poisoned, burned, or paralyzed."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM43_SECRET_POWER] =
    {
        .name = _("TM43"),
        .itemId = ITEM_TM43_SECRET_POWER,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene efectos distintos según la zona."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Adds an effect to attack depending on the location."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM44_REST] =
    {
        .name = _("TM44"),
        .itemId = ITEM_TM44_REST,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("El Pokémon duerme 2 turnos y restaura su salud y estado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("The user sleeps for 2 turns to restore health and status."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM45_ATTRACT] =
    {
        .name = _("TM45"),
        .itemId = ITEM_TM45_ATTRACT,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace difícil atacar a un rival del otro género."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes it tough to attack a foe of the opposite gender."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM46_THIEF] =
    {
        .name = _("TM46"),
        .itemId = ITEM_TM46_THIEF,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al atacar, puede quitar al rival el objeto que lleve."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("While attacking, it may steal the foe's held item."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM47_STEEL_WING] =
    {
        .name = _("TM47"),
        .itemId = ITEM_TM47_STEEL_WING,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bate las rígidas alas para golpear al rival."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Spreads hard- edged wings and slams into the foe."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM48_SKILL_SWAP] =
    {
        .name = _("TM48"),
        .itemId = ITEM_TM48_SKILL_SWAP,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Intercambia la habilidad especial durante 1 turno."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Switches abilities with the foe on the turn this is used."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM49_SNATCH] =
    {
        .name = _("TM49"),
        .itemId = ITEM_TM49_SNATCH,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Rova el efecto del ataque que el rival intenta usar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Steals the effects of the move the foe is trying to use."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM50_OVERHEAT] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("TM50"),
#else
        .name = _("TM50"),
#endif
        .itemId = ITEM_TM50_OVERHEAT,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Ataca con toda la fuerza, pero baja mucho el At. Esp."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Enables full-power attack, but sharply lowers Sp. Atk."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM51_LOW_SWEEP] =
    {
        .name = _("TM51"),
        .itemId = ITEM_TM51_LOW_SWEEP,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Low Sweep."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM52_FOCUS_BLAST] =
    {
        .name = _("TM52"),
        .itemId = ITEM_TM52_FOCUS_BLAST,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Focus Blast."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM53_ENERGY_BALL] =
    {
        .name = _("TM53"),
        .itemId = ITEM_TM53_ENERGY_BALL,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Energy Ball."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM54_FALSE_SWIPE] =
    {
        .name = _("TM54"),
        .itemId = ITEM_TM54_FALSE_SWIPE,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move False Swipe."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM55_SCALD] =
    {
        .name = _("TM55"),
        .itemId = ITEM_TM55_SCALD,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Scald."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM56_DARKEST_LARIAT] =
    {
        .name = _("TM56"),
        .itemId = ITEM_TM56_DARKEST_LARIAT,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Darkest Lariat."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM57_CHARGE_BEAM] =
    {
        .name = _("TM57"),
        .itemId = ITEM_TM57_CHARGE_BEAM,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Charge Beam."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM58_ROOST] =
    {
        .name = _("TM58"),
        .itemId = ITEM_TM58_ROOST,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Roost."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM59_BRUTAL_SWING] =
    {
        .name = _("TM59"),
        .itemId = ITEM_TM59_BRUTAL_SWING,
        .price = 15000,
        .bpPrice = 20,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Brutal Swing."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM60_QUASH] =
    {
        .name = _("TM60"),
        .itemId = ITEM_TM60_QUASH,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Quash."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM61_WILL_O_WISP] =
    {
        .name = _("TM61"),
        .itemId = ITEM_TM61_WILL_O_WISP,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Will-O-Wisp."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM62_ACROBATICS] =
    {
        .name = _("TM62"),
        .itemId = ITEM_TM62_ACROBATICS,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Acrobatics."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM63_EMBARGO] =
    {
        .name = _("TM63"),
        .itemId = ITEM_TM63_EMBARGO,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Embargo."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_TM64_EXPLOSION] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("TM64"),
#else
        .name = _("TM64"),
#endif
        .itemId = ITEM_TM64_EXPLOSION,
        .price = 50000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Causa mucho daño, pero te debilita."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Explosion."),
#endif
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM65_SHADOW_CLAW] =
    {
        .name = _("TM65"),
        .itemId = ITEM_TM65_SHADOW_CLAW,
        .price = 10000,
        .bpPrice = 15,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Shadow Claw."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM66_PAYBACK] =
    {
        .name = _("TM66"),
        .itemId = ITEM_TM66_PAYBACK,
        .price = 10000,
        .bpPrice = 15,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Payback."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM67_SMART_STRIKE] =
    {
        .name = _("TM67"),
        .itemId = ITEM_TM67_SMART_STRIKE,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Smart Strike."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM68_GIGA_IMPACT] =
    {
        .name = _("TM68"),
        .itemId = ITEM_TM68_GIGA_IMPACT,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Giga Impact."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM69_ROCK_POLISH] =
    {
        .name = _("TM69"),
        .itemId = ITEM_TM69_ROCK_POLISH,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Rock Polish."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM70_AURORA_VEIL] =
    {
        .name = _("TM70"),
        .itemId = ITEM_TM70_AURORA_VEIL,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Aurora Veil."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM71_STONE_EDGE] =
    {
        .name = _("TM71"),
        .itemId = ITEM_TM71_STONE_EDGE,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Stone Edge."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM72_VOLT_SWITCH] =
    {
        .name = _("TM72"),
        .itemId = ITEM_TM72_VOLT_SWITCH,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Volt Switch."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM73_THUNDER_WAVE] =
    {
        .name = _("TM73"),
        .itemId = ITEM_TM73_THUNDER_WAVE,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Thunder Wave."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM74_GYRO_BALL] =
    {
        .name = _("TM74"),
        .itemId = ITEM_TM74_GYRO_BALL,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Gyro Ball."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM75_SWORDS_DANCE] =
    {
        .name = _("TM75"),
        .itemId = ITEM_TM75_SWORDS_DANCE,
        .price = 7500,
        .bpPrice = 10,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Swords Dance."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM76_FLY] =
    {
        .name = _("TM76"),
        .itemId = ITEM_TM76_FLY,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Fly."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM77_PSYCH_UP] =
    {
        .name = _("TM77"),
        .itemId = ITEM_TM77_PSYCH_UP,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Psych Up."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM78_BULLDOZE] =
    {
        .name = _("TM78"),
        .itemId = ITEM_TM78_BULLDOZE,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Bulldoze."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM79_FROST_BREATH] =
    {
        .name = _("TM79"),
        .itemId = ITEM_TM79_FROST_BREATH,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Frost Breath."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM80_ROCK_SLIDE] =
    {
        .name = _("TM80"),
        .itemId = ITEM_TM80_ROCK_SLIDE,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Rock Slide."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM81_X_SCISSOR] =
    {
        .name = _("TM81"),
        .itemId = ITEM_TM81_X_SCISSOR,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move X-Scissor."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM82_DRAGON_TAIL] =
    {
        .name = _("TM82"),
        .itemId = ITEM_TM82_DRAGON_TAIL,
        .price = 20000,
        .bpPrice = 25,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Dragon Tail."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM83_INFESTATION] =
    {
        .name = _("TM83"),
        .itemId = ITEM_TM83_INFESTATION,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Infestation."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM84_POISON_JAB] =
    {
        .name = _("TM84"),
        .itemId = ITEM_TM84_POISON_JAB,
        .price = 25000,
        .bpPrice = 30,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Poison Jab."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM85_DREAM_EATER] =
    {
        .name = _("TM85"),
        .itemId = ITEM_TM85_DREAM_EATER,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Dream Eater."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM86_GRASS_KNOT] =
    {
        .name = _("TM86"),
        .itemId = ITEM_TM86_GRASS_KNOT,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Grass Knot."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM87_SWAGGER] =
    {
        .name = _("TM87"),
        .itemId = ITEM_TM87_SWAGGER,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Swagger."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM88_SLEEP_TALK] =
    {
        .name = _("TM88"),
        .itemId = ITEM_TM88_SLEEP_TALK,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Sleep Talk."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM89_U_TURN] =
    {
        .name = _("TM89"),
        .itemId = ITEM_TM89_U_TURN,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move U-Turn."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM90_SUBSTITUTE] =
    {
        .name = _("TM90"),
        .itemId = ITEM_TM90_SUBSTITUTE,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Substitute."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM91_FLASH_CANNON] =
    {
        .name = _("TM91"),
        .itemId = ITEM_TM91_FLASH_CANNON,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Flash Cannon."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM92_TRICK_ROOM] =
    {
        .name = _("TM92"),
        .itemId = ITEM_TM92_TRICK_ROOM,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Trick Room."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM93_WILD_CHARGE] =
    {
        .name = _("TM93"),
        .itemId = ITEM_TM93_WILD_CHARGE,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Wild Charge."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM94_SURF] =
    {
        .name = _("TM94"),
        .itemId = ITEM_TM94_SURF,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Surf."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },  

    [ITEM_TM95_SNARL] =
    {
        .name = _("TM95"),
        .itemId = ITEM_TM95_SNARL,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Snarl."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM96_NATURE_POWER] =
    {
        .name = _("TM96"),
        .itemId = ITEM_TM96_NATURE_POWER,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Nature Power."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM97_DARK_PULSE] =
    {
        .name = _("TM97"),
        .itemId = ITEM_TM97_DARK_PULSE,
        .price = 25000,
        .bpPrice = 30,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Dark Pulse."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM98_WATERFALL] =
    {
        .name = _("TM98"),
        .itemId = ITEM_TM98_WATERFALL,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Waterfall."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
    },
    
    [ITEM_TM99_DAZZLING_GLEAM] =
    {
        .name = _("TM99"),
        .itemId = ITEM_TM99_DAZZLING_GLEAM,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Dazzling Gleam."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM100_CONFIDE] =
    {
        .name = _("TM100"),
        .itemId = ITEM_TM100_CONFIDE,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Confide."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM101_SLUDGE_WAVE] =
    {
        .name = _("TM101"),
        .itemId = ITEM_TM101_SLUDGE_WAVE,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Sludge Wave."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM102_LIQUIDATION] =
    {
        .name = _("TM102"),
        .itemId = ITEM_TM102_LIQUIDATION,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Liquidation."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM103_LEECH_LIFE] =
    {
        .name = _("TM103"),
        .itemId = ITEM_TM103_LEECH_LIFE,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Leech Life."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM104_PLAY_ROUGH] =
    {
        .name = _("TM104"),
        .itemId = ITEM_TM104_PLAY_ROUGH,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Play Rough."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM105_PSYSHOCK] =
    {
        .name = _("TM105"),
        .itemId = ITEM_TM105_PSYSHOCK,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Psyshock."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM106_AURA_SPHERE] =
    {
        .name = _("TM106"),
        .itemId = ITEM_TM106_AURA_SPHERE,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Aura Sphere."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM107_POWER_GEM] =
    {
        .name = _("TM107"),
        .itemId = ITEM_TM107_POWER_GEM,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Power Gem."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM108_EARTH_POWER] =
    {
        .name = _("TM108"),
        .itemId = ITEM_TM108_EARTH_POWER,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Earth Power."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    

    [ITEM_TM109_GUNK_SHOT] =
    {
        .name = _("TM109"),
        .itemId = ITEM_TM109_GUNK_SHOT,
        .price = 25000,
        .bpPrice = 30,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Gunk Shot."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM110_STEALTH_ROCK] =
    {
        .name = _("TM110"),
        .itemId = ITEM_TM110_STEALTH_ROCK,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Stealth Rock."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM111_HEAT_CRASH] =
    {
        .name = _("TM111"),
        .itemId = ITEM_TM111_HEAT_CRASH,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Heat Crash."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM112_POLLEN_PUFF] =
    {
        .name = _("TM112"),
        .itemId = ITEM_TM112_POLLEN_PUFF,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Pollen Puff."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM113_NASTY_PLOT] =
    {
        .name = _("TM113"),
        .itemId = ITEM_TM113_NASTY_PLOT,
        .price = 15000,
        .bpPrice = 20,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Nasty Plot."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },    
    
    [ITEM_TM114_BRAVE_BIRD] =
    {
        .name = _("TM114"),
        .itemId = ITEM_TM114_BRAVE_BIRD,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Brave Bird."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM115_BUG_BUZZ] =
    {
        .name = _("TM115"),
        .itemId = ITEM_TM115_BUG_BUZZ,
        .price = 20000,
        .bpPrice = 25,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Bug Buzz."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM116_DRAGON_DANCE] =
    {
        .name = _("TM116"),
        .itemId = ITEM_TM116_DRAGON_DANCE,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Dragon Dance."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM117_BLAZE_KICK] =
    {
        .name = _("TM117"),
        .itemId = ITEM_TM117_BLAZE_KICK,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Blaze Kick."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM118_TRI_ATTACK] =
    {
        .name = _("TM118"),
        .itemId = ITEM_TM118_TRI_ATTACK,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Tri-Attack."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM119_DRAIN_PUNCH] =
    {
        .name = _("TM119"),
        .itemId = ITEM_TM119_DRAIN_PUNCH,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Drain Punch."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },
    
    [ITEM_TM120_MYSTICAL_FIRE] =
    {
        .name = _("TM120"),
        .itemId = ITEM_TM120_MYSTICAL_FIRE,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("This TM can be used to teach the Move Mystical Fire."),
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
        .importance = 1,
    },

    [ITEM_HM01_CUT] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("HM01"),
#else
        .name = _("HM01"),
#endif
        .itemId = ITEM_HM01_CUT,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Corta con finas cuchillas, afiladas garras, etc."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Attacks the foe with sharp blades or claws."),
#endif
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
    },

    [ITEM_HM02_FLY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("HM02"),
#else
        .name = _("HM02"),
#endif
        .itemId = ITEM_HM02_FLY,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("1.{SUPER_ER} turno: vuela. 2.º turno: ataca."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Flies up on the first turn, then attacks next turn."),
#endif
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
    },

    [ITEM_HM03_SURF] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("HM03"),
#else
        .name = _("HM03"),
#endif
        .itemId = ITEM_HM03_SURF,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Crea una ola gigante y la lanza contra el enemigo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Creates a huge wave, then crashes it down on the foe."),
#endif
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
    },

    [ITEM_HM04_STRENGTH] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("HM04"),
#else
        .name = _("HM04"),
#endif
        .itemId = ITEM_HM04_STRENGTH,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Genera mucha fuerza y ataca con energía al rival."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Builds enormous power, then slams the foe."),
#endif
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
    },

    [ITEM_HM05_FLASH] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("HM05"),
#else
        .name = _("HM05"),
#endif
        .itemId = ITEM_HM05_FLASH,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Lanza una intensa ráfaga de luz que baja la Precisión."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Looses a powerful blast of light that reduces accuracy."),
#endif
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
    },

    [ITEM_HM06_ROCK_SMASH] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("HM06"),
#else
        .name = _("HM06"),
#endif
        .itemId = ITEM_HM06_ROCK_SMASH,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Ataque demoledor que puede bajar la Defensa."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A rock-crushingly tough attack that may lower Defense."),
#endif
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
    },

    [ITEM_HM07_WATERFALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("HM07"),
#else
        .name = _("HM07"),
#endif
        .itemId = ITEM_HM07_WATERFALL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Embiste con impulso como para remontar una cascada."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Attacks the foe with enough power to climb waterfalls."),
#endif
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
    },

    [ITEM_HM08_DIVE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("HM08"),
#else
        .name = _("HM08"),
#endif
        .itemId = ITEM_HM08_DIVE,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("1.{SUPER_ER} turno: bucea. 2.º turno: golpea."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Dives underwater the 1st turn, then attacks next turn."),
#endif
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = 0,
    },

    [ITEM_HEAVY_DUTY_BOOTS] =
    {
        .name = _("HeavyDutyBoots"),
        .itemId = ITEM_HEAVY_DUTY_BOOTS,
        .price = 9000,
        .bpPrice = 20,
        .holdEffect = HOLD_EFFECT_HEAVY_DUTY_BOOTS,
        .description = FORMAT_ITEM_DESCRIPTION("These boots prevent the effects of traps in battle."),
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BIKE_VOUCHER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bono Bici"),
#else
        .name = _("Bike Voucher"),
#endif
        .itemId = ITEM_BIKE_VOUCHER,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Puede canjearse por una bici en la Tienda de Bicis."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A voucher for obtaining a bicycle from the Bike Shop."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_GOLD_TEETH] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Dientes Oro"),
#else
        .name = _("Gold Teeth"),
#endif
        .itemId = ITEM_GOLD_TEETH,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Son los dientes de oro que perdió el Guarda del Safari."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Gold dentures lost by the Safari Zone's Warden."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_OLD_AMBER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ámbar Viejo"),
#else
        .name = _("Old Amber"),
#endif
        .itemId = ITEM_OLD_AMBER,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Trozo de ámbar con genes de un Pokémon ancestral."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A stone containing the genes of an ancient Pokémon."),
#endif
        #if I_KEY_FOSSILS >= GEN_4
            .importance = 0,
            .pocket = POCKET_ITEMS,
        #else
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CARD_KEY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Llave Magnética"),
#else
        .name = _("Card Key"),
#endif
        .itemId = ITEM_CARD_KEY,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Abre las Oficinas Centrales de Silph S.A."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A card-type door key used in Silph Co's office."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_LIFT_KEY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Llave Ascensor"),
#else
        .name = _("Lift Key"),
#endif
        .itemId = ITEM_LIFT_KEY,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Abre el ascensor de la Guarida del Equipo Rocket."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("An elevator key used in Team Rocket's Hideout."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ARMOR_FOSSIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Fósil Coraza"),
#else
        .name = _("Armor Fossil"),
#endif
        .itemId = ITEM_ARMOR_FOSSIL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Parte de la cabeza de un Pokémon prehistórico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A piece of a prehistoric POKé- MON's head."),
#endif
        .importance = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SKULL_FOSSIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Fósil Cráneo"),
#else
        .name = _("Skull Fossil"),
#endif
        .itemId = ITEM_SKULL_FOSSIL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Parte de la cabeza de un Pokémon prehistórico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A piece of a prehistoric POKé- MON's head."),
#endif
        .importance = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_HELIX_FOSSIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Fósil Helix"),
#else
        .name = _("Helix Fossil"),
#endif
        .itemId = ITEM_HELIX_FOSSIL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Concha marina de un Pokémon ancestral que habitó el mar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A piece of an ancient marine Pokémon's seashell."),
#endif
        #if I_KEY_FOSSILS >= GEN_4
            .importance = 0,
            .pocket = POCKET_ITEMS,
        #else
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_DOME_FOSSIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Fósil Domo"),
#else
        .name = _("Dome Fossil"),
#endif
        .itemId = ITEM_DOME_FOSSIL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Concha de un Pokémon ancestral que habitó el mar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A piece of an ancient marine Pokémon's shell."),
#endif
        #if I_KEY_FOSSILS >= GEN_4
            .importance = 0,
            .pocket = POCKET_ITEMS,
        #else
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ROOT_FOSSIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Fósil Raíz"),
#else
        .name = _("Root Fossil"),
#endif
        .itemId = ITEM_ROOT_FOSSIL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Fósil de un Pokémon ancestral que moró en el fondo del mar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A fossil of an ancient, seafloor- dwelling Pokémon."),
#endif
        #if I_KEY_FOSSILS >= GEN_4
            .importance = 0,
            .pocket = POCKET_ITEMS,
        #else
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CLAW_FOSSIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Fósil Garra"),
#else
        .name = _("Claw Fossil"),
#endif
        .itemId = ITEM_CLAW_FOSSIL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Fósil de un Pokémon ancestral que moró en el fondo del mar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A fossil of an ancient, seafloor- dwelling Pokémon."),
#endif
        #if I_KEY_FOSSILS >= GEN_4
            .importance = 0,
            .pocket = POCKET_ITEMS,
        #else
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_COVER_FOSSIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Fósil Tapa"),
#else
        .name = _("Cover Fossil"),
#endif
        .itemId = ITEM_COVER_FOSSIL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Parte de la espalda de un Pokémon prehistórico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A piece of a prehistoric POKé- MON's back."),
#endif
        .importance = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PLUME_FOSSIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Fósil Pluma"),
#else
        .name = _("Plume Fossil"),
#endif
        .itemId = ITEM_PLUME_FOSSIL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Pedazo del ala de un Pokémon prehistórico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A piece of a prehistoric POKé- MON's wing."),
#endif
        .importance = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_JAW_FOSSIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Fósil Mandíbula"),
#else
        .name = _("Jaw Fossil"),
#endif
        .itemId = ITEM_JAW_FOSSIL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("La mandíbula de un Pokémon prehistórico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A piece of a prehis- toric Pokémon's large jaw."),
#endif
        .importance = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_FOSSILIZED_BIRD] =
    {
        .name = _("Fossilized Bird"),
        .itemId = ITEM_FOSSILIZED_BIRD,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("La mandíbula de un Pokémon prehistórico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A piece of a prehis- toric Pokémon's large jaw."),
#endif
        .importance = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_FOSSILIZED_DINO] =
    {
        .name = _("Fossilized Dino"),
        .itemId = ITEM_FOSSILIZED_DINO,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("La mandíbula de un Pokémon prehistórico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A piece of a prehis- toric Pokémon's large jaw."),
#endif
        .importance = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_FOSSILIZED_FISH] =
    {
        .name = _("Fossilized Fish"),
        .itemId = ITEM_FOSSILIZED_FISH,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("La mandíbula de un Pokémon prehistórico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A piece of a prehis- toric Pokémon's large jaw."),
#endif
        .importance = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_FOSSILIZED_DRAKE] =
    {
        .name = _("Fossilized Drake"),
        .itemId = ITEM_FOSSILIZED_DRAKE,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("La mandíbula de un Pokémon prehistórico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A piece of a prehis- toric Pokémon's large jaw."),
#endif
        .importance = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SAIL_FOSSIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Fósil Aleta"),
#else
        .name = _("Sail Fossil"),
#endif
        .itemId = ITEM_SAIL_FOSSIL,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Aleta dorsal de un Pokémon prehistórico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A piece of a prehis- toric Pokémon's skin sail."),
#endif
        .importance = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SILPH_SCOPE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Visor Silph"),
#else
        .name = _("Silph Scope"),
#endif
        .itemId = ITEM_SILPH_SCOPE,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Dispositivo de Silph S.A. para ver Pokémon invisibles."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Silph Co's scope makes unseeable Pokémon visible."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BICYCLE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bicicleta"),
#else
        .name = _("Bicycle"),
#endif
        .itemId = ITEM_BICYCLE,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bici plegable más rápida que las Deportivas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A folding bicycle that is faster than the Running Shoes."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_TOWN_MAP] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Mapa"),
#else
        .name = _("Town Map"),
#endif
        .itemId = ITEM_TOWN_MAP,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Puede consultarse cuando sea. Indica dónde estás."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Can be viewed anytime. Shows your present location."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_VS_SEEKER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Buscapelea"),
#else
        .name = _("Vs Seeker"),
#endif
        .itemId = ITEM_VS_SEEKER,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Indica qué Entre- nadores quieren luchar. Se recarga."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A rechargeable unit that flags battle- ready Trainers."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_FAME_CHECKER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Memorín"),
#else
        .name = _("Fame Checker"),
#endif
        .itemId = ITEM_FAME_CHECKER,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Refresca la memoria sobre cosas y personas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Stores information on famous people for instant recall."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_TM_CASE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tubo MT-MO"),
#else
        .name = _("TM Case"),
#endif
        .itemId = ITEM_TM_CASE,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tubo que contiene las MT y MO. Es muy útil."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A convenient case that holds TMs and HMs."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BERRY_POUCH] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Saco Bayas"),
#else
        .name = _("Berry Pouch"),
#endif
        .itemId = ITEM_BERRY_POUCH,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Útil saquito que sirve para llevar Bayas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A convenient container that holds Berries."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_TEACHY_TV] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Poké Tele"),
#else
        .name = _("Ride Pager"),
#endif
        .itemId = ITEM_TEACHY_TV,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tele que emite útiles consejos para Entrenadores."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A convenient item used to ride various Pokémon."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_TRI_PASS] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tri-Ticket"),
#else
        .name = _("Tri-Pass"),
#endif
        .itemId = ITEM_TRI_PASS,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Ticket del ferry de Isla Prima, Secunda y Tera."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A pass for ferries between One, Two, and Three Island."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_RAINBOW_PASS] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Iris-Ticket"),
#else
        .name = _("Rainbow Pass"),
#endif
        .itemId = ITEM_RAINBOW_PASS,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Ticket del ferry de Carmín y Archi7."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("For ferries serving Vermilion and the Sevii Islands."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_TEA] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Té"),
#else
        .name = _("Tea"),
#endif
        .itemId = ITEM_TEA,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Té preparado por una señora mayor. Apaga la sed."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A thirst-quenching tea prepared by an old lady."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_MYSTIC_TICKET] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Misti-Ticket"),
#else
        .name = _("Mystic Ticket"),
#endif
        .itemId = ITEM_MYSTIC_TICKET,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Ticket necesario para navegar hasta Roca Ombligo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A ticket required to board the ship to Navel Rock."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_AURORA_TICKET] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ori-Ticket"),
#else
        .name = _("Aurora Ticket"),
#endif
        .itemId = ITEM_AURORA_TICKET,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Ticket necesario para navegar hasta Isla Origen."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A ticket required to board the ship to Birth Island."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_POWDER_JAR] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bote Polvos"),
#else
        .name = _("Powder Jar"),
#endif
        .itemId = ITEM_POWDER_JAR,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Es para el Polvo de Baya que sale del Machacabayas."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Stores Berry Powder made using a Berry Crusher."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_PowderJar,
        .secondaryId = 0,
    },

    [ITEM_RUBY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Rubí"),
#else
        .name = _("Ruby"),
#endif
        .itemId = ITEM_RUBY,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bella gema de brillo rojizo. Simboliza el entusiasmo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("An exquisite, red- glowing gem that symbolizes passion."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SAPPHIRE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Zafiro"),
#else
        .name = _("Sapphire"),
#endif
        .itemId = ITEM_SAPPHIRE,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Bella gema de brillo azulado. Simboliza la sinceridad."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A brilliant blue gem that symbolizes honesty."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

// Emerald-specific key items

    [ITEM_MAGMA_EMBLEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Signo Magma"),
#else
        .name = _("Magma Emblem"),
#endif
        .itemId = ITEM_MAGMA_EMBLEM,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Especie de medalla idéntica al símbolo del Equipo Magma."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A medal-like item in the same shape as Team Magma's mark."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_OLD_SEA_MAP] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Mapa Viejo"),
#else
        .name = _("Old Sea Map"),
#endif
        .itemId = ITEM_OLD_SEA_MAP,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Descolorido mapa marino, que indica dónde hay una isla."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A faded sea chart that shows the way to a certain island."),
#endif
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

// New items

    [ITEM_WIDE_LENS] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Lupa"),
#else
        .name = _("Wide Lens"),
#endif
        .itemId = ITEM_WIDE_LENS,
        .price = 2000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_WIDE_LENS,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Lupa que aumenta la precisión de movimientos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A magnifying lens that boosts the accuracy of moves."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_MUSCLE_BAND] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cinta Fuerte"),
#else
        .name = _("Muscle Band"),
#endif
        .itemId = ITEM_MUSCLE_BAND,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MUSCLE_BAND,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Cinta que aumenta el poder de mov. físicos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A headband that boosts the power of physical moves."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_WISE_GLASSES] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gafas Especiales"),
#else
        .name = _("Wise Glasses"),
#endif
        .itemId = ITEM_WISE_GLASSES,
        .price = 200,
        .holdEffect = HOLD_EFFECT_WISE_GLASSES,
        .holdEffectParam = 10,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Lentes que suben el poder de mov. especiales."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A pair of glasses that ups the power of special moves."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_EXPERT_BELT] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cinta Experto"),
#else
        .name = _("Expert Belt"),
#endif
        .itemId = ITEM_EXPERT_BELT,
        .price = 2000,
        .bpPrice = 5,
        .holdEffect = HOLD_EFFECT_EXPERT_BELT,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Potencia un poco los movimientos supereficaces."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A belt that boosts the power of super effective moves."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_LIGHT_CLAY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Refleluz"),
#else
        .name = _("Light Clay"),
#endif
        .itemId = ITEM_LIGHT_CLAY,
        .price = 200,
        .holdEffect = HOLD_EFFECT_LIGHT_CLAY,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Prolonga el efecto de Reflejo y Pantalla de Luz."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Extends the length of barrier moves used by the holder."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_LIFE_ORB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Vidasfera"),
#else
        .name = _("Life Orb"),
#endif
        .itemId = ITEM_LIFE_ORB,
        .price = 9000,
        .bpPrice = 25,
        .holdEffect = HOLD_EFFECT_LIFE_ORB,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Potencia movim., pero consume PS con cada ataque."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Boosts the power of moves at the cost of some HP per turn."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_POWER_HERB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Hierba Única"),
#else
        .name = _("Power Herb"),
#endif
        .itemId = ITEM_POWER_HERB,
        .price = 5000,
        .bpPrice = 20,
        .holdEffect = HOLD_EFFECT_POWER_HERB,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Permite el uso inmediato de mov. en el primer turno."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Allows immediate use of a move that charges first."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_TOXIC_ORB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Toxisfera"),
#else
        .name = _("Toxic Orb"),
#endif
        .itemId = ITEM_TOXIC_ORB,
        .price = 9000,
        .bpPrice = 15,
        .holdEffect = HOLD_EFFECT_TOXIC_ORB,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("El que la lleva es envenenado gravemente."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A bizarre orb that badly poisons the holder in battle."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_FLAME_ORB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Llamasfera"),
#else
        .name = _("Flame Orb"),
#endif
        .itemId = ITEM_FLAME_ORB,
        .price = 9000,
        .bpPrice = 15,
        .holdEffect = HOLD_EFFECT_FLAME_ORB,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Extraña esfera que causa quemaduras al que la lleva."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A bizarre orb that inflicts a burn on holder in battle."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_QUICK_POWDER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Polvo Veloz"),
#else
        .name = _("Quick Powder"),
#endif
        .itemId = ITEM_QUICK_POWDER,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_QUICK_POWDER,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Polvo fino y duro, que aumenta la Velocidad de Ditto."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("An item to be held by Ditto. This odd powder boosts Speed."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_FOCUS_SASH] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Banda Focus"),
#else
        .name = _("Focus Sash"),
#endif
        .itemId = ITEM_FOCUS_SASH,
        .price = 5000,
        .bpPrice = 20,
        .holdEffect = HOLD_EFFECT_FOCUS_SASH,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Con los PS al máximo, resiste con 1 PS restante."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("If the holder has full HP, it endures KO hits with 1 HP."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ZOOM_LENS] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Telescopio"),
#else
        .name = _("Zoom Lens"),
#endif
        .itemId = ITEM_ZOOM_LENS,
        .price = 2000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_ZOOM_LENS,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube la Precisión si el objetivo ataca antes del portador."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("If the holder moves after the foe, it'll boost accuracy."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_METRONOME] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Metrónomo"),
#else
        .name = _("Metronome"),
#endif
        .itemId = ITEM_METRONOME,
        .price = 2000,
        .bpPrice = 8,
        .holdEffect = HOLD_EFFECT_METRONOME,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Potencia mov. si se usa de forma consecutiva."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A held item that boosts a move used consecutively."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_IRON_BALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bola Férrea"),
#else
        .name = _("Iron Ball"),
#endif
        .itemId = ITEM_IRON_BALL,
        .price = 200,
        .holdEffect = HOLD_EFFECT_IRON_BALL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Reduce la Velocidad y quita inmunidad a mov. tipo Tierra."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Cuts Speed and lets Flying-types be hit by Ground moves."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_LAGGING_TAIL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cola Plúmbea"),
#else
        .name = _("Lagging Tail"),
#endif
        .itemId = ITEM_LAGGING_TAIL,
        .price = 200,
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla, hace lento al portador."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A held item that makes the holder move slower."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_DESTINY_KNOT] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Lazo Destino"),
#else
        .name = _("Destiny Knot"),
#endif
        .itemId = ITEM_DESTINY_KNOT,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DESTINY_KNOT,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Transmite el enamoramiento del Pokémon al enemigo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("If the holder falls in love, the foe does too."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BLACK_SLUDGE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Lodo Negro"),
#else
        .name = _("Black Sludge"),
#endif
        .itemId = ITEM_BLACK_SLUDGE,
        .price = 10000,
        .bpPrice = 20,
        .holdEffect = HOLD_EFFECT_BLACK_SLUDGE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Restaura los PS de los Pokémon de tipo Veneno. Daña otros."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Gradually restores HP of Poison-types. Damages others."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ICY_ROCK] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Roca Helada"),
#else
        .name = _("Icy Rock"),
#endif
        .itemId = ITEM_ICY_ROCK,
        .price = 200,
        .holdEffect = HOLD_EFFECT_ICY_ROCK,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Prolonga el efecto del movimiento Granizo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Extends the length of the move Hail used by the holder."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SMOOTH_ROCK] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Roca Suave"),
#else
        .name = _("Smooth Rock"),
#endif
        .itemId = ITEM_SMOOTH_ROCK,
        .price = 200,
        .holdEffect = HOLD_EFFECT_SMOOTH_ROCK,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Prolonga el efecto del movimiento Tormenta de Arena."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Extends the length of Sandstorm if used by the holder."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_HEAT_ROCK] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Roca Calor"),
#else
        .name = _("Heat Rock"),
#endif
        .itemId = ITEM_HEAT_ROCK,
        .price = 200,
        .holdEffect = HOLD_EFFECT_HEAT_ROCK,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Prolonga el efecto del movimiento Día Soleado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Extends the length of Sunny Day if used by the holder."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_DAMP_ROCK] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Roca Lluvia"),
#else
        .name = _("Damp Rock"),
#endif
        .itemId = ITEM_DAMP_ROCK,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DAMP_ROCK,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Prolonga el efecto del movimiento Danza Lluvia."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Extends the length of Rain Dance if used by the holder."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_GRIP_CLAW] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Garra Garfio"),
#else
        .name = _("Grip Claw"),
#endif
        .itemId = ITEM_GRIP_CLAW,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GRIP_CLAW,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Prolonga el efecto de movimientos como Constricción."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Makes binding moves used by the holder go on for 7 turns."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CHOICE_SCARF] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pañuelo Elección"),
#else
        .name = _("Choice Scarf"),
#endif
        .itemId = ITEM_CHOICE_SCARF,
        .price = 10000,
        .bpPrice = 20,
        .holdEffect = HOLD_EFFECT_CHOICE_SCARF,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube la Velocidad, pero sólo deja usarun movimiento."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Boosts Speed, but allows the use of only one move."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_STICKY_BARB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Toxiestrella"),
#else
        .name = _("Sticky Barb"),
#endif
        .itemId = ITEM_STICKY_BARB,
        .price = 200,
        .holdEffect = HOLD_EFFECT_STICKY_BARB,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Daña al que la lleva y a los que tengan contacto con él."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Damages the holder each turn. May latch on to foes."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SHED_SHELL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Muda Concha"),
#else
        .name = _("Shed Shell"),
#endif
        .itemId = ITEM_SHED_SHELL,
        .price = 2000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_SHED_SHELL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Permite cambiar con un Pokémon que no esté peleando."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Enables the holder to switch out of battle without fail."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BIG_ROOT] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Raíz Grande"),
#else
        .name = _("Big Root"),
#endif
        .itemId = ITEM_BIG_ROOT,
        .price = 200,
        .holdEffect = HOLD_EFFECT_BIG_ROOT,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Al llevarla cura más PS al usar movim. que drenan."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A held item that boosts the power of HP-stealing moves."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CHOICE_SPECS] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gafas Elección"),
#else
        .name = _("Choice Specs"),
#endif
        .itemId = ITEM_CHOICE_SPECS,
        .price = 10000,
        .bpPrice = 20,
        .holdEffect = HOLD_EFFECT_CHOICE_SPECS,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube el At. Esp., pero sólo deja usarun movimiento."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Boosts Sp. Atk, but allows the use of only one move."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ODD_KEYSTONE] =
    {
        .name = _("Odd Keystone"),
        .itemId = ITEM_ODD_KEYSTONE,
        .price = 2100,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("A veces se oyen voces en su interior."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Voices can be heard from this odd stone occasionally."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ADAMANT_ORB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Diamansfera"),
#else
        .name = _("Adamant Orb"),
#endif
        .itemId = ITEM_ADAMANT_ORB,
        .price = 200,
        .holdEffect = HOLD_EFFECT_ADAMANT_ORB,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Potencia los movim. de tipo Acero y Dragón de Dialga."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Boosts the power of Dialga's Dragon and Steel-type moves."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_LUSTROUS_ORB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Lustresfera"),
#else
        .name = _("Lustrous Orb"),
#endif
        .itemId = ITEM_LUSTROUS_ORB,
        .price = 200,
        .holdEffect = HOLD_EFFECT_LUSTROUS_ORB,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Potencia los movim. de tipo Dragón y Agua de Palkia."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Boosts the power of Palkia's Dragon and Water-type moves."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_GRISEOUS_ORB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Griseosfera"),
#else
        .name = _("Griseous Orb"),
#endif
        .itemId = ITEM_GRISEOUS_ORB,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GRISEOUS_ORB,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Potencia los movim. de tipo Fantasma y Dragón de Giratina."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Powers up Giratina's Dragon and Ghost- type moves."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_GRACIDEA] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gracídea"),
#else
        .name = _("Gracidea"),
#endif
        .itemId = ITEM_GRACIDEA,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Flor regalada en ramos para dar agradecimientos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Bouquets made with it are offered as a token of gratitude."),
#endif
        .pocket = POCKET_KEY_ITEMS,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_FormChangeItem,
        .secondaryId = 0,
    },

    [ITEM_ROTOM_CATALOG] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cat. Rotom"),
#else
        .name = _("Rotom Catalog"),
#endif
        .itemId = ITEM_ROTOM_CATALOG,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Catálogo con todos los aparatos que le gustan a Rotom."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A catalog of pokemon appliances liked by Rotom."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_FormChangeItem,
        .secondaryId = 0,
    },

    [ITEM_BUG_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Bicho"),
#else
        .name = _("Bug Memory"),
#endif
        .itemId = ITEM_BUG_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Bicho que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Bug type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
    },

    [ITEM_DARK_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Siniestro"),
#else
        .name = _("Dark Memory"),
#endif
        .itemId = ITEM_DARK_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Siniestro que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Dark type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
    },

    [ITEM_DRAGON_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Dragón"),
#else
        .name = _("Dragon Memory"),
#endif
        .itemId = ITEM_DRAGON_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Dragón que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Dragon type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
    },

    [ITEM_ELECTRIC_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Eléctrico"),
#else
        .name = _("Elec. Memory"),
#endif
        .itemId = ITEM_ELECTRIC_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Eléctrico que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Electric type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_FAIRY_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Hada"),
#else
        .name = _("Fairy Memory"),
#endif
        .itemId = ITEM_FAIRY_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Hada que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Fairy type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
    },

    [ITEM_FIGHTING_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Lucha"),
#else
        .name = _("Fight Memory"),
#endif
        .itemId = ITEM_FIGHTING_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Lucha que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Fighting type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
    },

    [ITEM_FIRE_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Lucha"),
#else
        .name = _("Fire Memory"),
#endif
        .itemId = ITEM_FIRE_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Fuego que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Fire type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_FLYING_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Lucha"),
#else
        .name = _("Flying Memory"),
#endif
        .itemId = ITEM_FLYING_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Volador que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Flying type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
    },

    [ITEM_GHOST_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Fantasma"),
#else
        .name = _("Ghost Memory"),
#endif
        .itemId = ITEM_GHOST_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Fantasma que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Ghost type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
    },

    [ITEM_GRASS_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Planta"),
#else
        .name = _("Grass Memory"),
#endif
        .itemId = ITEM_GRASS_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Planta que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Grass type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
    },

    [ITEM_GROUND_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Tierra"),
#else
        .name = _("Ground Memory"),
#endif
        .itemId = ITEM_GROUND_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Tierra que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Ground type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
    },

    [ITEM_ICE_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Hielo"),
#else
        .name = _("Ice Memory"),
#endif
        .itemId = ITEM_ICE_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Hielo que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Ice type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
    },

    [ITEM_POISON_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Veneno"),
#else
        .name = _("Poison Memory"),
#endif
        .itemId = ITEM_POISON_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Veneno que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Poison type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
    },

    [ITEM_PSYCHIC_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Psíquico"),
#else
        .name = _("Psychic Memory"),
#endif
        .itemId = ITEM_PSYCHIC_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Psíquico que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Psychic type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
    },

    [ITEM_ROCK_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Roca"),
#else
        .name = _("Rock Memory"),
#endif
        .itemId = ITEM_ROCK_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Roca que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Rock type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
    },

    [ITEM_STEEL_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Acero"),
#else
        .name = _("Steel Memory"),
#endif
        .itemId = ITEM_STEEL_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Acero que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Steel type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
    },

    [ITEM_WATER_MEMORY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Disco Agua"),
#else
        .name = _("Water Memory"),
#endif
        .itemId = ITEM_WATER_MEMORY,
        .price = 4900,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tiene datos de tipo Agua que cambian a Silvally."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A disc with Water type data. It swaps Silvally's type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_FLAME_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Llama"),
#else
        .name = _("Flame Plate"),
#endif
        .itemId = ITEM_FLAME_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Fuego."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Fire-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_SPLASH_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Linfa"),
#else
        .name = _("Splash Plate"),
#endif
        .itemId = ITEM_SPLASH_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Agua."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Water-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_ZAP_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Trueno"),
#else
        .name = _("Zap Plate"),
#endif
        .itemId = ITEM_ZAP_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Eléctrico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Elec- tric-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_MEADOW_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Pradal"),
#else
        .name = _("Meadow Plate"),
#endif
        .itemId = ITEM_MEADOW_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Planta."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Grass-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
    },

    [ITEM_ICICLE_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Helada"),
#else
        .name = _("Icicle Plate"),
#endif
        .itemId = ITEM_ICICLE_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Hielo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Ice-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
    },

    [ITEM_FIST_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Fuerte"),
#else
        .name = _("Fist Plate"),
#endif
        .itemId = ITEM_FIST_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Lucha."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Fight- ing-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
    },

    [ITEM_TOXIC_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Tóxica"),
#else
        .name = _("Toxic Plate"),
#endif
        .itemId = ITEM_TOXIC_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Veneno."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Poison-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
    },

    [ITEM_EARTH_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Terrax"),
#else
        .name = _("Earth Plate"),
#endif
        .itemId = ITEM_EARTH_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Tierra."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Ground-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
    },

    [ITEM_SKY_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Cielo"),
#else
        .name = _("Sky Plate"),
#endif
        .itemId = ITEM_SKY_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Volador."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Flying-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
    },

    [ITEM_MIND_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Mental"),
#else
        .name = _("Mind Plate"),
#endif
        .itemId = ITEM_MIND_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Psíquico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Psy chic-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
    },

    [ITEM_INSECT_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Bicho"),
#else
        .name = _("Insect Plate"),
#endif
        .itemId = ITEM_INSECT_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Bicho."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Bug-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
    },

    [ITEM_STONE_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Pétrea"),
#else
        .name = _("Stone Plate"),
#endif
        .itemId = ITEM_STONE_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Roca."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Rock-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
    },

    [ITEM_SPOOKY_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Terror"),
#else
        .name = _("Spooky Plate"),
#endif
        .itemId = ITEM_SPOOKY_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Fantasma."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Ghost-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
    },

    [ITEM_DRACO_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Draco"),
#else
        .name = _("Draco Plate"),
#endif
        .itemId = ITEM_DRACO_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Dragón."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Dragon-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
    },

    [ITEM_DREAD_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Oscura"),
#else
        .name = _("Dread Plate"),
#endif
        .itemId = ITEM_DREAD_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Siniestro."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Dark-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
    },

    [ITEM_IRON_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Acero"),
#else
        .name = _("Iron Plate"),
#endif
        .itemId = ITEM_IRON_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Acero."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A tablet that ups the power of Steel-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
    },

    [ITEM_EVIOLITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Mineral Evolutivo"),
#else
        .name = _("Eviolite"),
#endif
        .itemId = ITEM_EVIOLITE,
        .price = 2000,
        .bpPrice = 15,
        .holdEffect = HOLD_EFFECT_EVIOLITE,
        .holdEffectParam = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube la Defensa y Def. Especial si aún puede evolucionar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises the Def and Sp. Def of Pokémon is able to Evolve."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_FLOAT_STONE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Piedra Pómez"),
#else
        .name = _("Float Stone"),
#endif
        .itemId = ITEM_FLOAT_STONE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_FLOAT_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra muy ligera que reduce el peso de quién la lleve."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("It's so light that when held, it halves a Pokémon's weight."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ROCKY_HELMET] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Casco Dentado"),
#else
        .name = _("Rocky Helmet"),
#endif
        .itemId = ITEM_ROCKY_HELMET,
        .price = 9000,
        .bpPrice = 20,
        .holdEffect = HOLD_EFFECT_ROCKY_HELMET,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Si recibe daño físico, el agresor también es dañado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Hurts the foe if they touch its holder."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_AIR_BALLOON] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Globo Helio"),
#else
        .name = _("Air Balloon"),
#endif
        .itemId = ITEM_AIR_BALLOON,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_AIR_BALLOON,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Hace flotar al portador. Si recibe un golpe, estallará."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Elevates the holder in the air. If hit, this item will burst."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_RED_CARD] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tarjeta Roja"),
#else
        .name = _("Red Card"),
#endif
        .itemId = ITEM_RED_CARD,
        .price = 2000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_RED_CARD,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Expulsa al enemigo cuando este le cause daño."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Switches out the foe if they hit the holder."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_RING_TARGET] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Blanco"),
#else
        .name = _("Ring Target"),
#endif
        .itemId = ITEM_RING_TARGET,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_RING_TARGET,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Quien lo lleva pierde cualquier inmunidad de tipos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Moves that wouldn't have effect will land on its holder."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BINDING_BAND] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Banda Atadura"),
#else
        .name = _("Binding Band"),
#endif
        .itemId = ITEM_BINDING_BAND,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_BINDING_BAND,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Banda que potencia los movimientos que estrujan al rival."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of binding moves when held."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_EJECT_BUTTON] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Botón Escape"),
#else
        .name = _("Eject Button"),
#endif
        .itemId = ITEM_EJECT_BUTTON,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_EJECT_BUTTON,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Si el portador es atacado, saldrá del combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Switches out the user if they're hit by the foe."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ABSORB_BULB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tubérculo"),
#else
        .name = _("Absorb Bulb"),
#endif
        .itemId = ITEM_ABSORB_BULB,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_ABSORB_BULB,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube el At. Esp. cuando se recibe un ataque tipo Agua."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises Sp. Atk if the holder is hit by a Water-type move."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CELL_BATTERY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pila"),
#else
        .name = _("Cell Battery"),
#endif
        .itemId = ITEM_CELL_BATTERY,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_CELL_BATTERY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube el Ataque si recibe un golpe de tipo Eléctrico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises Atk if the holder is hit by an Electric-type move."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_LUMINOUS_MOSS] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Musgo Brillante"),
#else
        .name = _("Luminous Moss"),
#endif
        .itemId = ITEM_LUMINOUS_MOSS,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_LUMINOUS_MOSS,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube la Def. Esp. si recibe un ataque de tipo Agua."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises Sp. Def if the holder is hit by a Water-type move."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SNOWBALL] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Bola de Nieve"),
#else
        .name = _("Snowball"),
#endif
        .itemId = ITEM_SNOWBALL,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_SNOWBALL,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube el Ataque si recibe un ataque de tipo Hielo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises Atk if its holder is hit by an Ice-type move."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_WEAKNESS_POLICY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Seguro Debilidad"),
#else
        .name = _("Weakness Policy"),
#endif
        .itemId = ITEM_WEAKNESS_POLICY,
        .price = 5000,
        .bpPrice = 15,
        .holdEffect = HOLD_EFFECT_WEAKNESS_POLICY,
        .holdEffectParam = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube Atq. y Atq. Sp. si recibe un ataque al cual es débil."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("If hit by a Super Effective move, ups Atk and Sp. Atk."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_DOUSE_DRIVE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("HidroROM"),
#else
        .name = _("Douse Drive"),
#endif
        .itemId = ITEM_DOUSE_DRIVE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DRIVE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Convierte Tecno Shock de Genesect a tipo Agua."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Changes Genesect's Techno Blast to Water-type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_SHOCK_DRIVE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("FulgoROM"),
#else
        .name = _("Shock Drive"),
#endif
        .itemId = ITEM_SHOCK_DRIVE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DRIVE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Convierte Tecno Shock de Genesect a tipo Eléctrico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Changes Genesect's Techno Blast to Electric-type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_BURN_DRIVE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("PiroROM"),
#else
        .name = _("Burn Drive"),
#endif
        .itemId = ITEM_BURN_DRIVE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DRIVE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Convierte Tecno Shock de Genesect a tipo Fuego."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Changes Genesect's Techno Blast to Fire-type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_CHILL_DRIVE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("CrioROM"),
#else
        .name = _("Chill Drive"),
#endif
        .itemId = ITEM_CHILL_DRIVE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DRIVE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Convierte Tecno Shock de Genesect a tipo Hielo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Changes Genesect's Techno Blast to Ice-type."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
    },

    [ITEM_FIRE_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Fuego"),
#else
        .name = _("Fire Gem"),
#endif
        .itemId = ITEM_FIRE_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Fuego."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Fire Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_WATER_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Agua"),
#else
        .name = _("Water Gem"),
#endif
        .itemId = ITEM_WATER_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Agua."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Water Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_ELECTRIC_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Eléctrica"),
#else
        .name = _("Electric Gem"),
#endif
        .itemId = ITEM_ELECTRIC_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Eléctrico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Electric Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_GRASS_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Planta"),
#else
        .name = _("Grass Gem"),
#endif
        .itemId = ITEM_GRASS_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Planta."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Grass Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_GRASS,
    },

    [ITEM_ICE_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Hielo"),
#else
        .name = _("Ice Gem"),
#endif
        .itemId = ITEM_ICE_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Hielo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Ice Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_ICE,
    },

    [ITEM_FIGHTING_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Lucha"),
#else
        .name = _("Fighting Gem"),
#endif
        .itemId = ITEM_FIGHTING_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Lucha."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Fighting Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_FIGHTING,
    },

    [ITEM_POISON_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Veneno"),
#else
        .name = _("Poison Gem"),
#endif
        .itemId = ITEM_POISON_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Veneno."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Poison Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_POISON,
    },

    [ITEM_GROUND_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Tierra"),
#else
        .name = _("Ground Gem"),
#endif
        .itemId = ITEM_GROUND_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Tierra."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Ground Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_GROUND,
    },

    [ITEM_FLYING_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Voladora"),
#else
        .name = _("Flying Gem"),
#endif
        .itemId = ITEM_FLYING_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Volador."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Flying Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_FLYING,
    },

    [ITEM_PSYCHIC_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Psíquica"),
#else
        .name = _("Psychic Gem"),
#endif
        .itemId = ITEM_PSYCHIC_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Psíquico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Psychic Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_PSYCHIC,
    },

    [ITEM_BUG_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Bicho"),
#else
        .name = _("Bug Gem"),
#endif
        .itemId = ITEM_BUG_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Bicho."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Bug Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_BUG,
    },

    [ITEM_ROCK_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Roca"),
#else
        .name = _("Rock Gem"),
#endif
        .itemId = ITEM_ROCK_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Roca."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Rock Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_ROCK,
    },

    [ITEM_GHOST_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Fantasma"),
#else
        .name = _("Ghost Gem"),
#endif
        .itemId = ITEM_GHOST_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Fantasma."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Ghost Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_GHOST,
    },

    [ITEM_DRAGON_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Dragón"),
#else
        .name = _("Dragon Gem"),
#endif
        .itemId = ITEM_DRAGON_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Dragón."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Dragon Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_DRAGON,
    },

    [ITEM_DARK_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Siniestra"),
#else
        .name = _("Dark Gem"),
#endif
        .itemId = ITEM_DARK_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Siniestro."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Dark Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_DARK,
    },

    [ITEM_STEEL_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Acero"),
#else
        .name = _("Steel Gem"),
#endif
        .itemId = ITEM_STEEL_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Acero."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Steel Type moves."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TypeGem,
        .secondaryId = TYPE_STEEL,
    },

    [ITEM_NORMAL_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Normal"),
#else
        .name = _("Normal Gem"),
#endif
        .itemId = ITEM_NORMAL_GEM,
        .price = 5000,
        .bpPrice = 10,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Normal."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Normal Type moves."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL,
    },

    [ITEM_FAIRY_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Hada"),
#else
        .name = _("Fairy Gem"),
#endif
        .itemId = ITEM_FAIRY_GEM,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Joya que potencia los movimientos de tipo Hada."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Increases the power of Fairy Type moves."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
    },

    [ITEM_ASSAULT_VEST] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Chaleco Asalto"),
#else
        .name = _("Assault Vest"),
#endif
        .itemId = ITEM_ASSAULT_VEST,
        .price = 10000,
        .bpPrice = 20,
        .holdEffect = HOLD_EFFECT_ASSAULT_VEST,
        .holdEffectParam = 50,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube la Def. Esp., pero impide usar ataques de estado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Raises Sp. Def but prevents the use of status moves."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PIXIE_PLATE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tabla Duende"),
#else
        .name = _("Pixie Plate"),
#endif
        .itemId = ITEM_PIXIE_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Tabla de piedra que potencia ataques de tipo Hada."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A stone tablet that boosts the power of Fairy-type moves."),
#endif
        .pocket = POCKET_TYPE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
    },

    [ITEM_SAFETY_GOGGLES] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gafa Protectora"),
#else
        .name = _("Safety Goggles"),
#endif
        .itemId = ITEM_SAFETY_GOGGLES,
        .price = 4000,
        .bpPrice = 15,
        .holdEffect = HOLD_EFFECT_SAFETY_GOOGLES,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Protege de efectos adversos del clima y de polvo lanzado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Protect from weather damage and powder moves."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_GENGARITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gengarita"),
#else
        .name = _("Gengarite"),
#endif
        .itemId = ITEM_GENGARITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Gengar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Gengar to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_GENGAR_MEGA_STONE,
        .species = SPECIES_GENGAR,
    },

    [ITEM_GARDEVOIRITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gardevoirita"),
#else
        .name = _("Gardevoirite"),
#endif
        .itemId = ITEM_GARDEVOIRITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Gardevoir."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Gardevoir to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_GARDEVOIR_MEGA_STONE,
        .species = SPECIES_GARDEVOIR,
    },

    [ITEM_AMPHAROSITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Ampharosita"),
#else
        .name = _("Ampharosite"),
#endif
        .itemId = ITEM_AMPHAROSITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Ampharos."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Ampharos to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_AMPHAROS_MEGA_STONE,
        .species = SPECIES_AMPHAROS,
    },

    [ITEM_VENUSAURITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Venusaurita"),
#else
        .name = _("Venusaurite"),
#endif
        .itemId = ITEM_VENUSAURITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Venusaur."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Venusaur to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_VENUSAUR,
    },

    [ITEM_CHARIZARDITE_X] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Charizardita X"),
#else
        .name = _("Charizardite X"),
#endif
        .itemId = ITEM_CHARIZARDITE_X,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Charizard."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Charizard to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_CHARIZARD,
    },

    [ITEM_BLASTOISINITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Blastoisita"),
#else
        .name = _("Blastoisinite"),
#endif
        .itemId = ITEM_BLASTOISINITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Blastoise."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Blastoise to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_BLASTOISE,
    },

    [ITEM_MEWTWONITE_X] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Mewtwoita X"),
#else
        .name = _("Mewtwonite X"),
#endif
        .itemId = ITEM_MEWTWONITE_X,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Mewtwo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Mewtwo to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_MEWTWO_X_MEGA_STONE,
        .species = SPECIES_MEWTWO,
    },

    [ITEM_MEWTWONITE_Y] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Mewtwoita Y"),
#else
        .name = _("Mewtwonite Y"),
#endif
        .itemId = ITEM_MEWTWONITE_Y,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Mewtwo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Mewtwo to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_MEWTWO_Y_MEGA_STONE,
        .species = SPECIES_MEWTWO,
    },

    [ITEM_BLAZIKENITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Blazikenita"),
#else
        .name = _("Blazikenite"),
#endif
        .itemId = ITEM_BLAZIKENITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Blaziken."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Blaziken to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_BLAZIKEN_MEGA_STONE,
        .species = SPECIES_BLAZIKEN,
    },

    [ITEM_MEDICHAMITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Medichamita"),
#else
        .name = _("Medichamite"),
#endif
        .itemId = ITEM_MEDICHAMITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Medicham."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Medicham to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_MEDICHAM_MEGA_STONE,
        .species = SPECIES_MEDICHAM,
    },

    [ITEM_HOUNDOOMINITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Houndoomita"),
#else
        .name = _("Houndoominite"),
#endif
        .itemId = ITEM_HOUNDOOMINITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Houndoom."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Houndoom to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_HOUNDOOM_MEGA_STONE,
        .species = SPECIES_HOUNDOOM,
    },

    [ITEM_AGGRONITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Aggronita"),
#else
        .name = _("Aggronite"),
#endif
        .itemId = ITEM_AGGRONITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Aggron."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Aggron to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_AGGRON_MEGA_STONE,
        .species = SPECIES_AGGRON,
    },

    [ITEM_BANETTITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Banettita"),
#else
        .name = _("Banettite"),
#endif
        .itemId = ITEM_BANETTITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Banette."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Banette to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_BANETTE_MEGA_STONE,
        .species = SPECIES_BANETTE,
    },

    [ITEM_TYRANITARITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Tyranitarita"),
#else
        .name = _("Tyranitarite"),
#endif
        .itemId = ITEM_TYRANITARITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Tyranitar."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Tyranitar to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_TYRANITAR_MEGA_STONE,
        .species = SPECIES_TYRANITAR,
    },

    [ITEM_SCIZORITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Scizorita"),
#else
        .name = _("Scizorite"),
#endif
        .itemId = ITEM_SCIZORITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Scizor."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Scizor to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SCIZOR_MEGA_STONE,
        .species = SPECIES_SCIZOR,
    },

    [ITEM_PINSIRITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pinsirita"),
#else
        .name = _("Pinsirite"),
#endif
        .itemId = ITEM_PINSIRITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Pinsir."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Pinsir to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_PINSIR_MEGA_STONE,
        .species = SPECIES_PINSIR,
    },

    [ITEM_AERODACTYLITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Aerodactylita"),
#else
        .name = _("Aerodactylite"),
#endif
        .itemId = ITEM_AERODACTYLITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Aerodactyl."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Aerodactyl to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_AERODACTYL_MEGA_STONE,
        .species = SPECIES_AERODACTYL,
    },

    [ITEM_LUCARIONITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Lucarita"),
#else
        .name = _("Lucarionite"),
#endif
        .itemId = ITEM_LUCARIONITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Lucario."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Lucario to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_LUCARIO_MEGA_STONE,
        .species = SPECIES_LUCARIO,
    },

    [ITEM_ABOMASITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Abomasnowita"),
#else
        .name = _("Abomasite"),
#endif
        .itemId = ITEM_ABOMASITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Abomasnow."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Abomasnow to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_ABOMASNOW_MEGA_STONE,
        .species = SPECIES_ABOMASNOW,
    },

    [ITEM_KANGASKHANITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Kangaskhanita"),
#else
        .name = _("Kangaskhanite"),
#endif
        .itemId = ITEM_KANGASKHANITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Kangaskhan."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Kangaskhan to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_KANGASKHAN_MEGA_STONE,
        .species = SPECIES_KANGASKHAN,
    },

    [ITEM_GYARADOSITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gyaradosita"),
#else
        .name = _("Gyaradosite"),
#endif
        .itemId = ITEM_GYARADOSITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Gyarados."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Gyarados to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_GYARADOS_MEGA_STONE,
        .species = SPECIES_GYARADOS,
    },

    [ITEM_ABSOLITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Absolita"),
#else
        .name = _("Absolite"),
#endif
        .itemId = ITEM_ABSOLITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Absol."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Absol to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_ABSOL_MEGA_STONE,
        .species = SPECIES_ABSOL,
    },

    [ITEM_CHARIZARDITE_Y] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Charizardita Y"),
#else
        .name = _("Charizardite Y"),
#endif
        .itemId = ITEM_CHARIZARDITE_Y,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Charizard."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Charizard to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_CHARIZARD,
    },

    [ITEM_ALAKAZITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Alakazamita"),
#else
        .name = _("Alakazite"),
#endif
        .itemId = ITEM_ALAKAZITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Alakazam."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Alakazam to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_ALAKAZAM_MEGA_STONE,
        .species = SPECIES_ALAKAZAM,
    },

    [ITEM_HERACRONITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Heracrossita"),
#else
        .name = _("Heracronite"),
#endif
        .itemId = ITEM_HERACRONITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Heracross."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Heracross to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_HERACROSS_MEGA_STONE,
        .species = SPECIES_HERACROSS,
    },

    [ITEM_MAWILITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Mawilita"),
#else
        .name = _("Mawilite"),
#endif
        .itemId = ITEM_MAWILITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Mawile."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Mawile to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_MAWILE_MEGA_STONE,
        .species = SPECIES_MAWILE,
    },

    [ITEM_MANECTITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Manectricita"),
#else
        .name = _("Manectite"),
#endif
        .itemId = ITEM_MANECTITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Manectric."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Manectric to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_MANECTRIC_MEGA_STONE,
        .species = SPECIES_MANECTRIC,
    },

    [ITEM_GARCHOMPITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Garchompita"),
#else
        .name = _("Garchompite"),
#endif
        .itemId = ITEM_GARCHOMPITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Garchomp."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Garchomp to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_GARCHOMP,
    },

    [ITEM_LATIASITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Latiasita"),
#else
        .name = _("Latiasite"),
#endif
        .itemId = ITEM_LATIASITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Latias."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Latias to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_DEFEATED_LATIAS,
        .species = SPECIES_LATIAS,
    },

    [ITEM_LATIOSITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Latiosita"),
#else
        .name = _("Latiosite"),
#endif
        .itemId = ITEM_LATIOSITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Latios."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Latios to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_DEFEATED_LATIOS,
        .species = SPECIES_LATIOS,
    },

    [ITEM_SWAMPERTITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Swampertita"),
#else
        .name = _("Swampertite"),
#endif
        .itemId = ITEM_SWAMPERTITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Swampert."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Swampert to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SWAMPERT_MEGA_STONE,
        .species = SPECIES_SWAMPERT,
    },

    [ITEM_SCEPTILITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Sceptileita"),
#else
        .name = _("Sceptilite"),
#endif
        .itemId = ITEM_SCEPTILITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Sceptile."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Sceptile to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SCEPTILE_MEGA_STONE,
        .species = SPECIES_SCEPTILE,
    },

    [ITEM_SABLENITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Sableynita"),
#else
        .name = _("Sablenite"),
#endif
        .itemId = ITEM_SABLENITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Sableye."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Sableye to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SABLEYE_MEGA_STONE,
        .species = SPECIES_SABLEYE,
    },

    [ITEM_ALTARIANITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Altarianita"),
#else
        .name = _("Altarianite"),
#endif
        .itemId = ITEM_ALTARIANITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Altaria."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Altaria to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_ALTARIA_MEGA_STONE,
        .species = SPECIES_ALTARIA,
    },

    [ITEM_GALLADITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Galladita"),
#else
        .name = _("Galladite"),
#endif
        .itemId = ITEM_GALLADITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Gallade."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Gallade to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_GALLADE_MEGA_STONE,
        .species = SPECIES_GALLADE,
    },

    [ITEM_AUDINITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Audinita"),
#else
        .name = _("Audinite"),
#endif
        .itemId = ITEM_AUDINITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Audino."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Audino to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_AUDINO_MEGA_STONE,
        .species = SPECIES_AUDINO,
    },

    [ITEM_METAGROSSITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Metagrossita"),
#else
        .name = _("Metagrossite"),
#endif
        .itemId = ITEM_METAGROSSITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Metagross."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Metagross to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_METAGROSS_MEGA_STONE,
        .species = SPECIES_METAGROSS,
    },

    [ITEM_SHARPEDONITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Sharpedonita"),
#else
        .name = _("Sharpedonite"),
#endif
        .itemId = ITEM_SHARPEDONITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Sharpedo."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Sharpedo to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SHARPEDO_MEGA_STONE,
        .species = SPECIES_SHARPEDO,
    },

    [ITEM_SLOWBRONITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Slowbronita"),
#else
        .name = _("Slowbronite"),
#endif
        .itemId = ITEM_SLOWBRONITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Slowbro."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Slowbro to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SLOWBRO_MEGA_STONE,
        .species = SPECIES_SLOWBRO,
    },

    [ITEM_STEELIXITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Steelixita"),
#else
        .name = _("Steelixite"),
#endif
        .itemId = ITEM_STEELIXITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Steelix."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Steelix to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_STEELIX_MEGA_STONE,
        .species = SPECIES_STEELIX,
    },

    [ITEM_PIDGEOTITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pidgeotita"),
#else
        .name = _("Pidgeotite"),
#endif
        .itemId = ITEM_PIDGEOTITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Pidgeot."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Pidgeot to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_RECEIVED_PIDGEOTITE,
        .species = SPECIES_PIDGEOT,
    },

    [ITEM_GLALITITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Glalita"),
#else
        .name = _("Glalitite"),
#endif
        .itemId = ITEM_GLALITITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Glalie."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Glalie to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_GLALIE_MEGA_STONE,
        .species = SPECIES_GLALIE,
    },

    [ITEM_DIANCITE] =
    {
        .name = _("Diancite"),
        .itemId = ITEM_DIANCITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Diancie."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Diancie to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_DIANCIE_MEGA_STONE,
        .species = SPECIES_DIANCIE,
    },

    [ITEM_CAMERUPTITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cameruptita"),
#else
        .name = _("Cameruptite"),
#endif
        .itemId = ITEM_CAMERUPTITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Camerupt."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Camerupt to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_CAMERUPT_MEGA_STONE,
        .species = SPECIES_CAMERUPT,
    },

    [ITEM_LOPUNNITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Lopunnita"),
#else
        .name = _("Lopunnite"),
#endif
        .itemId = ITEM_LOPUNNITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Lopunny."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Lopunny to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_LOPUNNY_MEGA_STONE,
        .species = SPECIES_LOPUNNY,
    },

    [ITEM_SALAMENCITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Salamencita"),
#else
        .name = _("Salamencite"),
#endif
        .itemId = ITEM_SALAMENCITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Salamence."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Salamence to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SALAMENCE_MEGA_STONE,
        .species = SPECIES_SALAMENCE,
    },

    [ITEM_BEEDRILLITE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Beedrillita"),
#else
        .name = _("Beedrillite"),
#endif
        .itemId = ITEM_BEEDRILLITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Piedra que permite megaevolucionar a Beedrill."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Beedrill to Mega Evolve in battle."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_BEEDRILL_MEGA_STONE,
        .species = SPECIES_BEEDRILL,
    },

    [ITEM_MEGA_BRACELET] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Megapulsera"),
#else
        .name = _("Mega Bracelet"),
#endif
        .itemId = ITEM_MEGA_BRACELET,
        .price = 200,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Permite a Pokémon megaevolucionar en combate."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Enables {PKMN} holding their Mega Stone to Mega Evolve."),
#endif
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PROTECTIVE_PADS] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Paracontacto"),
#else
        .name = _("Protective Pads"), // Shortened name from Protective Pads
#endif
        .itemId = ITEM_PROTECTIVE_PADS,
        .price = 4000,
        .bpPrice = 20,
        .holdEffect = HOLD_EFFECT_PROTECTIVE_PADS,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Protege al {PKMN} de efectos activados por contacto."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Guard the holder from contact move effects."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_LOADED_DICE] =
    {
        .name = _("Loaded Dice"),
        .itemId = ITEM_LOADED_DICE,
        .price = 5000,
        .bpPrice = 25,
        .holdEffect = HOLD_EFFECT_LOADED_DICE,
        .description = FORMAT_ITEM_DESCRIPTION("Ensure that the holder multistrike moves hit more times."),
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_TERRAIN_EXTENDER] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Cubresuelos"),
#else
        .name = _("T.Extender"),
#endif
        .itemId = ITEM_TERRAIN_EXTENDER,
        .price = 4000,
        .bpPrice = 20,
        .holdEffect = HOLD_EFFECT_TERRAIN_EXTENDER,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Prolonga el efecto de campos creados por el Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Extends the length of the active battle terrain."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ELECTRIC_SEED] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Semilla Electro"),
#else
        .name = _("Electric Seed"),
#endif
        .itemId = ITEM_ELECTRIC_SEED,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube la Defensa del portador si hay un campo eléctrico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Boosts Defense on Electric Terrain, but only one time."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_GRASSY_SEED] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Semilla Hierba"),
#else
        .name = _("Grassy Seed"),
#endif
        .itemId = ITEM_GRASSY_SEED,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube la Defensa del portador si hay un campo de hierba."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Boosts Defense on Grassy Terrain, but only one time."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_MISTY_SEED] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Semilla Bruma"),
#else
        .name = _("Misty Seed"),
#endif
        .itemId = ITEM_MISTY_SEED,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube la Def. Esp. del portador si hay un campo de niebla."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Boosts Sp. Def. on Misty Terrain, but only one time."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PSYCHIC_SEED] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Semilla Psique"),
#else
        .name = _("Psychic Seed"),
#endif
        .itemId = ITEM_PSYCHIC_SEED,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube la Def. Esp. del portador si hay un campo psíquico."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Boosts Sp. Def. on Psychic Terrain, but only one time."),
#endif
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ADRENALINE_ORB] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Nerviosfera"),
#else
        .name = _("Adrenaline Orb"),
#endif
        .itemId = ITEM_ADRENALINE_ORB,
        .price = 3000,
        .bpPrice = 12,
        .holdEffect = HOLD_EFFECT_ADRENALINE_ORB,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Sube la Velocidad del portador al ser Intimidado."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Boosts Speed if the user is intimidated, but only one time."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_HONEY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Miel"),
#else
        .name = _("Honey"),
#endif
        .itemId = ITEM_HONEY,
        .price = 100,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Su delicioso aroma atrae a Pokémon salvajes."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Sweet honey that attracts wild Pokémon when used."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_HEALTH_WING] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pluma Vigor"),
#else
        .name = _("Health Feather"),
#endif
        .itemId = ITEM_HEALTH_WING,
        .price = 300,
        .holdEffect = 0,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Pluma que aumenta un poco los PS base de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("An item that raises the base HP of a Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_IVWings,
        .secondaryId = STAT_HP,
    },

    [ITEM_MUSCLE_WING] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pluma Músculo"),
#else
        .name = _("Muscle Feather"),
#endif
        .itemId = ITEM_MUSCLE_WING,
        .price = 300,
        .holdEffect = 0,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Pluma que aumenta un poco el Ataque base de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("An item that raises the base Attack of a Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_IVWings,
        .secondaryId = STAT_ATK,
    },

    [ITEM_RESIST_WING] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pluma Músculo"),
#else
        .name = _("Resist Feather"),
#endif
        .itemId = ITEM_RESIST_WING,
        .price = 300,
        .holdEffect = 0,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Pluma que aumenta un poco la Defensa base de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("An item that raises the base Defense of a Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_IVWings,
        .secondaryId = STAT_DEF,
    },

    [ITEM_GENIUS_WING] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pluma Intelecto"),
#else
        .name = _("Genius Feather"),
#endif
        .itemId = ITEM_GENIUS_WING,
        .price = 300,
        .holdEffect = 0,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Pluma que aumenta un poco el At. Esp. base de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("An item that raises the base Sp. Atk. of a Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_IVWings,
        .secondaryId = STAT_SPATK,
    },

    [ITEM_CLEVER_WING] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pluma Mente"),
#else
        .name = _("Clever Feather"),
#endif
        .itemId = ITEM_CLEVER_WING,
        .price = 300,
        .holdEffect = 0,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Pluma que aumenta un poco la Def. Esp. base de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("An item that raises the base Sp. Def. of a Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_IVWings,
        .secondaryId = STAT_SPDEF,
    },

    [ITEM_SWIFT_WING] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pluma Ímpetu"),
#else
        .name = _("Swift Feather"),
#endif
        .itemId = ITEM_SWIFT_WING,
        .price = 300,
        .holdEffect = 0,
        .holdEffectParam = 4,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Pluma que aumenta un poco la Velocid. base de un Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("An item that raises the base Speed of a Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_IVWings,
        .secondaryId = STAT_SPEED,
    },

    [ITEM_PRETTY_WING] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pluma Bella"),
#else
        .name = _("Pretty Feather"),
#endif
        .itemId = ITEM_PRETTY_WING,
        .price = 1000,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Pluma corriente. Muy bonita, pero no sirve para nada."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A beautiful yet plain feather that does nothing."),
#endif
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SHINY_CHARM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Amuleto Iris"),
#else
        .name = _("Shiny Charm"),
#endif
        .itemId = ITEM_SHINY_CHARM,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Amuleto que sube la posibilidad de {PKMN} variocolores."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A charm that will raise the chance of Shiny Pokémon."),
#endif
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },
    
    [ITEM_OVAL_CHARM] =
    {
        .name = _("Oval Charm"),
        .itemId = ITEM_OVAL_CHARM,
        .price = 0,
        .importance = 1,
        .description = FORMAT_ITEM_DESCRIPTION("Raises the chance of finding eggs at the daycare."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },
    
    //Mod items
    [ITEM_LINK_CABLE] =
    {
        .name = _("Link Cable"),
        .itemId = ITEM_LINK_CABLE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Parte de máquina que es amada por ciertos Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Rare machine part that is loved by certain Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },
    
    [ITEM_STRANGE_SOUVENIR] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Estatuilla Rara"),
#else
        .name = _("S.Souvenir"),
#endif
        .itemId = ITEM_STRANGE_SOUVENIR,
        .price = 3500,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Ornamento que trae la influencia de Alola a los Pokémon."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("An ornament that brings the joy of Alola to Pokémon."),
#endif
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_EON_FLUTE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Flauta Eón"),
#else
        .name = _("Eon Flute"),
#endif
        .itemId = ITEM_EON_FLUTE,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Flauta capaz de invocar a Latias o Latios."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A flute that can summon Latias or Latios."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_EonFlute,
        .secondaryId = 0,
    },

    [ITEM_LURE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Colonia"),
#else
        .name = _("Lure"),
#endif
        .itemId = ITEM_LURE,
        .price = 350,
        .holdEffectParam = 100,
        .description = FORMAT_ITEM_DESCRIPTION("Makes Pokémon more likely to appear for 100 steps."),
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
    },

    [ITEM_SUPER_LURE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Supercolonia"),
#else
        .name = _("Super Lure"),
#endif
        .itemId = ITEM_SUPER_LURE,
        .price = 500,
        .holdEffectParam = 200,
        .description = FORMAT_ITEM_DESCRIPTION("Makes Pokémon more likely to appear for 200 steps."),
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
    },

    [ITEM_MAX_LURE] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Colonia Máxima"),
#else
        .name = _("Max Lure"),
#endif
        .itemId = ITEM_MAX_LURE,
        .price = 700,
        .holdEffectParam = 250,
        .description = FORMAT_ITEM_DESCRIPTION("Makes Pokémon more likely to appear for 250 steps."),
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
    },

    [ITEM_SAFARI_PASS] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Pase Safari"),
#else
        .name = _("Safari Pass"),
#endif
        .itemId = ITEM_SAFARI_PASS,
        .price = 0,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Permite ingresar de form libre a la Zona Safari."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("Allows unrestricted entrance to Hoenn's Safari Zone."),
#endif
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },
    
//mints
    [ITEM_ADAMANT_MINT] = 
    {
        .name = _("Adamant Mint"),
        .itemId = ITEM_ADAMANT_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Adamant"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_ADAMANT,
    },
    
    [ITEM_BOLD_MINT] = 
    {
        .name = _("Bold Mint"),
        .itemId = ITEM_BOLD_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Bold"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_BOLD,
    },
    
    [ITEM_BRAVE_MINT] = 
    {
        .name = _("Brave Mint"),
        .itemId = ITEM_BRAVE_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Brave"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_BRAVE,
    },
    
    [ITEM_CALM_MINT] = 
    {
        .name = _("Calm Mint"),
        .itemId = ITEM_CALM_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Calm"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_CALM,
    },
    
    [ITEM_CAREFUL_MINT] = 
    {
        .name = _("Careful Mint"),
        .itemId = ITEM_CAREFUL_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Careful"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_CAREFUL,
    },
    
    [ITEM_GENTLE_MINT] = 
    {
        .name = _("Gentle Mint"),
        .itemId = ITEM_GENTLE_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Gentle"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_GENTLE,
    },
    
    [ITEM_HASTY_MINT] = 
    {
        .name = _("Hasty Mint"),
        .itemId = ITEM_HASTY_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Hasty"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_HASTY,
    },
    
    [ITEM_IMPISH_MINT] = 
    {
        .name = _("Impish Mint"),
        .itemId = ITEM_IMPISH_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Impish"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_IMPISH,
    },
    
    [ITEM_JOLLY_MINT] = 
    {
        .name = _("Jolly Mint"),
        .itemId = ITEM_JOLLY_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Jolly"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_JOLLY,
    },
    
    [ITEM_LAX_MINT] = 
    {
        .name = _("Lax Mint"),
        .itemId = ITEM_LAX_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Lax"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_LAX,
    },
    
    [ITEM_LONELY_MINT] = 
    {
        .name = _("Lonely Mint"),
        .itemId = ITEM_LONELY_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Lonely"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_LONELY,
    },
    
    [ITEM_MILD_MINT] = 
    {
        .name = _("Mild Mint"),
        .itemId = ITEM_MILD_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Mild"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_MILD,
    },
    
    [ITEM_MODEST_MINT] = 
    {
        .name = _("Modest Mint"),
        .itemId = ITEM_MODEST_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Modest"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_MODEST,
    },
    
    [ITEM_NAIVE_MINT] = 
    {
        .name = _("Naive Mint"),
        .itemId = ITEM_NAIVE_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Naive"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_NAIVE,
    },
    
    [ITEM_NAUGHTY_MINT] = 
    {
        .name = _("Naughty Mint"),
        .itemId = ITEM_NAUGHTY_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Naughty"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_NAUGHTY,
    },
    
    [ITEM_QUIET_MINT] = 
    {
        .name = _("Quiet Mint"),
        .itemId = ITEM_QUIET_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Quiet"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_QUIET,
    },
    
    [ITEM_RASH_MINT] = 
    {
        .name = _("Rash Mint"),
        .itemId = ITEM_RASH_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Rash"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_RASH,
    },
    
    [ITEM_RELAXED_MINT] = 
    {
        .name = _("Relaxed Mint"),
        .itemId = ITEM_RELAXED_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Relaxed"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_RELAXED,
    },
    
    [ITEM_SASSY_MINT] = 
    {
        .name = _("Sassy Mint"),
        .itemId = ITEM_SASSY_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Sassy"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_SASSY,
    },
    
    [ITEM_SERIOUS_MINT] = 
    {
        .name = _("Serious Mint"),
        .itemId = ITEM_SERIOUS_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Serious"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_SERIOUS,
    },
    
    [ITEM_TIMID_MINT] = 
    {
        .name = _("Timid Mint"),
        .itemId = ITEM_TIMID_MINT,
        .price = MINT_PRICE,
        .bpPrice = MINT_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the nature of a Pokémon to Timid"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_TIMID,
    },
    
    //Seals
    [ITEM_MASTER_BALL_SEAL] = 
    {
        .name = _("Master Ball Seal"),
        .itemId = ITEM_MASTER_BALL_SEAL,
        .price = 50000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_MASTER_BALL,
    },
    
    [ITEM_ULTRA_BALL_SEAL] = 
    {
        .name = _("Ultra Ball S."),
        .itemId = ITEM_ULTRA_BALL_SEAL,
        .price = 7500,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_ULTRA_BALL,
    },
    
    [ITEM_GREAT_BALL_SEAL] = 
    {
        .name = _("Great Ball Seal"),
        .itemId = ITEM_GREAT_BALL_SEAL,
        .price = 5000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_GREAT_BALL,
    },
    
    [ITEM_POKE_BALL_SEAL] = 
    {
        .name = _("Poke Ball Seal"),
        .itemId = ITEM_POKE_BALL_SEAL,
        .price = 1000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_POKE_BALL,
    },
    
    [ITEM_SAFARI_BALL_SEAL] = 
    {
        .name = _("Safari Ball S."),
        .itemId = ITEM_SAFARI_BALL_SEAL,
        .price = 12500,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_SAFARI_BALL,
    },
    
    [ITEM_NET_BALL_SEAL] = 
    {
        .name = _("Net Ball Seal"),
        .itemId = ITEM_NET_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_NET_BALL,
    },
    
    [ITEM_DIVE_BALL_SEAL] = 
    {
        .name = _("Dive Ball Seal"),
        .itemId = ITEM_DIVE_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_DIVE_BALL,
    },
    
    [ITEM_NEST_BALL_SEAL] = 
    {
        .name = _("Nest Ball Seal"),
        .itemId = ITEM_NEST_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_NEST_BALL,
    },
    
    [ITEM_REPEAT_BALL_SEAL] = 
    {
        .name = _("Repeat Ball S."),
        .itemId = ITEM_REPEAT_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_REPEAT_BALL,
    },
    
    [ITEM_TIMER_BALL_SEAL] = 
    {
        .name = _("Timer Ball S."),
        .itemId = ITEM_TIMER_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_TIMER_BALL,
    },
    
    [ITEM_LUXURY_BALL_SEAL] = 
    {
        .name = _("Luxury Ball S."),
        .itemId = ITEM_LUXURY_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_LUXURY_BALL,
    },
    
    [ITEM_PREMIER_BALL_SEAL] = 
    {
        .name = _("Premier Ball S."),
        .itemId = ITEM_PREMIER_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_PREMIER_BALL,
    },
    
    [ITEM_LEVEL_BALL_SEAL] = 
    {
        .name = _("Level Ball S."),
        .itemId = ITEM_LEVEL_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_LEVEL_BALL,
    },
    
    [ITEM_LURE_BALL_SEAL] = 
    {
        .name = _("Lure Ball Seal"),
        .itemId = ITEM_LURE_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_LURE_BALL,
    },
    
    [ITEM_MOON_BALL_SEAL] = 
    {
        .name = _("Moon Ball Seal"),
        .itemId = ITEM_MOON_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_MOON_BALL,
    },
    
    [ITEM_FRIEND_BALL_SEAL] = 
    {
        .name = _("Friend Ball S."),
        .itemId = ITEM_FRIEND_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_FRIEND_BALL,
    },
    
    [ITEM_LOVE_BALL_SEAL] = 
    {
        .name = _("Love Ball Seal"),
        .itemId = ITEM_LOVE_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_LOVE_BALL,
    },
    
    [ITEM_HEAVY_BALL_SEAL] = 
    {
        .name = _("Heavy Ball S."),
        .itemId = ITEM_HEAVY_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_HEAVY_BALL,
    },
    
    [ITEM_FAST_BALL_SEAL] = 
    {
        .name = _("Fast Ball Seal"),
        .itemId = ITEM_FAST_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_FAST_BALL,
    },
    
    [ITEM_SPORT_BALL_SEAL] = 
    {
        .name = _("Sport Ball S."),
        .itemId = ITEM_SPORT_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_SPORT_BALL,
    },
    
    [ITEM_DUSK_BALL_SEAL] = 
    {
        .name = _("Dusk Ball S."),
        .itemId = ITEM_DUSK_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_DUSK_BALL,
    },
    
    [ITEM_QUICK_BALL_SEAL] = 
    {
        .name = _("Quick Ball S."),
        .itemId = ITEM_QUICK_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_QUICK_BALL,
    },
    
    [ITEM_HEAL_BALL_SEAL] = 
    {
        .name = _("Heal Ball S."),
        .itemId = ITEM_HEAL_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_HEAL_BALL,
    },
    
    [ITEM_CHERISH_BALL_SEAL] = 
    {
        .name = _("Cherish Ball S."),
        .itemId = ITEM_CHERISH_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_CHERISH_BALL,
    },
    
    [ITEM_PARK_BALL_SEAL] = 
    {
        .name = _("Park Ball S."),
        .itemId = ITEM_PARK_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_PARK_BALL,
    },
    
    [ITEM_DREAM_BALL_SEAL] = 
    {
        .name = _("Dream Ball S."),
        .itemId = ITEM_DREAM_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_DREAM_BALL,
    },
    
    [ITEM_BEAST_BALL_SEAL] = 
    {
        .name = _("Beast Ball S."),
        .itemId = ITEM_BEAST_BALL_SEAL,
        .price = 10000,
        .description = FORMAT_ITEM_DESCRIPTION("Changes the Ball of a Pokémon to a different one"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Seal,
        .secondaryId = ITEM_BEAST_BALL,
    },
    
    [ITEM_EXIOLITE] = 
    {
        .name = _("Exiolite"),
        .itemId = ITEM_EXIOLITE,
        .price = 4500,
        .bpPrice = 10,
        .description = FORMAT_ITEM_DESCRIPTION("Raises the base stats of a Pokémon that is able to Evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Exiolite,
        .secondaryId = 0,
    },
    
    [ITEM_IRON_PILL] = 
    {
        .name = _("Iron Pill"),
        .itemId = ITEM_IRON_PILL,
        .price = 4500,
        .bpPrice = 5,
        .description = FORMAT_ITEM_DESCRIPTION("Slows down the Pokémon that consumes it"),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_IronPill,
        .secondaryId = 0,
    },

    [ITEM_EXP_CHARM] =
    {
        .name = _("Exp Charm"),
        .itemId = ITEM_EXP_CHARM,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A charm that increases the Exp. Points that Pokémon can get."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CATCHING_CHARM] =
    {
        .name = _("Catching Charm"),
        .itemId = ITEM_CATCHING_CHARM,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("Holding it is said to increase the chance of getting a crit catch."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    //New Evo Items
    [ITEM_UNREMARKABLE_TEACUP] =
    {
        .name = _("U. Teacup"),
        .itemId = ITEM_UNREMARKABLE_TEACUP,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
     },

     [ITEM_MASTERPIECE_TEACUP] =
     {
        .name = _("M. Teacup"),
        .itemId = ITEM_MASTERPIECE_TEACUP,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
     },

    [ITEM_PEAT_BLOCK] =
    {
        .name = _("Peat Block"),
        .itemId = ITEM_PEAT_BLOCK,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_AUSPICIOUS_ARMOR] =
    {
        .name = _("AuspiciousArmor"),
        .itemId = ITEM_AUSPICIOUS_ARMOR,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_MALICIOUS_ARMOR] =
    {
        .name = _("Malicious Armor"),
        .itemId = ITEM_MALICIOUS_ARMOR,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_SWEET_APPLE] =
    {
        .name = _("Sweet Apple"),
        .itemId = ITEM_SWEET_APPLE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_TART_APPLE] =
    {
        .name = _("Tart Apple"),
        .itemId = ITEM_TART_APPLE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_SYRUP_APPLE] =
    {
        .name = _("Syrup Apple"),
        .itemId = ITEM_SYRUP_APPLE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_SCROLL_OF_DARKNESS] =
    {
        .name = _("ScrollofDarkness"),
        .itemId = ITEM_SCROLL_OF_DARKNESS,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_SCROLL_OF_WATERS] =
    {
        .name = _("Scroll of Waters"),
        .itemId = ITEM_SCROLL_OF_WATERS,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_METAL_ALLOY] =
    {
        .name = _("Metal Alloy"),
        .itemId = ITEM_METAL_ALLOY,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_BLACK_AUGURITE] =
    {
        .name = _("Black Augurite"),
        .itemId = ITEM_BLACK_AUGURITE,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_CHIPPED_POT] =
    {
        .name = _("Chipped Pot"),
        .itemId = ITEM_CHIPPED_POT,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_CRACKED_POT] =
    {
        .name = _("Cracked Pot"),
        .itemId = ITEM_CRACKED_POT,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_GALARICA_CUFF] =
    {
        .name = _("Galarica Cuff"),
        .itemId = ITEM_GALARICA_CUFF,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_GALARICA_TWIG] =
    {
        .name = _("Galarica Twig"),
        .itemId = ITEM_GALARICA_TWIG,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_RAINBOW_SWEET] =
    {
        .name = _("Rainbow Sweet"),
        .itemId = ITEM_RAINBOW_SWEET,
        .price = EVO_ITEMS_PRICE,
        .bpPrice = EVO_ITEMS_PRICE_BP,
        .description = FORMAT_ITEM_DESCRIPTION("Makes certain species of Pokémon evolve."),
        .pocket = POCKET_POWER_UP,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .secondaryId = 0,
    },

    [ITEM_BP_TICKET] =
    {
        .name = _("BP Ticket"),
        .itemId = ITEM_BP_TICKET,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A ticket that can be exchanged for 5 BP."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SEVII_TICKET_1] =
    {
        .name = _("Sevii Ticket 1"),
        .itemId = ITEM_SEVII_TICKET_1,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A ticket that lets you visit one of the Sevii Islands."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SEVII_TICKET_2] =
    {
        .name = _("Sevii Ticket 2"),
        .itemId = ITEM_SEVII_TICKET_2,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A ticket that lets you visit one of the Sevii Islands."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SEVII_TICKET_3] =
    {
        .name = _("Sevii Ticket 3"),
        .itemId = ITEM_SEVII_TICKET_3,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A ticket that lets you visit one of the Sevii Islands."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SEVII_TICKET_4] =
    {
        .name = _("Sevii Ticket 4"),
        .itemId = ITEM_SEVII_TICKET_4,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A ticket that lets you visit one of the Sevii Islands."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SEVII_TICKET_5] =
    {
        .name = _("Sevii Ticket 5"),
        .itemId = ITEM_SEVII_TICKET_5,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A ticket that lets you visit one of the Sevii Islands."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SEVII_TICKET_6] =
    {
        .name = _("Sevii Ticket 6"),
        .itemId = ITEM_SEVII_TICKET_6,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A ticket that lets you visit one of the Sevii Islands."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SEVII_TICKET_7] =
    {
        .name = _("Sevii Ticket 7"),
        .itemId = ITEM_SEVII_TICKET_7,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A ticket that lets you visit one of the Sevii Islands."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SEVII_TICKET_8] =
    {
        .name = _("Sevii Ticket 8"),
        .itemId = ITEM_SEVII_TICKET_8,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A ticket that lets you visit one of the Sevii Islands."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CUT_TOOL] =
    {
        .name = _("Axe"),
        .itemId = ITEM_CUT_TOOL,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A tool used for cutting down small trees."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_FLASH_TOOL] =
    {
        .name = _("Lantern"),
        .itemId = ITEM_FLASH_TOOL,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A tool used to light up dark caves."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ROCK_SMASH_TOOL] =
    {
        .name = _("Pick-axe"),
        .itemId = ITEM_ROCK_SMASH_TOOL,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A tool used for breaking small rocks."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_STRENGTH_TOOL] =
    {
        .name = _("Power Glove"),
        .itemId = ITEM_STRENGTH_TOOL,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A tool used for moving round rocks."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SURF_TOOL] =
    {
        .name = _("Surfboard"),
        .itemId = ITEM_SURF_TOOL,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A tool used to surf across water."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_FLY_TOOL] =
    {
        .name = _("Fly Tool"),
        .itemId = ITEM_FLY_TOOL,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A tool that helps Pokémon fly together with theirTrainers."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_DIVE_TOOL] =
    {
        .name = _("Dive Gear"),
        .itemId = ITEM_DIVE_TOOL,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A tool used to dive underwater."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_WATERFALL_TOOL] =
    {
        .name = _("Waterfall Tool"),
        .itemId = ITEM_WATERFALL_TOOL,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A tool used to climb waterfalls."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_EFFORT_TOOL] =
    {
        .name = _("Effort Tool"),
        .itemId = ITEM_EFFORT_TOOL,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A tool used to redistribute EVs in the summary screen."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_HEADBUTT_TOOL] =
    {
        .name = _("Shaking Tool"),
        .itemId = ITEM_HEADBUTT_TOOL,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A tool used to strike trees and find wild Pokémon."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_FLY_CHARM] =
    {
        .name = _("Fly Charm"),
        .itemId = ITEM_FLY_CHARM,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A charm that let's you use the Flying Taxis for free."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_WONDER_CHARM] =
    {
        .name = _("Wonder Charm"),
        .itemId = ITEM_WONDER_CHARM,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A charm that let's you Wonder Trade for free."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ALPHA_CHARM] =
    {
        .name = _("Alpha Charm"),
        .itemId = ITEM_ALPHA_CHARM,
        .price = 0,
        .description = FORMAT_ITEM_DESCRIPTION("A charm that let's you encounter alpha Pokémon in the wild."),
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ALCREMITE] =
    {
        .name = _("Alcremite"),
        .itemId = ITEM_ALCREMITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Alcremie to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_ALCREMIE,
    },

    [ITEM_APPLETITE] =
    {
        .name = _("Appletite"),
        .itemId = ITEM_APPLETITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Appletun to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_APPLETUN,
    },

    [ITEM_BUTTERFRITE] =
    {
        .name = _("Butterfrite"),
        .itemId = ITEM_BUTTERFRITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Butterfree to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_BUTTERFREE,
    },

    [ITEM_CENTISITE] =
    {
        .name = _("Centisite"),
        .itemId = ITEM_CENTISITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Centiskorch to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_CENTISKORCH,
    },

    [ITEM_COALOSSITE] =
    {
        .name = _("Coalossite"),
        .itemId = ITEM_COALOSSITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Coalossal to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_COALOSSAL,
    },

    [ITEM_CORVIKNITE] =
    {
        .name = _("Corviknite"),
        .itemId = ITEM_CORVIKNITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Corviknight to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_CORVIKNIGHT,
    },

    [ITEM_DREDNAWITE] =
    {
        .name = _("Drednawite"),
        .itemId = ITEM_DREDNAWITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Drednaw to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_DREDNAW,
    },

    [ITEM_FLAPPLITE] =
    {
        .name = _("Flapplite"),
        .itemId = ITEM_FLAPPLITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Flapple to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_FLAPPLE,
    },

    [ITEM_GARBODORITE] =
    {
        .name = _("Garbodorite"),
        .itemId = ITEM_GARBODORITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Garbodor to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_GARBODOR,
    },

    [ITEM_HATTERENITE] =
    {
        .name = _("Hatterenite"),
        .itemId = ITEM_HATTERENITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Hatterene to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_HATTERENE,
    },

    [ITEM_KINGLERITE] =
    {
        .name = _("Kinglerite"),
        .itemId = ITEM_KINGLERITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Kingler to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_KINGLER,
    },

    [ITEM_LAPRITE] =
    {
        .name = _("Laprite"),
        .itemId = ITEM_LAPRITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Lapras to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_LAPRAS,
    },

    [ITEM_MACHAMPITE] =
    {
        .name = _("Machampite"),
        .itemId = ITEM_MACHAMPITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Machamp to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_MACHAMP,
    },

    [ITEM_ORBEETLITE] =
    {
        .name = _("Orbeetlite"),
        .itemId = ITEM_ORBEETLITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Orbeetle to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_ORBEETLE,
    },

    [ITEM_SANDACONDITE] =
    {
        .name = _("Sandacondite"),
        .itemId = ITEM_SANDACONDITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Sandaconda to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_SANDACONDA,
    },

    [ITEM_SNORLAXITE] =
    {
        .name = _("Snorlaxite"),
        .itemId = ITEM_SNORLAXITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Snorlax to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .species = SPECIES_SNORLAX,
    },

    [ITEM_INVERSE_GEM] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Gema Inversa"),
#else
        .name = _("Inverse Gem"),
#endif
        .itemId = ITEM_INVERSE_GEM,
        .price = 20000,
        .bpPrice = 30,
        .holdEffect = HOLD_EFFECT_INVERSE_GEM,
        .description = FORMAT_ITEM_DESCRIPTION("Inverts effectiveness of the user moves, gets used by first SE hit."),
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_INVERSE_SHIELD] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Escudo Inverso"),
#else
        .name = _("Inverse Shield"),
#endif
        .itemId = ITEM_INVERSE_SHIELD,
        .price = 20000,
        .bpPrice = 30,
        .holdEffect = HOLD_EFFECT_INVERSE_SHIELD,
        .description = FORMAT_ITEM_DESCRIPTION("Inverts effectiveness of moves that hits the user, SE hits breaks it"),
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EJECT_PACK] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Escudo Inverso"),
#else
        .name = _("Eject Pack"),
#endif
        .itemId = ITEM_EJECT_PACK,
        .price = 20000,
        .bpPrice = 30,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = FORMAT_ITEM_DESCRIPTION("Inverts effectiveness of moves that hits the user, SE hits breaks it"),
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL,
    },

    [ITEM_BLUNDER_POLICY] =
    {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .name = _("Escudo Inverso"),
#else
        .name = _("Blunder Policy"),
#endif
        .itemId = ITEM_BLUNDER_POLICY,
        .price = 20000,
        .bpPrice = 30,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = FORMAT_ITEM_DESCRIPTION("Inverts effectiveness of moves that hits the user, SE hits breaks it"),
        .pocket = POCKET_BATTLE_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL,
    },

    //New Megas
    [ITEM_CLEFABLITE] =
    {
        .name = _("Clefablite"),
        .itemId = ITEM_CLEFABLITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Clefable to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_CLEFABLE_MEGA_STONE,
        .species = SPECIES_CLEFABLE,
    },

    [ITEM_VICTRIBELITE] =
    {
        .name = _("Victribellite"),
        .itemId = ITEM_VICTRIBELITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Victribell to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_VICTREEBEL_MEGA_STONE,
        .species = SPECIES_VICTREEBEL,
    },

    [ITEM_STARMINITE] =
    {
        .name = _("Starminite"),
        .itemId = ITEM_STARMINITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Starmie to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_STARMIE_MEGA_STONE,
        .species = SPECIES_STARMIE,
    },

    [ITEM_FLOETTITE] =
    {
        .name = _("Floettite"),
        .itemId = ITEM_FLOETTITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("Enables Eternal Floette to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_FLOETTE_ETERNAL_MEGA_STONE,
        .species = SPECIES_FLOETTE_ETERNAL,
    },

    [ITEM_DRAGONINITE] =
    {
        .name = _("Dragoninite"),
        .itemId = ITEM_DRAGONINITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Dragonite to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_DRAGONITE_MEGA_STONE,
        .species = SPECIES_DRAGONITE,
    },

    [ITEM_MEGANIUMITE] =
    {
        .name = _("Meganiumite"),
        .itemId = ITEM_MEGANIUMITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Meganium to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_MEGANIUM_MEGA_STONE,
        .species = SPECIES_MEGANIUM,
    },

    [ITEM_FERALIGITE] =
    {
        .name = _("Feraligite"),
        .itemId = ITEM_FERALIGITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Feraligatr to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_FERALIGATR_MEGA_STONE,
        .species = SPECIES_FERALIGATR,
    },

    [ITEM_SKARMORITE] =
    {
        .name = _("Skarmorite"),
        .itemId = ITEM_SKARMORITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Skarmory to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SKARMORY_MEGA_STONE,
        .species = SPECIES_SKARMORY,
    },

    [ITEM_FROSLASSITE] =
    {
        .name = _("Froslassite"),
        .itemId = ITEM_FROSLASSITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Froslass to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_FROSLASS_MEGA_STONE,
        .species = SPECIES_FROSLASS,
    },

    [ITEM_EMBOARITE] =
    {
        .name = _("Emboarite"),
        .itemId = ITEM_EMBOARITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Emboar to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_EMBOAR,
    },

    [ITEM_EXCADRITE] =
    {
        .name = _("Excadrite"),
        .itemId = ITEM_EXCADRITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Excadrill to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_EXCADRILL_MEGA_STONE,
        .species = SPECIES_EXCADRILL,
    },

    [ITEM_SCOLIPITE] =
    {
        .name = _("Scolipite"),
        .itemId = ITEM_SCOLIPITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Scolipede to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SCOLIPEDE_MEGA_STONE,
        .species = SPECIES_SCOLIPEDE,
    },

    [ITEM_SCRAFTINITE] =
    {
        .name = _("Scraftinite"),
        .itemId = ITEM_SCRAFTINITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Scrafty to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SCRAFTY_MEGA_STONE,
        .species = SPECIES_SCRAFTY,
    },

    [ITEM_EELEKTROSSITE] =
    {
        .name = _("Eelektrossite"),
        .itemId = ITEM_EELEKTROSSITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Eelektross to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_EELEKTROSS_MEGA_STONE,
        .species = SPECIES_EELEKTROSS,
    },

    [ITEM_CHANDELURITE] =
    {
        .name = _("Chandelurite"),
        .itemId = ITEM_CHANDELURITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Chandelure to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_CHANDELURE_MEGA_STONE,
        .species = SPECIES_CHANDELURE,
    },

    [ITEM_DELPHOXITE] =
    {
        .name = _("Delphoxite"),
        .itemId = ITEM_DELPHOXITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Delphox to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_DELPHOX,
    },

    [ITEM_CHESNAUGHTITE] =
    {
        .name = _("Chesnaughtite"),
        .itemId = ITEM_CHESNAUGHTITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Chesnaught to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_CHESNAUGHT,
    },

    [ITEM_GRENINJITE] =
    {
        .name = _("Greninjite"),
        .itemId = ITEM_GRENINJITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Greninja to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_GRENINJA,
    },

    [ITEM_PYROARITE] =
    {
        .name = _("Pyroarite"),
        .itemId = ITEM_PYROARITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Pyroar to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_PYROAR_MEGA_STONE,
        .species = SPECIES_PYROAR,
    },

    [ITEM_MALAMARITE] =
    {
        .name = _("Malamarite"),
        .itemId = ITEM_MALAMARITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Malamar to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_MALAMAR_MEGA_STONE,
        .species = SPECIES_MALAMAR,
    },

    [ITEM_BARBARACITE] =
    {
        .name = _("Barbaracite"),
        .itemId = ITEM_BARBARACITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Barbaracle to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_BARBARACLE_MEGA_STONE,
        .species = SPECIES_BARBARACLE,
    },

    [ITEM_DRAGALGITE] =
    {
        .name = _("Dragalgite"),
        .itemId = ITEM_DRAGALGITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Dragalge to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_DRAGALGE_MEGA_STONE,
        .species = SPECIES_DRAGALGE,
    },

    [ITEM_HAWLUCHANITE] =
    {
        .name = _("Hawluchanite"),
        .itemId = ITEM_HAWLUCHANITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Hawlucha to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_HAWLUCHA_MEGA_STONE,
        .species = SPECIES_HAWLUCHA,
    },

    [ITEM_ZYGARDITE] =
    {
        .name = _("Zygardite"),
        .itemId = ITEM_ZYGARDITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Zygarde to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_ZYGARDE_MEGA_STONE,
        .species = SPECIES_ZYGARDE,
    },

    [ITEM_DRAMPANITE] =
    {
        .name = _("Drampanite"),
        .itemId = ITEM_DRAMPANITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Drampa to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_DRAMPA_MEGA_STONE,
        .species = SPECIES_DRAMPA,
    },

    [ITEM_FALINKSITE] =
    {
        .name = _("Falinksite"),
        .itemId = ITEM_FALINKSITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Falinks to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_FALINKS_MEGA_STONE,
        .species = SPECIES_FALINKS,
    },

    [ITEM_RAICHUNITE_X] =
    {
        .name = _("Raichunite X"),
        .itemId = ITEM_RAICHUNITE_X,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Raichu to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_RAICHU,
    },

    [ITEM_RAICHUNITE_Y] =
    {
        .name = _("Raichunite Y"),
        .itemId = ITEM_RAICHUNITE_Y,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Raichu to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_RAICHU,
    },

    [ITEM_VENAUSURITE_G] =
    {
        .name = _("Venausurite G"),
        .itemId = ITEM_VENAUSURITE_G,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Venusaur to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_VENUSAUR,
    },

    [ITEM_BLASTOISTE_G] =
    {
        .name = _("Blastoiste G"),
        .itemId = ITEM_BLASTOISTE_G,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Blastoise to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_BLASTOISE,
    },

    [ITEM_GRIMMSNARLITE] =
    {
        .name = _("Grimmsnarlite"),
        .itemId = ITEM_GRIMMSNARLITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Grimmsnarl to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_GRIMMSNARL_MEGA_STONE,
        .species = SPECIES_GRIMMSNARL,
    },

    [ITEM_MELMETALITE] =
    {
        .name = _("Melmetalite"),
        .itemId = ITEM_MELMETALITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Melmetal to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_MELMETAL_MEGA_STONE,
        .species = SPECIES_MELMETAL,
    },

    [ITEM_RILABOOMITE] =
    {
        .name = _("Rillaboomite"),
        .itemId = ITEM_RILABOOMITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Rillaboom to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_RILLABOOM,
    },

    [ITEM_CINDERACITE] =
    {
        .name = _("Cinderacite"),
        .itemId = ITEM_CINDERACITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Cinderance to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_CINDERACE,
    },

    [ITEM_INTELEONITE] =
    {
        .name = _("Inteleonite"),
        .itemId = ITEM_INTELEONITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Inteleon to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_INTELEON,
    },

    [ITEM_TOXTRICITITE] =
    {
        .name = _("Toxtricitite"),
        .itemId = ITEM_TOXTRICITITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Toxtricity to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_TOXTRICITY_MEGA_STONE,
        .species = SPECIES_TOXTRICITY,
    },

    [ITEM_URISHIFUNITE] =
    {
        .name = _("Urishifunite"),
        .itemId = ITEM_URISHIFUNITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Urishifu to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_URSHIFU_MEGA_STONE,
        .species = SPECIES_URSHIFU,
    },
 
    [ITEM_SLOWKINGITE] =
    {
        .name = _("Slowkingite"),
        .itemId = ITEM_SLOWKINGITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Slowking to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SLOWKING_MEGA_STONE,
        .species = SPECIES_SLOWKING,
    },

    [ITEM_CROBATITE] =
    {
        .name = _("Crobatite"),
        .itemId = ITEM_CROBATITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Crobatite to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_CROBAT_MEGA_STONE,
        .species = SPECIES_CROBAT,
    },

    [ITEM_DEWGONGITE] =
    {
        .name = _("Dewgongite"),
        .itemId = ITEM_DEWGONGITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Dewgong to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_DEWGONG_MEGA_STONE,
        .species = SPECIES_DEWGONG,
    },

    [ITEM_TYPHLOSIONITE] =
    {
        .name = _("Typhlosionite"),
        .itemId = ITEM_TYPHLOSIONITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Thyplosion to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_TYPHLOSION_MEGA_STONE,
        .species = SPECIES_TYPHLOSION,
    },

    [ITEM_LANTURNITE] =
    {
        .name = _("Lanturnite"),
        .itemId = ITEM_LANTURNITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Lanturn to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_LANTURN_MEGA_STONE,
        .species = SPECIES_LANTURN,
    },

    [ITEM_QUAGSIRITE] =
    {
        .name = _("Quagsirite"),
        .itemId = ITEM_QUAGSIRITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Quagsire to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_QUAGSIRE_MEGA_STONE,
        .species = SPECIES_QUAGSIRE,
    },

    [ITEM_BRELOOMITE] =
    {
        .name = _("Breloomite"),
        .itemId = ITEM_BRELOOMITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Breloom to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_BRELOOM_MEGA_STONE,
        .species = SPECIES_BRELOOM,
    },

    [ITEM_SHEDINJITE] =
    {
        .name = _("Shedinjite"),
        .itemId = ITEM_SHEDINJITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Shedinja to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SHEDINJA_MEGA_STONE,
        .species = SPECIES_SHEDINJA,
    },

    [ITEM_FLYGONITE] =
    {
        .name = _("Flygonite"),
        .itemId = ITEM_FLYGONITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Flygon to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_FLYGON_MEGA_STONE,
        .species = SPECIES_FLYGON,
    },

    [ITEM_MILOTICITE] =
    {
        .name = _("Miloticite"),
        .itemId = ITEM_MILOTICITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Milotic to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_MILOTIC_MEGA_STONE,
        .species = SPECIES_MILOTIC,
    },

    [ITEM_SERPERIORITE] =
    {
        .name = _("Serperiorite"),
        .itemId = ITEM_SERPERIORITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Serperior to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_SERPERIOR,
    },

    [ITEM_SAMUROTTITE] =
    {
        .name = _("Samurottite"),
        .itemId = ITEM_SAMUROTTITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Samurott to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_MEGA_STONE_UNLOCKED_AFTER_BRACLET,
        .species = SPECIES_SAMUROTT,
    },

    [ITEM_RIBOMBITE] =
    {
        .name = _("Ribombite"),
        .itemId = ITEM_RIBOMBITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Ribombee to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_RIBOMBEE_MEGA_STONE,
        .species = SPECIES_RIBOMBEE,
    },

    [ITEM_CHIMECHITE] =
    {
        .name = _("Chimechite"),
        .itemId = ITEM_CHIMECHITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Chimecho to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_CHIMECHO_MEGA_STONE,
        .species = SPECIES_CHIMECHO,
    },

    [ITEM_ABSOLITE_Z] =
    {
        .name = _("Absolite Z"),
        .itemId = ITEM_ABSOLITE_Z,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Absol to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_ABSOL_MEGA_STONE_Z,
        .species = SPECIES_ABSOL,
    },

    [ITEM_STARAPTORITE] =
    {
        .name = _("Staraptorite"),
        .itemId = ITEM_STARAPTORITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Staraptor to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_STARAPTOR_MEGA_STONE,
        .species = SPECIES_STARAPTOR,
    },

    [ITEM_GARCHOMPITE_Z] =
    {
        .name = _("Garchompite Z"),
        .itemId = ITEM_GARCHOMPITE_Z,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Garchomp to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_GARCHOMP_MEGA_STONE_Z,
        .species = SPECIES_GARCHOMP,
    },

    [ITEM_LUCARIONITE_Z] =
    {
        .name = _("Lucarionite Z"),
        .itemId = ITEM_LUCARIONITE_Z,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Lucario to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_LUCARIO_MEGA_STONE_Z,
        .species = SPECIES_LUCARIO,
    },

    [ITEM_MEOWSTITE] =
    {
        .name = _("Meowstite"),
        .itemId = ITEM_MEOWSTITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Meowstic to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_MEOWSTIC_MEGA_STONE,
        .species = SPECIES_MEOWSTIC,
    },

    [ITEM_GOLURKITE] =
    {
        .name = _("Golurkite"),
        .itemId = ITEM_GOLURKITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Golurk to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_GOLURK_MEGA_STONE,
        .species = SPECIES_GOLURK,
    },

    [ITEM_CRABOMINABLITE] =
    {
        .name = _("Crabominablite"),
        .itemId = ITEM_CRABOMINABLITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Crabominable to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_CRABOMINABLE_MEGA_STONE,
        .species = SPECIES_CRABOMINABLE,
    },

    [ITEM_GOLISPODITE] =
    {
        .name = _("Golispodite"),
        .itemId = ITEM_GOLISPODITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Golispod to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_GOLISOPOD_MEGA_STONE,
        .species = SPECIES_GOLISOPOD,
    },

    [ITEM_MAGEARNITE] =
    {
        .name = _("Magearnite"),
        .itemId = ITEM_MAGEARNITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Magearna to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_MAGEARNA_MEGA_STONE,
        .species = SPECIES_MAGEARNA,
    },

    [ITEM_SCOVILLAINITE] =
    {
        .name = _("Scovillainite"),
        .itemId = ITEM_SCOVILLAINITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Scovillain to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SCOVILLAIN_MEGA_STONE,
        .species = SPECIES_SCOVILLAIN,
    },

    [ITEM_GLIMMORITE] =
    {
        .name = _("Glimmorite"),
        .itemId = ITEM_GLIMMORITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Glimmora to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_GLIMMORA_MEGA_STONE,
        .species = SPECIES_GLIMMORA,
    },

    [ITEM_TATSIGIRITE] =
    {
        .name = _("Tatsugirite"),
        .itemId = ITEM_TATSIGIRITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Tatsugiri to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_TATSUGIRI_MEGA_STONE,
        .species = SPECIES_TATSUGIRI,
    },

    [ITEM_BAXCALIBURITE] =
    {
        .name = _("Baxcaliburite"),
        .itemId = ITEM_BAXCALIBURITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Baxcalibur to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_BAXCALIBUR_MEGA_STONE,
        .species = SPECIES_BAXCALIBUR,
    },

    [ITEM_DARKRAITE] =
    {
        .name = _("Darkraite"),
        .itemId = ITEM_DARKRAITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("An ominous stone that resonates with the Pokémon Darkrai."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_DARKRAI_MEGA_STONE,
        .species = SPECIES_DARKRAI,
    },

    [ITEM_HEATRANITE] =
    {
        .name = _("Heatranite"),
        .itemId = ITEM_HEATRANITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Heatran to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_HEATRAN_MEGA_STONE,
        .species = SPECIES_HEATRAN,
    },

    [ITEM_ZERAORANITE] =
    {
        .name = _("Zeraoranite"),
        .itemId = ITEM_ZERAORANITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Zeraora to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_ZERAORA_MEGA_STONE,
        .species = SPECIES_ZERAORA,
    },

    [ITEM_CLODSIRITE] =
    {
        .name = _("Clodsirite"),
        .itemId = ITEM_CLODSIRITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Clodsire to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_CLODSIRE_MEGA_STONE,
        .species = SPECIES_CLODSIRE,
    },

    [ITEM_SANDSLASHITE] =
    {
        .name = _("Sandslashite"),
        .itemId = ITEM_SANDSLASHITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Sandslash to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SANDSLASH_MEGA_STONE,
        .species = SPECIES_SANDSLASH,
    },

    [ITEM_TOUCANNONITE] =
    {
        .name = _("Toucannonite"),
        .itemId = ITEM_TOUCANNONITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Toucannon to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_TOUCANNON_MEGA_STONE,
        .species = SPECIES_TOUCANNON,
    },

    [ITEM_VANILLUXITE] =
    {
        .name = _("Vanilluxite"),
        .itemId = ITEM_VANILLUXITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Vanilluxe to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_VANILLUXE_MEGA_STONE,
        .species = SPECIES_VANILLUXE,
    },

    [ITEM_TINKATITE] =
    {
        .name = _("Tinkatite"),
        .itemId = ITEM_TINKATITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Tinkaton to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_TINKATON_MEGA_STONE,
        .species = SPECIES_TINKATON,
    },

    [ITEM_SHUCKLENITE] =
    {
        .name = _("Shucklenite"),
        .itemId = ITEM_SHUCKLENITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Shuckle to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_SHUCKLE_MEGA_STONE,
        .species = SPECIES_SHUCKLE,
    },

    [ITEM_KROOKODILENITE] =
    {
        .name = _("Krookodilenite"),
        .itemId = ITEM_KROOKODILENITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Krookodile to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_KROOKODILE_MEGA_STONE,
        .species = SPECIES_KROOKODILE,
    },

    [ITEM_TSEERENITE] =
    {
        .name = _("Tseerenite"),
        .itemId = ITEM_TSEERENITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Tseerena to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_TSAREENA_MEGA_STONE,
        .species = SPECIES_TSAREENA,
    },

    [ITEM_LUXRAYNITE] =
    {
        .name = _("Luxraynite"),
        .itemId = ITEM_LUXRAYNITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Luxray to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_LUXRAY_MEGA_STONE,
        .species = SPECIES_LUXRAY,
    },

    [ITEM_CLEFABLITE_R] =
    {
        .name = _("Clefablite R"),
        .itemId = ITEM_CLEFABLITE_R,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Clefable to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_CLEFABLE_R_MEGA_STONE,
        .species = SPECIES_CLEFABLE,
    },

    [ITEM_STARMINITE_R] =
    {
        .name = _("Starminite R"),
        .itemId = ITEM_STARMINITE_R,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Starmie to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_STARMIE_R_MEGA_STONE,
        .species = SPECIES_STARMIE,
    },

    [ITEM_ARBOKITE] =
    {
        .name = _("Arbokite"),
        .itemId = ITEM_ARBOKITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("This stone enables Arbok to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_ARBOK_MEGA_STONE,
        .species = SPECIES_ARBOK,
    },

    [ITEM_NECROZMANITE] =
    {
        .name = _("Necrozmanite"),
        .itemId = ITEM_NECROZMANITE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("Enables Ultra Necrozma to Mega Evolve in battle."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_DEFEATED_NECROZMA,
        .species = SPECIES_NECROZMA,
    },

    [ITEM_RED_ORB] =
    {
        .name = _("Red Orb"),
        .itemId = ITEM_RED_ORB,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Es roja y brillante. Dicen que posee un poder ancestral."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A red, glowing orb said to contain an ancient power."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_GROUDON_PRIMAL_ORB,
        .species = SPECIES_GROUDON,
    },

    [ITEM_BLUE_ORB] =
    {
        .name = _("Blue Orb"),
        .itemId = ITEM_BLUE_ORB,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .description = FORMAT_ITEM_DESCRIPTION("Es azul y brillante. Dicen que posee un poder ancestral."),
#else
        .description = FORMAT_ITEM_DESCRIPTION("A blue, glowing orb said to contain an ancient power."),
#endif
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
        .buyFlag = FLAG_GOT_KYOGRE_PRIMAL_ORB,
        .species = SPECIES_KYOGRE,
    },

    [ITEM_BOOSTER_STONE] =
    {
        .name = _("Delta Orb"),
        .itemId = ITEM_BOOSTER_STONE,
        .price = 200,
        .bpPrice = MEGA_STONE_ITEMS_PRICE_BP,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = FORMAT_ITEM_DESCRIPTION("A green, glowing orb said to contain immense energy."),
        .pocket = POCKET_MEGA_STONES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },
};
