# Multiple Blink
For the multiple blink, the MSP430G2553 and MSP432P401R were used. The code between the 
two boards is similar, but there are some differences including how the watchdog timer
is halted, how the pins are selected for GPIO mode, and the pins that actually have the
LEDs on them also differ. The watchdog timer is stopped using a different macro than the
G2553, but in code, it means the same thing. The G2553 used only has two LED's, a red and 
a green, while the P401R has an RGB LED. The LEDs for the P401R are on pin 2 instead of pin 
1, and the pin select has two bits instead of one, so to select the proper pin for GPIO, the code was
P2SEL0 = 0;, AND P2SEL1 = 0; to ensure that pin2 was set to GPIO. Instead of two ports 
being set as output, three were set, so all 3 RGB LEDs blink at seperate rates. The LEDs
blink via an infinite for loop with preset time constants defined outside of the main function,
which are defined as CT1, CT2, and CT3. The G2553 only has two LEDs, so only CT1 and CT2 
are needed. Outside the loop, the long type variables i, j, and k are defined so inside the
loop they can be incremented. Inside the loop, those three variables are incremented, and
compared inside seperate if statements, which when the value of the variable is greater than
the preset time constants, the number resets, and the LED is toggled. Changing the CTx numbers
increases or decreases the delay. 
