#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_1_Start();
    for (;;)
    {
        UART_1_WriteTxData(0x20);
        CyDelay(500);
        UART_1_PutString("Hello World");
        CyDelay(500);
    }
}
