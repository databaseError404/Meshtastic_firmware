//#define LED_PIN 48 // If defined we will blink this LED

#define I2C_SDA 8 // I2C pins for this board
#define I2C_SCL 9

#define HAS_NEOPIXEL                         // Enable the use of neopixels
#define NEOPIXEL_COUNT 1                     // How many neopixels are connected
#define NEOPIXEL_DATA 48                     // gpio pin used to send data to the neopixels
#define NEOPIXEL_TYPE (NEO_GRB + NEO_KHZ800) // type of neopixels in use

#define USE_RF95
//#define USE_RF95_RFO
#define LORA_RESET 2
#define LORA_SCK  12
#define LORA_MISO 13
#define LORA_MOSI 11
#define LORA_CS   10
#define LORA_DIO0 18
#define LORA_DIO1 17
#define LORA_DIO2 19
#define LORA_DIO3 20

//#define RF95_CS     LORA_CS
//#define RF95_DIO1   LORA_DIO1
//#define RF95_TXEN   LORA_TXEN
//#define RF95_RESET  LORA_RESET
//#define RF95_MAX_POWER 10
