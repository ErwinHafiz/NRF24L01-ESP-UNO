#include "nrf24l01.h"

RF24 radio(CEpin, CSNpin); //ce, csn

SensorData receivedData;

/* ESP32 Pin 
MOSI: 23
MISO: 19
SCK: 18
*/ 


void setup_esp_nrf24l01() {
  Serial.begin(115200);
  radio.begin();
  if (!radio.begin()) {
    Serial.println("NRF24L01 esp failed to initialize!");
    while (1);
  } else { 
    Serial.println("NRF24L01 esp succes to initialize!");
  }
  radio.setChannel(108);
  radio.openReadingPipe(1, address);
  radio.setPALevel(RF24_PA_HIGH);
  Serial.println("NRF24L01 esp initialized successfully.");
  radio.printDetails();
  radio.startListening();
}

void read_data_received() {
  if (radio.available()) {

    radio.read(&receivedData, sizeof(receivedData));  // Baca data yang diterima

    Serial.print("Temperature: ");
    Serial.println(receivedData.temperature);
    Serial.print("Humidity: ");
    Serial.println(receivedData.humidity);
    // Serial.print(receivedMessage);

  } 
  
}

