#include <msp430.h> 

#define CT1 10000 // time constant for the counter to get different blink rates
#define CT2 100000 // time constant for counter 2 to get different blink rates



void main(void)
{

    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    P1SEL = 0; // selects pin 1 as gpio
    P1DIR |= BIT0; // set port 1.0 as output (led1)
    P1DIR |= BIT6; // set port 1.6 as output (led2)

    long i,j; // ints for the for loop

    i = 0;
    j = 0;


    for(;;){ // loops forever
        i++; // increments both i and j as counters for separate blink rates
        j++;


        if (i > CT1){

            i = 0; P1OUT ^= BIT0; // if i is greater than the counter value, reset and toggle led
        }


        if (j > CT2){

            j = 0; P1OUT ^= BIT6; // if j is greater than the counter value, reset and toggle led

        }





    }



}
