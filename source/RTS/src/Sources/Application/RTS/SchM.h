/*============================================================================*/
/*                        Continental AEP 2015                              */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Include:        scheduler.h
* Instance:         RPL_1
* %version:         1.2
* %created_by:      Misael Alvarez Dom�nguez
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
/*  1.2      | 16/07/2015  |  Scheduler main functions     | Misael Alvarez   */
/*============================================================================*/

#ifndef SCHEDULER_H        /*prevent duplicated includes*/
#define SCHEDULER_H

/* Includes */
/* -------- */
#include "SchM_Types.h"

/* Exported types and constants */
/* ---------------------------- */

/* Types definition */
/* typedef */
typedef struct {					/* New handling task structure definition */
		T_UWORD ruw_Counter;
		T_UWORD ruw_TopCount;
		T_UWORD ruw_Offset;
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
void SchM_Background(void);
void scheduler_tick(void);
void SchM_Init(const SchConfigType *SchM_Config);
void SchM_Stop(void);
void SchM_Start(void);
void SchM_OSTick(void);

/* Functions macros */


/* Exported defines */


#endif

