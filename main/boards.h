#pragma once 

#include "sdkconfig.h"

// Custom board
#ifdef CONFIG_VK_BOARD_CUSTOM
#include "custom_board.h"
#endif

// Olimex EVB 
#ifdef CONFIG_VK_BOARD_OLIMEX_EVB
#define ACTUATORS_GPIO { 32, 33 }
#define ACTUATORS_TOUT { 10, 10}
#define STATUS_LED_GPIO -1
#define RESET_BUTTON_GPIO 34
#define I2C_SCL_GPIO 16
#define I2C_SDA_GPIO 13
#define I2C_FREQ 100000
#define RTC_DRIVER
#define RTC_DRIVER_PCF8563
#endif