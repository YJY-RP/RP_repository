/**
  ******************************************************************************
  * File Name          : community_task.c
  * Description        : 其他设备控制，如键盘，视觉等
  ******************************************************************************
  */
#include "community_task.h"

uint8_t slave_data_tx_buf[8];
void slave_data_send(uint8_t can_num);
int16_t remain_bullet = 650;

int i=0;
float kx;
void StartCommunityTask(void const * argument)
{
	for(;;)
    {
//		i++;
//        if(i>=60000)
//        {
//            i=0;
//        }
//        if(i%3==0)
//        {
//			vision_readstatus(&vision_sensor);
//            Vision_TxInfoUpdate();
//            vision_send_data();
//        }
//		if (i % 10 == 0)
//		{
//			slave_data_send(1);
//        }
//		#if CAP_ENABLE == 1
//		if(cap.state == CAP_ONLINE)
//		{
//			if(i%20==0)//50Hz
//			{	
//            
//				cap.setdata(&cap, judge.info->power_heat_data.chassis_power_buffer, \
//												judge.info->game_robot_status.chassis_power_limit, \
//												judge.info->power_heat_data.chassis_volt, \
//												judge.info->power_heat_data.chassis_current);
//				CAP_Protect(&cap);
//				
//				cap_data_send(1);  
//			}
//            
//		}
//		#endif
//		keyboard_update(rc_sensor.info);
//		//BMI_Kp_change(&Kp);
		osDelay(1);
	}
}
