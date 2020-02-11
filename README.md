# Arduino Mini-Projects
 This repository houses Arduino code and Fritzing schematics for four mini-projects that can be completed in thirty minutes or less (depending on the age group). 
 1. Blinking LED: single LED circuit. 
    - The base code lights up the LED for one second, then goes out for one second. This process repeats indefinitely.
 2. Flowing LED: six LED circuit. 
    - Six LEDs will light up one by one from left to right, and then go out one by one from right to left. After that, the LEDs will light up one by one from right to left, and then go out one by one from left to right. This process will repeat indefinitely.
    - Code adapted from: https://www.sunfounder.com/learn/lesson-2-flowing-led-lights-universal-kit.html
 3. Simple LCD: LCD introduction using the Sunfounder LCDs that only requires four wires.
    - LCD Screen will display "hello, world!" on the top row and the time since reset on the bottom row. The LCDsunfounderdemo uses the Sunfounder I2C LCD1602.
    - Code adapted from: https://www.arduino.cc/en/Tutorial/HelloWorld
 4. LCD: normal LCD setup using an external potentiometer and many more wires 
    - LCD Screen will display each character of "girls who code wuz here" on a delay followed by individually delayed "..."s. This exercise uses an LCD with 16 pinheads soldered to the LCD.
 <br>
 
 Used for the 2019-2020 [CCA Girls Who Code](https://www.ccagirlswhocode.weebly.com) Monthly Lecture Series.<br>

<img align = "left" src="https://raw.githubusercontent.com/SamP923/Arduino_Mini-Projects/master/ImagesDiagrams/IMG_LCD.JPG" height = "250"><img src="https://raw.githubusercontent.com/SamP923/Arduino_Mini-Projects/master/ImagesDiagrams/IMG_LCDSF.JPG" height = "250">
 
 ## Fritzing Schematics
<img align = "left" src="https://raw.githubusercontent.com/SamP923/Arduino_Mini-Projects/master/ImagesDiagrams/flowingLEDdemo_6led.png" width = "200">      <img src="https://raw.githubusercontent.com/SamP923/Arduino_Mini-Projects/master/ImagesDiagrams/sunfounderlcd_bb.png" width = "400">
<img align = "center" src="https://raw.githubusercontent.com/SamP923/Arduino_Mini-Projects/master/ImagesDiagrams/LCDdemo.png" width = "400">

<br><br><br>
## Blinking LED Workshop Extra Code Variants
### Line LED
Each LED will light up then turn off in a line from left to right, then do the same pattern from right to left. 
This process will repeat indefinitely.

### Opposite LED
LEDs will alternate between on and off, with odd pins in sync and even pins in sync.
This process will repeat indefinitely.

## Intro to LCD Workshop Extra Code Variants
### Scroll LCD
LCD screen will scroll the "hello, world!" array across the screen. This exercise uses the Sunfounder I2C LCD1602.
Code adapted from: https://www.sunfounder.com/learn/sensor-kit-v2-0-for-arduino/lesson-1-display-by-i2c-lcd1602-sensor-kit-v2-0-for-arduino.html
