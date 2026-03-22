#ifndef GUARD_UI_TRAINER_SKILL_MENU_H
#define GUARD_UI_TRAINER_SKILL_MENU_H

#include "main.h"

void Task_OpenTrainerSkillMenuFromStartMenu(u8 taskId);
void Trainer_Skill_Menu_Init(MainCallback callback);
u16 getMaxSkillPoints(void);
u16 getCurrentSkillPoints(void);
u16 getRemainingSkillPoints(void);
bool8 tryToGivePlayerExp(u16 exp);
u16 calculateTrainerExp(u16 exp, u16 species, bool8 isTrainer);
u8 getTrainerSkillLevel(u8 skillNum);
void ResetSkills(void);

#endif //GUARD_UI_TRAINER_SKILL_MENU_H
