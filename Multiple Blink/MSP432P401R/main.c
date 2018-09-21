#include "msp.h"

#define CT1 10000 // time constant for the counter to get different blink rates
#define CT2 100000 // time constant for counter 2 to get different blink rates
#define CT3 150000 // time constant for counter 3 to get different blink rates

void main(void)
{

    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;   // stop watchdog timer
    P2SEL0 = 0; // selects pin 2 as gpio
    P2SEL1 = 0; // selects pin 2 as gpio
    P2DIR |= BIT0; // set port 2.0 as output (ledr)
    P2DIR |= BIT1; // set port 2.1 as output (ledg)
    P2DIR |= BIT2; // set port 2.2 as output (ledb)

    long i,j,k; // longs for the for loop

    i = 0;
    j = 0;
    k = 0;


    for(;;){ // loops forever
        i++; // increments both i and j as counters for separate blink rates
        j++;
        k++;


        if (i > CT1){

            i = 0; P2OUT ^= BIT0; // if i is greater than the counter value, reset and toggle led
        }


        if (j > CT2){

            j = 0; P2OUT ^= BIT1; // if j is greater than the counter value, reset and toggle led

        }

        if (k > CT3){
            k = 0; P2OUT ^= BIT2;
        }





    }



}
