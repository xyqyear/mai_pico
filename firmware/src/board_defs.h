/*
 * Mai Controller Board Definitions
 * WHowe <github.com/whowechina>
 */

#if defined BOARD_MAI_PICO

#define I2C_PORT i2c1
#define I2C_SDA 26
#define I2C_SCL 27
#define I2C_FREQ 400*1000

#define RGB_PIN 16
#define RGB_ORDER GRB // or RGB
#define RGB_BUTTON_MAP { 4, 5, 6, 7, 0, 1, 2, 3, 8, 9, 10, 11 }

#define BUTTON_DEF { 15, 12, 13, 14, 8, 9, 10, 11, 12, 0, 1, 2}

/* HID Keycode: https://github.com/hathach/tinyusb/blob/master/src/class/hid/hid.h */
// P1: WEDCXZAQ3(F1)(F2)(F3) P2: (Numpad)89632147*(F1)(F2)(F3)
#define BUTTON_NKRO_MAP_P1 "\x1a\x08\x07\x06\x1b\x1d\x04\x14\x20\x3a\x3b\x3c"
#define BUTTON_NKRO_MAP_P2 "\x60\x61\x5e\x5b\x5a\x59\x5c\x5f\x55\x3a\x3b\x3c"

#define TOUCH_MAP { A8, E8, D8, B7, A7, E7, D7, B6, A6, E6, D6, A5, \
                    B5, E5, C2, C1, D5, A4, B4, E4, D4, A3, B3, E3, \
                    D3, A2, B2, E2, D2, B1, A1, E1, D1, B8 }
#else

#endif
