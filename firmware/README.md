Note for future users:

In order to compile a new version of this firmware, you must clone the qmk firmware repository.

From there you can do the following:

create a new keyboard with, qmk new-keyboard

call that keyboard mysterium_elias and use MCU atmega32A

replace the existining contents of keyboards/mysterium_elias with this firmware folder's contents

edit the keymaps/default/keymap.c for keybindings, config.h for MCU pinouts, and mysterium_elias.h for board layouts

Compile using, qmk compile -kb mysterium_elias -km default

Alternatively, the .hex file to flash directly
