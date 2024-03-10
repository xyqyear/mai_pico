/*
 * Mai Controller Board Definitions
 * WHowe <github.com/whowechina>
 */

#if defined BOARD_MAI_PICO

#define I2C_PORT i2c1
#define I2C_SDA 26
#define I2C_SCL 27
#define I2C_FREQ 400*1000

#define RGB_PIN 17
#define RGB_ORDER GRB // or RGB
#define RGB_BUTTON_MAP { 3, 2, 1, 0, 7, 6, 5, 4, 8, 9, 10, 11 }

#define BUTTON_DEF { 7, 6, 5, 4, 3, 2, 1, 0, 8, 9, 10, 11}

#define BUTTON_PULL_UP { true, true, true, true, true, true, true, true, true, true, true, true }
// true means the button is active high, false means active low
#define BUTTON_ACTIVE_STATE { true, true, true, true, true, true, true, true, false, false, false, false }

/* HID Keycode: https://github.com/hathach/tinyusb/blob/master/src/class/hid/hid.h */
// P1: WEDCXZAQ3(F1)(F2)(F3) P2: (Numpad)89632147*(F1)(F2)(F3)
#define BUTTON_NKRO_MAP_P1 "\x1a\x08\x07\x06\x1b\x1d\x04\x14\x20\x3a\x3b\x3c"
#define BUTTON_NKRO_MAP_P2 "\x60\x61\x5e\x5b\x5a\x59\x5c\x5f\x55\x3a\x3b\x3c"

#define TOUCH_MAP { A3, D3, E3, B2, A2, D2, E2, B1, A1, C1, D1, C2, \
                    A6, D6, E6, B5, A5, D5, E5, B4, A4, D4, E4, B3, \
                    E1, B8, A8, D8, E8, B7, A7, D7, E7, B6 }
#else

#endif
