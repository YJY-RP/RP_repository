#include "led_task.h"

void StartLedTask(void const * argument)
{
//	static	uint16_t i = 0
	
	HAL_GPIO_WritePin(GPIOC, LED1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, LED2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, LED3_Pin, GPIO_PIN_RESET);
  for(;;)
  {
    

    
    
    
    osDelay(1);
  }
}
