#ifndef GUARD_SCALING_H
#define GUARD_SCALING_H

bool8 IsHardMode(void);
u8 GetNumBadges(void);
u8 getLevelBoost(void);
u8 GetPlayerUsableMons(void);
u8 GetPlayerHighestLevel(void);
u8 getTrainerMinLevel(void);
u8 getTrainerPokemonNum(void);
u8 getGymLeaderMinLevel(void);
u8 getLeaderPokemonNum(void);
u8 getWildPokemonLevel(void);
u8 getMinWildPokemonLevel(void);
u8 getDoubleTrainerPokemonNum(void);
u16 GetWildPokemon(u16 basespecies, u8 level, u16 heldItem);
u16 GetTrainerPokemon(u16 basespecies, u8 level);
u16 GetBaseSpecie(u16 basespecies);
u16 GetHeldItem(u16 baseitem);
u8 GetScaledEvs(u8 evs);
bool8 IsMoveUsable(u8 movepower);
u16 GeneratePokemonForTrainer(u16 trainerNum, u16 species);
u16 GetScaledItem(u16 itemId);
u8 getLevelDifference(void);
u16 noEvolutionModeCheck(u16 basespecies);
void RandomizeParty(void);
void RandomizeEverything(void);
void RandomizeIfSpeciesNone(void);
u8 getMovePowerLimit(void);
bool8 IsPokemonValid(u16 mon);
void CheckPartyforIlegalMoves(void);
bool8 canPokemonLearnMove(u16 species, u8 formId, u16 move);
u8 GetEggMoveTutorMovesfromSpecies(u16 formSpeciesId, u16 *moves);
u8 GetPlayerPartyMaxLevel(void);
u16 GetRandomItem(u16 species, u16 ability, u8 count, bool8 canMega);
bool8 CheckforMetronomeBattle(void);
u8 GetPlayerPartySize(void);
u16 GetCurrentLevelCap(void);
u16 GetCurrentRawLevelCap(void);
u16 GetPastLevelCap(void);
u16 GetNextLevelCap(void);
u16 GetWhiteoutMoney(void);
u16 getScalingData(u8 type);
u16 getScalingDataForBadge(u8 type, u8 numBadges);
u8 getLevelCapLevel(void);
void RestorePartyPPMoves(void);

struct Pokemon CreateMonFromCompressedBattleMon(struct CompressedBattlemon CompressedBattlemon);
struct CompressedPlayerParty CreatePartyFromRamData(void);
struct Pokemon CreateMonFromPartyRamData(u8 num);
void ClearPartyFromRam(void);
bool8 CreatePlayerPartyPassword(void);
bool8 CheckRamForPasswordTrainer(void);
u16 GetRandomizedWildPokemon(u16 basespecies, u8 level, u16 heldItem);

#endif // GUARD_SCALING_H