#ifndef __LED_TASK
#define __LED_TASK

#include "cmsis_os.h"
#include "main.h"

void StartLedTask(void const * argument);
extern IWDG_HandleTypeDef hiwdg;
#endif
