# Arduino Mini-Projects
 Arduino code and Fritzing diagrams for four mini-projects. Includes examples of code variations.
 1. Blinking LED: single LED circuit
 2. Flowing LED: six LED circuit
 3. Simple LCD: LCD introduction using the Sunfounder LCDs that only requires four wires
 4. LCD: normal LCD setup using an external potentiometer and many more wires <br>
 Used for the 2019-2020 [CCA Girls Who Code](https://www.ccagirlswhocode.weebly.com) Monthly Lecture Series.

<br><br><br>
## Blinking LED Workshop

### Blinking LED
![Blinking LED Diagram](/ImagesDiagrams/blinkingLEDdemo_bb.png)

One LED will light up for one second, then go out for one second. This process will repeat indefinitely.

### Flowing LED
![Flowing LED Diagram](/ImagesDiagrams/flowingLEDdemo_6led.png)

Six LEDs will light up one by one from left to right, and then go out one by one from right to left.
After that, the LEDs will light up one by one from right to left, and then go out one by one from left to right.
This process will repeat indefinitely.
Adapted from: https://www.sunfounder.com/learn/lesson-2-flowing-led-lights-universal-kit.html

### Line LED
Each LED will light up then turn off in a line from left to right, then do the same pattern from right to left. 
This process will repeat indefinitely.

### Opposite LED
LEDs will alternate between on and off, with odd pins in sync and even pins in sync.
This process will repeat indefinitely.




## Intro to LCD Workshop

### Intro LCD (LCDdemo and LCDsunfounderdemo)
![Scroll LCD Diagram](/ImagesDiagrams/sunfounderlcd_bb.png)

LCD Screen will display "hello, world!" on the top row and the time since reset on the bottom row. The LCDsunfounderdemo uses the Sunfounder I2C LCD1602.
Code adapted from: https://www.arduino.cc/en/Tutorial/HelloWorld

### Scroll LCD
LCD screen will scroll the "hello, world!" array across the screen. This exercise uses the Sunfounder I2C LCD1602.
Adapted from: https://www.sunfounder.com/learn/sensor-kit-v2-0-for-arduino/lesson-1-display-by-i2c-lcd1602-sensor-kit-v2-0-for-arduino.html

### GWC LCD
![Regular LCD Diagram](/ImagesDiagrams/LCDdemo.png)
LCD Screen will display each character of "girls who code wuz here" on a delay followed by individually delayed "..."s. This exercise uses an LCD with 16 pinheads soldered to the LCD.


![Regular LCD](/ImagesDiagrams/IMG_LCD.JPG) ![Sunfounder LCD](/ImagesDiagrams/IMG_LCDSF.JPG)
