# Off Board Blink

The MSP430G2553 was used for the offboard blink on a breadboard. The code used for the
offboard blink is the exact same code from the multiple blink, so any info on the code
can be found either there or in the comments of the code. To accomplish the offboard blink, 
the G2553 was removed from the launchpad, and placed on a breadboard. The launchpad itself
was used as the power supply. To power the G2553, the VCC pin and GND pin on the launchpad
were plugged into the positive and negative rails of the breadboard respectively, and were
connected to the corresponding pins of the G2553. A bypass capacitor of .1uF was connected in parallel
with the board and VCC to remove any AC noise. The value was selected due to .1uF being 
a good rule of thumb value to use. The anode of the LEDs were connected to the corresponding
output pins, 1.0 for the red and 1.6 for the green, and the cathode was connected in seried with 
a 1k resistor to limit current flow. The reset circuit used a 47K pull up resistor connected to 
the reset pin of the G2553 so that when a button is pressed, the G2553 will reset. The resistor 
value was chosen due to it being the value needed for potential in circuit programming.

# Gif of the circiut demo.
<iframe src="https://giphy.com/embed/2lYOLzRHRoEY8C3J0h" width="270" height="480" frameBorder="0" class="giphy-embed" allowFullScreen></iframe><p><a href="https://giphy.com/gifs/2lYOLzRHRoEY8C3J0h">via GIPHY</a></p>