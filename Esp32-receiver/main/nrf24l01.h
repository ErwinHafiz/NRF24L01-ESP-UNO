#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
// ESP32 -> receiver
// CE kabel orange , CSN kuning , CSK hijau  

const int CEpin = 22;
const int CSNpin = 21;
extern RF24 radio;  // CE, CSN 
const byte address[6] = "00001";


// Struct untuk mengirimkan beberapa data sensor
struct SensorData {
  uint16_t temperature;
  uint16_t humidity;
};

void setup_esp_nrf24l01();
void read_data_received();

