
// Battery
#define BATTERY_PIN 3
#define ADC_MULTIPLIER 2.0
#define ADC_CHANNEL ADC1_GPIO3_CHANNEL

// Button on NanoVHF PCB
#define BUTTON_PIN 39

// I2C via connectors on NanoVHF PCB
#define I2C_SCL 2
#define I2C_SDA 42

// Screen (disabled)
#define HAS_SCREEN 0 // Assume no screen present by default to prevent crash...

// GPS via T-Energy-S3 onboard connector
#define HAS_GPS 0
#define GPS_TX_PIN 43
#define GPS_RX_PIN 44

// LoRa
#define USE_SX1262 // E22-900M30S, E22-900M22S, and E22-900MM22S (not E220!) use SX1262
#define USE_SX1268 // E22-400M30S, E22-400M33S, E22-400M22S, and E22-400MM22S use SX1268

#define SX126X_MAX_POWER 22          // SX126xInterface.cpp defaults to 22 if not defined, but here we define it for good practice
#define SX126X_DIO3_TCXO_VOLTAGE 1.8 // E22 series TCXO reference voltage is 1.8V

#define SX126X_CS    10 // EBYTE module's NSS pin // FIXME: rename to SX126X_SS
#define SX126X_SCK   12 // EBYTE module's SCK pin
#define SX126X_MOSI  11 // EBYTE module's MOSI pin
#define SX126X_MISO  13 // EBYTE module's MISO pin
#define SX126X_RESET  2 // EBYTE module's NRST pin
#define SX126X_BUSY  18 // EBYTE module's BUSY pin
#define SX126X_DIO1  17 // EBYTE module's DIO1 pin
#define SX126X_DIO2  19 // EBYTE module's DIO2 pin

#define SX126X_TXEN  3 // Schematic connects EBYTE module's TXEN pin to MCU
#define SX126X_RXEN 14 // Schematic connects EBYTE module's RXEN pin to MCU

#define LORA_CS SX126X_CS     // Compatibility with variant file configuration structure
#define LORA_SCK SX126X_SCK   // Compatibility with variant file configuration structure
#define LORA_MOSI SX126X_MOSI // Compatibility with variant file configuration structure
#define LORA_MISO SX126X_MISO // Compatibility with variant file configuration structure
#define LORA_DIO1 SX126X_DIO1 // Compatibility with variant file configuration structure
