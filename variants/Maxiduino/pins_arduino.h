#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

// UART ISP 
#define UART1_RX (4) // UART_RX
#define UART1_TX (5) // UART_TX

// LCD 8080 (Bit paralell Bus) no SPI0 CLK
#define LCD_RST (37) // LCD Reset
#define LCD_CS0 (36) // LCD Chip select
#define LCD_DC0 (38) // LCD DC Data / Command
#define LCD_WR  (39) // LCD Write / Read
#define LCD_BL  (17) // LCD Backlight en
#define LDC_CLK (-128) // -128 not used on Maxiduino use 808 Bus

// SDCARD shared with ESP32 
#define SDCARD_CLK  (27) // SD Clock 
#define SDCARD_MISO (26) // SD Master in Slave out
#define SDCARD_MOSI (28) // SD Master out Slave in
#define SDCARD_CS0  (29) // SD Chip select

// DVP (Digital Video Port) 
#define CAMERA_PCLK  (47) // Pixel clock
#define CAMERA_XCLK  (46) // Sensor clock
#define CAMERA_HSYNC (45) // Sensor data H-Sync
#define CAMERA_VSYNC (43) // Sensor data V-Sync
#define CAMERA_PWDN  (44) // Sensor Power down 
#define CAMERA_RST   (42) // Sensor Reset 
#define CAMERA_SDA   (40) // Sensor I2C_SDA
#define CAMERA_SCL   (41) // Sensor I2C_CLK

// MIC (I2S) 
#define MIC_BCK  (18) // Serial data clock 
#define MIC_WS   (19) // Serial data word select
#define MIC_DAT3 (20) // Serial data output

// DAC (I2S) 
#define DAC_I2S_BCK (35) // Serial data clock 
#define DAC_I2S_WS  (33) // Serial data word select
#define DAC_I2S_DA  (34) // Serial data output

// I2C 
#define I2C1_SDA (31) // I2C1 Data
#define I2C1_SCL (30) // I2C1 Clock

// ESP32 
#define ESP32_SPI_CS (25) // SPI chip select for ESP32
#define ESP32_EN     (8) // ESP32 enable
#define ESP32_READY  (9) // ESP32 Ready Input
#define ESP32_RX     (7) // ESP32 UART Rx
#define ESP32_TX     (6) // ESP32 UART Tx

// RGB LED
#define RGB_LED_R (13) // RGB LED channel R
#define RGB_LED_G (12) // RGB LED channel G
#define RGB_LED_B (14) // RGB LED channel B

// flash filesystem config
#define FLASH_FS_ADDR (0xD00000)
#define FLASH_FS_SIZE (0x300000)

#endif /* Pins_Arduino_h */
