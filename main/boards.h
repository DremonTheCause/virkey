#pragma once 

#include "sdkconfig.h"

// VK1X
#ifdef CONFIG_VK_BOARD_VK1X
    #define HW_BOARD "VK1X"
    #define ACTUATORS_GPIO {18, 5}
    #define ACTUATORS_TOUT {10, 10}
    #define MONITORS_GPIO {26, 27}
    #define MONITORS_INVERT
    #define STATUS_LED_GPIO 32
    #define RESET_BUTTON_GPIO 0
    #define BUZZER_GPIO 19
    #define I2C_SCL_GPIO 16
    #define I2C_SDA_GPIO 13
    #define I2C_FREQ 100000
    #define RTC_DRIVER_DS1672
#endif


// Olimex EVB 
#ifdef CONFIG_VK_BOARD_OLIMEX_EVB
    #define HW_BOARD "OLIMEX_EVB"
    #define ACTUATORS_GPIO {32, 33}
    #define ACTUATORS_TOUT {10, 10}
    #define RESET_BUTTON_GPIO 34
    #define I2C_SCL_GPIO 16
    #define I2C_SDA_GPIO 13
    #define I2C_FREQ 100000
    #define RTC_DRIVER_PCF8563
#endif

// DIYMall RELAY32
#ifdef CONFIG_VK_BOARD_DIYMALL_RELAY32
    #define HW_BOARD "DIYMALL_RELAY32"
    #define ACTUATORS_GPIO {16, 17, 18, 19}
    #define ACTUATORS_TOUT {10, 10, 10, 10}
    #define RESET_BUTTON_GPIO 0
#endif

// TTGO MINI 32
#ifdef CONFIG_VK_BOARD_TTGO_MINI_32
    #define HW_BOARD "TTGO_MINI_32"
    #define ACTUATORS_GPIO {22}
    #define ACTUATORS_TOUT {10}
    #define RESET_BUTTON_GPIO 0
#endif

// TTGO T8
#ifdef CONFIG_VK_BOARD_TTGO_T8
    #define HW_BOARD "TTGO_T8"
    #define ACTUATORS_GPIO {32, 33}
    #define ACTUATORS_TOUT {10}
    #define STATUS_LED_GPIO 21
    #define RESET_BUTTON_GPIO 0
#endif

// ESP32 Generic boards (with free GPIO 0,2,32,33)
#ifdef CONFIG_VK_BOARD_GENERIC_A
    #define HW_BOARD "GENERIC_A"
    #define ACTUATORS_GPIO {32, 33}
    #define ACTUATORS_TOUT {10, 10}
    #define STATUS_LED_GPIO 2
    #define RESET_BUTTON_GPIO 0
#endif
