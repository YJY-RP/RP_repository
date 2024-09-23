#ifndef __DEVICE_H
#define __DEVICE_H

/* Includes ------------------------------------------------------------------*/
#include "rp_config.h"





/* Exported macro ------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/
void DEVICE_Init(void);

/* Servo functions */
extern void Magazine_Open(void);
extern void Magazine_Close(void);
extern void Magazine_Sleep(void);

#endif
