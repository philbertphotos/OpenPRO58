How to connect to STM32

# ![Front](pro58_front.jpg)

# ![Back](pro58_back.jpg)

Option 1 - SWD

See pictures for SWD pins

Option 2 - Internal serial bootloader

See pictures above for TX and RX pins. Connect here 3V3 USB->UART converter.

# ![TXRX](DSC_0547.jpg)
# ![Dongle](DSC_0548.jpg)

Than connect BOOT pins accordingly - green wire soldered close to STM32

# ![BOOT_PINS](DSC_0543.jpg)



When it is connected to 3V3 ( tiny pinheader soldered to the side) -> Bootlader is active after reset, for normal operation keep it unconnected.
