/*
 * EXT_interrupt_interface.h
 *
 *  Created on: Oct 22, 2022
 *      Author: youssef
 */

#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_

#include "Utils/STD_TYPES.h"
#include "Utils/STD_LIBRARY.h"
#include "EXTI_MemMap.h"

typedef enum
{
	EX_INT0=0,
	EX_INT1,
	EX_INT2

}EX_InterruptSource_type;

typedef enum
{
	LOW_LEVEL=0,
	ANY_LOGIC_CHANGE,
	FALLING_EDGE,
	RISING_EDGE

}TriggerEdge_type;

void EXI_Enable(EX_InterruptSource_type Interrupt);

void EXI_Disable(EX_InterruptSource_type Interrupt);

void EXI_TriggerEdge(EX_InterruptSource_type Interrupt,TriggerEdge_type Edge);

void EXI_SetCallBack(EX_InterruptSource_type Interrupt,void(*LocalPtr)(void));



#endif /* EXTI_INTERFACE_H_ */
