/**
 * @file        rp_config.c
 * @author      RobotPilots
 * @Version     v1.1
 * @brief       RobotPilots Robots' Configuration.
 * @update
 *              v1.0(9-September-2020)
 *              v1.1(7-November-2021)
 *                  1.�Ż��豸����Ϣ��ṹ��ı������壬����volatile/const�ؼ���
 *                  //2.��rp_config.h�ֳ�driver_config.h, device_config.h, user_config.h����ͷ�ļ�    
 */
#ifndef __RP_CONFIG_H
#define __RP_CONFIG_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "stdbool.h"
#include "string.h"
// ����������
#include "rp_driver_config.h"
// �豸������
#include "rp_device_config.h"
// �û�������
#include "rp_user_config.h"

/* Exported macro ------------------------------------------------------------*/
/*���޳���*/
#define CAP_ENABLE		1
/*���޲���ϵͳ*/
#define JUDGE_ENABLE 	1
/* Exported types ------------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/


#endif