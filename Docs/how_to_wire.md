How to connect to STM32

# ![Front](pro58-front.jpg)

# ![Back](pro58-back.jpg)

Thanks ove_ from RCG for the pictures!

Option 1 - SWD

See pictures for SWD pins

Option 2 - Internal serial bootloader

See pictures above for TX and RX pins. Connect here 3V3 USB->UART converter.
Button on the side is NRST a.k.a RESET.

# ![TXRX](DSC_0547.JPG)
# ![Dongle](DSC_0548.JPG)

Than connect BOOT pins accordingly - green wire soldered close to STM32. And desolder the resistor as marked by red circle on the picture above.

# ![BOOT_PINS](DSC_0543.JPG)



When it is connected to 3V3 ( tiny pinheader soldered to the side) -> Bootlader is active after reset, for normal operation keep it unconnected.
