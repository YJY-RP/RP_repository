/**
  ******************************************************************************
  * @file    monitor_task.c
  * @brief   监控任务
  *          1. 各模块心跳失联检测
  *          2. 监控遥控器状态，软件复位
  ******************************************************************************
  */
#include "monitor_task.h"


void Soft_Reset(void);

//bool Judge_IF_NAN(float x)
//{
//	bool res = false;
//	res = (bool)__ARM_isnan((double)x);
//	return res;
//}

void StartMonitorTask(void const * argument)
{
	
	for(;;)
	{
//		cap.heart_beat(&cap);		rm_motor_list_heart_beat();
//		imu_sensor.heart_beat(&imu_sensor.work_state);
//	    rc_sensor.heart_beat(&rc_sensor);
//		judge.heart_beat(&judge);
//        vision_sensor.heart_beat(&vision_sensor);
//		Soft_Reset();
//		if(rc_sensor.work_state == DEV_ONLINE) 
//		{
//			CAN_SendAll();
//		}
//		else
//		{
//			CAN_SendAllZero();
//		}
//		HAL_IWDG_Refresh(&hiwdg);
		osDelay(1);
	}
}

/**
  * @brief  软件复位
  * @param  None
  * @retval None
  */
//void Soft_Reset()
//{
//	if((rc_sensor.info->Z.value == 1 && rc_sensor.info->X.value == 1 && rc_sensor.info->C.value == 1)
//       || (rc_sensor.info->thumbwheel.value < -50 && IF_RC_SW2_UP && IF_RC_SW1_DOWN))
//	{
//		CAN_SendAllZero();
//		HAL_Delay(500);
//		__set_FAULTMASK(1);
//		NVIC_SystemReset();	
//	}
//}
