/**
  ******************************************************************************
  * @file    control_task.c
  * @brief   ��������,����������̨�ͷ������
  ******************************************************************************
  */
#include "control_task.h"
#include "rp_user_config.h"
//#include "module.h"


int16_t motor_speed[8] = {0};

void StartControlTask(void const * argument)
{

	for(;;)
	{
//		if(rc_sensor.work_state == DEV_ONLINE)
//		{
//			Module_Whole_CTRL(&module);
//		}
//		else
//		{
//			Module_Sleep();
//		}
        // kt_motor_multi_control(motor_speed, 1, M_CAN1);
        // kt_motor[0].
		osDelay(1);
	  
	}
}
	  
	  
