#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    int a;                            // Declare a variable named "a" 
    for(;;)                           // Enter an endless loop
    {
        a = Switch_Input_Read();      // Read the switch state and save in “a”
        if(a==0)                      // Is the switch pushed? ("a" will be 0) 
        {
        	Clock_1_SetDivider(0x01ff); // Yes, so load the counter with smaller number 
        }                             // so it runs faster and bypass the "else" part

        else                          // Switch not pushed ("a" will be 1) 
        {
        	Clock_1_SetDivider(0x5ff);  // So load counter with a larger number 
                                      // so that it runs slower
        }
    }
