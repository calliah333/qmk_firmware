MCU = atmega16u2

BOOTLOADER = atmel-dfu

BOOTMAGIC_ENABLE = no    # Virtual DIP switch configuration
BLUETOOTH_ENABLE = no    # Enable Bluetooth
CONSOLE_ENABLE = no      # Console for debug
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no    # Breathing sleep LED during USB suspend
MIDI_ENABLE = no		 # Disable MIDI
AUDIO_ENABLE = no        # Audio output
BACKLIGHT_ENABLE = no    # Enable keyboard backlight functionality
NKRO_ENABLE = no         # USB Nkey Rollover
UNICODE_ENABLE = no      # Disable Unicode
MOUSEKEY_ENABLE = no     # Mouse keys
EXTRAKEY_ENABLE = yes    # Audio control and System control
RGBLIGHT_ENABLE = no     # Enable keyboard RGB underglow
VIA_ENABLE = no          # VIA
LTO_ENABLE = yes         # Enable Link Time Optimization
SPACE_CADET_ENABLE = no  #Space cadet


COMBO_ENABLE = no
LEADER_ENABLE = no
CUSTOM_MATRIX = no
SPLIT_KEYBOARD = no
