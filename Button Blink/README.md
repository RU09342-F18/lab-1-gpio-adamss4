# Button Blink

The Button Blink was completed on the MSP430G2553 and FR2311. The code between the two
is nearly identical, with the exception of the port of the button, the port of the LED,
and how the pins are set up in GPIO mode. Both the G2553 and FR2311 have both the button
and the LED on pin 1, but the FR2311 has a two bit select to set a pin as GPIO, so the
code P1SEL0 = 0; and P1SEL1 = 0; were used to set pin 1 as GPIO. Both boards have their
red LED on port 1.0, but the FR2311's button is on port 1.1, so the code to set that port 
as output is P1DIR &= ~(BIT1);. Due to the button being on port 1.1, the pull up resistor
must also be enabled on the same port. Similar to setting the direction, the only change
between the code of the two boards is the bit macro used. To toggle the button, the interrupt
approach was used insead of polling. Instead of setting up a loop to poll for the button press, 
interrupt was enabled on the port of the button for both, and an interrupt service routine was
used to toggle the LED on or off. The ISR for both boards is similar, the only difference again
being the port of the button.