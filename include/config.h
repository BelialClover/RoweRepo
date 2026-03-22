#ifndef GUARD_CONFIG_H
#define GUARD_CONFIG_H

// In the Generation 3 games, Asserts were used in various debug builds.
// Ruby/Sapphire and Emerald do not have these asserts while Fire Red
// still has them in the ROM. This is because the developers forgot
// to define NDEBUG before release, however this has been changed as
// Ruby's actual debug build does not use the AGBPrint features.
//#define NDEBUG

// To enable print debugging, comment out "#define NDEBUG". This allows
// the various AGBPrint functions to be used. (See include/gba/isagbprint.h).
// Some emulators support a debug console window: uncomment NoCashGBAPrint()
// and NoCashGBAPrintf() in libisagbprn.c to use no$gba's own proprietary
// printing system. Use NoCashGBAPrint() and NoCashGBAPrintf() like you
// would normally use AGBPrint() and AGBPrintf().

// NOTE: Don't try to enable assert right now as many pointers
// still exist in defines and WILL likely result in a broken ROM.

#define ENGLISH

#ifdef ENGLISH
#define UNITS_IMPERIAL
#else
#define UNITS_METRIC
#endif

#define GBA_PRINTF

// Various undefined behavior bugs may or may not prevent compilation with
// newer compilers. So always fix them when using a modern compiler.
#if MODERN
#ifndef UBFIX
#define UBFIX
#endif
#endif

// Autosave setting indices (selectable via Options menu)
#define AUTOSAVE_OFF   0
#define AUTOSAVE_200   1
#define AUTOSAVE_500   2
#define AUTOSAVE_1000  3
#define AUTOSAVE_1500  4
#define AUTOSAVE_2000  5

// Catch Mode settings
// Catch Mode can be toggled in move selection to prevent the player's direct move damage from KOing a catchable wild target.
#define CATCH_MODE_TOGGLE_BUTTON            L_BUTTON // Allowed values: L_BUTTON or R_BUTTON.
#define CATCH_MODE_USE_FLAG                 0        // If 1, Catch Mode is available only if CATCH_MODE_FLAG is set.
#define CATCH_MODE_FLAG                     0        // Progression flag for Catch Mode when CATCH_MODE_USE_FLAG == 1.

#if CATCH_MODE_TOGGLE_BUTTON != L_BUTTON && CATCH_MODE_TOGGLE_BUTTON != R_BUTTON
#error CATCH_MODE_TOGGLE_BUTTON must be L_BUTTON or R_BUTTON.
#endif

#if CATCH_MODE_USE_FLAG != 0 && CATCH_MODE_USE_FLAG != 1
#error CATCH_MODE_USE_FLAG must be 0 or 1.
#endif

#endif // GUARD_CONFIG_H
