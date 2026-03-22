#ifndef GUARD_ROAMER_H
#define GUARD_ROAMER_H

void ClearRoamerData(void);
void ClearRoamerLocationData(void);
void InitRoamer(void);
void InitMysteryGiftRoamer(u16 species, u8 level);
void UpdateLocationHistoryForRoamer(void);
void RoamerMoveToOtherLocationSet(void);
void RoamerMove(void);
bool8 IsRoamerAt(u8 mapGroup, u8 mapNum);
void CreateRoamerMonInstance(void);
u8 TryStartRoamerEncounter(void);
void UpdateRoamerHPStatus(struct Pokemon *mon);
void SetRoamerInactive(void);
void SetRoamerActive(void);
void GetRoamerLocation(u8 *mapGroup, u8 *mapNum);
void CreateOnlineRoamer(u16 species, u8 level, bool8 isShiny);
bool8 isRoamerActive(void);
u32 getRoamerLocation(void);

#endif // GUARD_ROAMER_H
