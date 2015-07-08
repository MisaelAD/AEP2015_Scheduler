/*============================================================================*/
/*                        Continental AEP 2015                              */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Include:        scheduler.h
* Instance:         RPL_1
* %version:         1.1
* %created_by:      Misael Alvarez Domínguez
* %date_created:    Wednesday, July 8, 2015
*=============================================================================*/
/* DESCRIPTION : Header file template                                         */
/*============================================================================*/
/* FUNCTION COMMENT : contains only symbols which are exported to internal    */
/* platform modules. This will not be delivered with the library              */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 04/04/2014  |  Dummy functions              |Francisco Martinez*/
/*  1.1      | 08/07/2015  |Scheduler file & template      | Misael Alvarez   */
/*============================================================================*/

#ifndef _SCHEDULER_H        /*prevent duplicated includes*/
#define _SCHEDULER_H

/* Includes */
/* -------- */
#include "typedefs.h"

/* Exported types and constants */
/* ---------------------------- */

/* Types definition */
/* typedef */
typedef struct {					/* New handling task structure definition */
		T_UWORD ruw_Counter;
		T_UWORD ruw_TopCount;
		tCallbackFunction cpfu_PerFunct; 
}TASKSTRUCT;

/*==================================================*/ 
/* Declaration of exported constants                */
/*==================================================*/ 
/* BYTE constants */


/* WORD constants */


/* LONG and STRUCTURE constants */



/*======================================================*/ 
/* Definition of RAM variables                          */
/*======================================================*/ 
/* BYTES */


/* WORDS */


/* LONGS and STRUCTURES */


/*======================================================*/ 
/* close variable declaration sections                  */
/*======================================================*/ 

/* Exported functions prototypes and macros */
/* ---------------------------------------- */

/* Functions prototypes */
void Test(void);
void scheduler_endless_loop(void);
void scheduler_500us(void);
void scheduler_5ms(void);
void scheduler_10ms(void);
void scheduler_50ms(void);
void scheduler_100ms(void);

/* Functions macros */


/* Exported defines */


#endif

