#ifndef GUARD_BATTLE_SCRIPT_COMMANDS_H
#define GUARD_BATTLE_SCRIPT_COMMANDS_H

#include "constants/pokemon.h"

#define WINDOW_CLEAR            0x1
#define WINDOW_x80              0x80

s32 CalcCritChanceStage(u8 battlerAtk, u8 battlerDef, u32 move, bool32 recordAbility);
u32 GetTotalAccuracy(u32 battlerAtk, u32 battlerDef, u32 move);
u8 GetBattlerTurnOrderNum(u8 battlerId);
bool32 NoAliveMonsForEitherParty(void);
void SetMoveEffect(bool32 primary, u32 certain);
bool32 CanBattlerSwitch(u32 battlerId);
void BattleDestroyYesNoCursorAt(u8 cursorPosition);
void BattleCreateYesNoCursorAt(u8 cursorPosition);
void BufferMoveToLearnIntoBattleTextBuff2(void);
void HandleBattleWindow(u8 xStart, u8 yStart, u8 xEnd, u8 yEnd, u8 flags);
bool8 UproarWakeUpCheck(u8 battlerId);
bool32 DoesSubstituteBlockMove(u8 battlerAtk, u8 battlerDef, u32 move);
bool32 DoesDisguiseBlockMove(u8 battlerAtk, u8 battlerDef, u32 move);
bool32 CanPoisonType(u8 battlerAttacker, u8 battlerTarget);
bool32 CanParalyzeType(u8 battlerAttacker, u8 battlerTarget);
bool32 CanUseLastResort(u8 battlerId);
u32 IsFlowerVeilProtected(u32 battler);
u32 IsLeafGuardProtected(u32 battler);
bool32 IsShieldsDownProtected(u32 battler);
u32 IsAbilityStatusProtected(u32 battler);
bool32 CanCamouflage(u8 battlerId);
bool32 TryResetAllBattlersStatChanges(void);
bool32 TryResetBattlerStatChanges(u8 battler);
bool32 TryToStealBattlerPositiveStatChanges(u8 battlerAtk, u8 battlerDef);
u32 CalculateCatchChances(u16 ball, bool8 usingItem, u8 attacker, u8 target);
u8 GetCatchingBattler(void);
void RecalcBattlerStats(u32 battler, struct Pokemon *mon);
bool8 GetsSheerForceBoost(u8 battler, u16 move);
u32 GetHighestStatId(u32 battlerId);
void TryToGiveDeltaBoost(u32 battler, struct Pokemon *mon);

extern void (* const gBattleScriptingCommandsTable[])(void);
extern const u8 gBattlePalaceNatureToMoveGroupLikelihood[NUM_NATURES][4];

#endif // GUARD_BATTLE_SCRIPT_COMMANDS_H
