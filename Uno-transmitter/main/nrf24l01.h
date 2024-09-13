#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
/* arduino pin 
 ce   ---> 9 
 csn  ---> 10 
 csk  ---> 13 
 MOSI ---> 11 
 MISO ---> 12
*/
const int CEpin = 9  ; // CE pin for radio object
const int CSNpin = 10  ;// CSN pin for radio object

extern RF24 radio;  // CE, CSN
const byte address[6] = "00001"; // alamat


// Struct untuk mengirimkan data
struct SensorData {
  uint16_t  temperature;
  uint16_t  humidity;
} ;


void setup_nrf24l01();
void read_sensor_value();


