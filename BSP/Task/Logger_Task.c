#include "Logger_Task.h"
#include "usart1_bsp.h"
#include "usart.h"

 void StartTask02(void *argument)
{
    /* USER CODE BEGIN Logger_Task */
    /* Infinite loop */

    //RetargetInit(&huart1);
    for(;;)
    {
        osDelay(500);
        printf("I am Logger Task\r\n");
    }
    /* USER CODE END Logger_Task */
}


