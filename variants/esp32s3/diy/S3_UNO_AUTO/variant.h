
// Battery
#define BATTERY_PIN 3
#define ADC_MULTIPLIER 2.0
#define ADC_CHANNEL ADC1_GPIO3_CHANNEL

// I2C via connectors on NanoVHF PCB
#define I2C_SCL 2
#define I2C_SDA 42

// Screen (disabled)
#define HAS_SCREEN 0 // Assume no screen present by default to prevent crash...

// GPS via T-Energy-S3 onboard connector
#define HAS_GPS 0
#define GPS_TX_PIN 43
#define GPS_RX_PIN 44

#define LED_PIN      20
#define LED_STATE_ON 1

#define BUTTON_PIN 0 // This is the BOOT button
#define BUTTON_NEED_PULLUP

#define PIN_BUZZER 46

// LoRa SPI/pins common for S3_UNO modules
#define LORA_MOSI  11
#define LORA_MISO  13
#define LORA_SCK   12
#define LORA_CS    10
#define LORA_RESET  2

// Keep classic SX127x IRQ mapping
#define LORA_DIO0 18
#define LORA_DIO1 17
#define LORA_DIO2 19

// Enable radio auto-probing candidates:
// RF95 path + explicit SX1272/SX1276(SX1278) + SX1262 + SX1268 + LR1121
#define USE_RF95
#define USE_SX1272
#define USE_SX1276 // SX1278 works through this path
#define USE_SX1262
#define USE_SX1268
#define USE_LR1121

// SX127x dedicated RF switch pins (separate macros for each profile)
#define SX1272_TXEN 3
#define SX1272_RXEN 14
#define SX1276_TXEN 3
#define SX1276_RXEN 14

// SX126x config
#define SX126X_MAX_POWER 22
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#define TCXO_OPTIONAL

#define SX126X_CS    LORA_CS
#define SX126X_SCK   LORA_SCK
#define SX126X_MOSI  LORA_MOSI
#define SX126X_MISO  LORA_MISO
#define SX126X_RESET LORA_RESET
#define SX126X_BUSY  LORA_DIO1
#define SX126X_DIO1  LORA_DIO0
#define SX126X_DIO2  LORA_DIO2

#define SX126X_TXEN 3
#define SX126X_RXEN 14

// LR1121 pinout
#define LR1121_SPI_MOSI_PIN LORA_MOSI
#define LR1121_SPI_MISO_PIN LORA_MISO
#define LR1121_SPI_SCK_PIN LORA_SCK
#define LR1121_SPI_NSS_PIN LORA_CS
#define LR1121_NRESET_PIN LORA_RESET
#define LR1121_BUSY_PIN LORA_DIO1
#define LR1121_IRQ_PIN LORA_DIO0
#define LR11X0_DIO3_TCXO_VOLTAGE 1.8

