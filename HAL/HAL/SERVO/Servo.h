
#ifndef SERVO_H_
#define SERVO_H_

/******************************
 * Includes
 *******************************/
#include "STM32F103x8.h"
#include "GPIO.h"
#include "stdlib.h"
#include "stdint.h"
#include "TIMER.h"

//==========================================================================


//===========================================================================

/******************************************************************************
*                                  APIs			                              *
*******************************************************************************/

void HAL_Servo_Set_Angle(double angle,uint32_t clock);

#endif /* SERVO_H_ */