#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    Count7_1_Start();
    for(;;)
    {
        if(Pin_2_Read()==0)         //Is switch pushed?
        {
            Control_Reg_1_Write(1); //Yes so reset counter to do more pulses
            Control_Reg_1_Write(0);
            CyDelay(500);            
        }
    }
}
