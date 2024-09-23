/**
 ******************************************************************************
 * @file        driver.h
 * @author      RobotPilots@2020
 * @brief       Drivers' Manager.
 ******************************************************************************
 * @attention   
 * 
 * Copyright 2020 RobotPilots
 *  
 * @Version     V1.0
 * @date        9-September-2020
 ****************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __DRIVER_H
#define __DRIVER_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "stdbool.h"


#include "drv_gpio.h"

#include "drv_tick.h"

#include "drv_uart.h"

/* Exported macro ------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/
void DRIVER_Init(void);

#endif
