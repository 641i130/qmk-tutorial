# qmk-tutorial
QMK tutorial using the Yampad as a base.

## Prerequisites:

**Packages you'll need (if ur missing anything lmk and i'll add to this):**
`sudo pacman --noconfirm -S git python-pip libffi avr-binutils avr-gcc avr-libc avrdude` 

**A text editor:**
Something that can edit text, whether it be `vim`, `nano` or `vs code`, use something that you're comfortable with

**A directory to put this stuff in:**
I downloaded this in my home directory because it makes it easiest when working with it. (The guide assumes that you downloaded it in your home directory as well.)

### A. Setting up the Dev Environment:

1. Download the git-repo (make sure to have downloaded the packages above):
   `git clone https://github.com/641i130/qmk-tutorial.git`
2. Change directory:
   `cd ~/qmk-tutorial/qmk_firmware/keyboards/yampad/`
3. Allow execution of the qmk compiler:
   `chmod +x ../../bin/qmk`
4. OPTIONAL: add the qmk to path (make it easier to execute):
   `sudo ln -s ../../bin/qmk /usr/local/bin/qmk`

### B. Editing the keyboard layout:

1. Change directory (if you're coming from 4, you don't need to run this):
   `cd ~/qmk-tutorial/qmk_firmware/keyboards/yampad/keymaps/default/`

2. Editing the file:
   `vim keymap.c`

   For keycodes in QMK, use [this reference](https://beta.docs.qmk.fm/using-qmk/simple-keycodes/keycodes).

   For layer types in QMK, use [this reference](https://beta.docs.qmk.fm/using-qmk/software-features/feature_layers).

### C. Compiling the edited firmware:

1. Change directory:
   `cd ~/qmk-tutorial/qmk_firmware/keyboards/yampad`
2. Compile the edited firmware:
   `../../bin/qmk compile -kb yampad -km default` or `qmk compile -kb yampad -km default` depending on step A4.

### D. Flashing the firmware:

1. Change directory:
   `cd ~/qmk-tutorial/qmk_firmware/`
2. Put the micro-controller in flash mode:
   1. Unplug the device.
   2. Hold the reset button while plugging it into the computer.
   3. If key presses are not recognized, then you have about 10 seconds of time to do the next step.
3. Flash the firmware:
   `avrdude -c avr109 -P /dev/ttyACM0 -p atmega32u4 -U flash:w:yampad_default.hex`
   Notes:
   - This step can be annoying if the `/dev/ttyACM0` happens to change for some reason. To find what device its become, run this command:
     `ls /dev/ttyACM*`
   - Its also helpful to have the command typed in or 'uped' (as in pressing the up arrow on the keyboard while in terminal) before you doing step D2.



#### Technical disclaimer:

​	I assembled the keyboard backwards, which resulted in the pin settings needing to be reversed and "ROW2COL" rather than "COL2ROW". This shouldn't affect anything besides correctly assembled yampads.

