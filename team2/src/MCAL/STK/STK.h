/********************************************************************************************************/
/************************************************Includes************************************************/
/********************************************************************************************************/

/* Include Libraries  */
#include "Errors.h"
#include "STD_TYPES.h"

/* Driver Libraries   */


/********************************************************************************************************/
/************************************************Defines*************************************************/
/********************************************************************************************************/



/********************************************************************************************************/
/************************************************Types***************************************************/
/********************************************************************************************************/

typedef void (*STK_CBF_t)(void);

/********************************************************************************************************/
/************************************************APIs****************************************************/
/********************************************************************************************************/


/*!< Constrain: time can reach up to 8 sec only */
MCAL_ErrorStatus_t STK_SetTime_ms(uint32_t Copy_TimeReqMS);

MCAL_ErrorStatus_t STK_Start(void);

MCAL_ErrorStatus_t STK_Stop(void);

MCAL_ErrorStatus_t STK_IsExpire(uint32_t *Copy_ExpireStatus);

MCAL_ErrorStatus_t STK_SetCallBack(STK_CBF_t Copy_CallBackAddr);

void SysTick_Handler(void);