# Simple Blink
For the simple blink the MSP430G2553 and F5529 were selected. Both boards are similar,
and the code for each is also very similar. The red LED for both boards is tied to pin
1.0, so the code for each is identical. The LED was blinked via an infinite while loop
with a delay of 1000000 clock cycles between each toggle. The delay of 100000 causes the 
LED to blink on and off every second. The gpio pin, pin 1 is initialized in the exact same
way for both boards, as well as the direction of the ports, due to the red LED being on the
same pin for both boards.