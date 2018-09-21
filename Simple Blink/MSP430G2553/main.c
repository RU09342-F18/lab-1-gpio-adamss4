#include <msp430.h> 


/**
 * main.c
 */
 main(void)
{

    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    P1SEL = 0; // selects pin 1 as gpio
    P1DIR |= BIT0; // set port 1.0 as output (led)
    P1OUT &= BIT0; // initializes port 1.0 as a 0

    while(1){ // loops forever

        P1OUT ^= 0x01; // toggles port 1.0 on and off
        __delay_cycles(1000000); // delays for approximately 1 second


    }
}



