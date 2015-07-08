/*******************************************************************************/
/**
\file       dummy.h
\brief      Dummy Functions
\author     Francisco Martinez
\version    1.0
\date       04/04/2014
*/
/*******************************************************************************/

#ifndef _DUMMY_H        /*prevent duplicated includes*/
#define _DUMMY_H

/*-- Includes ----------------------------------------------------------------*/

/** Core modules */
/** Variable types and common definitions */

#include "typedefs.h"

/*-- Variables ---------------------------------------------------------------*/

/*-- Types Definitions -------------------------------------------------------*/

typedef struct {						/* Handling task structure definition */
		T_UWORD ruw_Counter;
		T_UWORD ruw_TopCount;
		tCallbackFunction cpfu_PerFunct; 
}TASKSTRUCT;

/*-- Defines -----------------------------------------------------------------*/

/*-- Function Prototypes -----------------------------------------------------*/

void Test(void);
void dummy_endless_loop(void);
void dummy_500us(void);
void Task_5ms(void);
void Task_10ms(void);
void Task_50ms(void);
void Task_100ms(void);

#endif /* _DUMMY_H */

/*******************************************************************************/
