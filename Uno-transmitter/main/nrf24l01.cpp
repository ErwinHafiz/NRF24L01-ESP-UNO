#include "nrf24l01.h"


RF24 radio(CEpin, CSNpin); //ce, csn --> radio object

void setup_nrf24l01() {
  Serial.begin(115200);
  radio.begin();
  if (!radio.begin()) {
    Serial.println("NRF24L01 uno failed to initialize!");
    while (1);
  }else { 
    Serial.println("NRF24L01 initialized successfully.");
  }
  radio.setChannel(108);
  radio.openWritingPipe(address);

  radio.setPALevel(RF24_PA_HIGH);
  
  radio.printDetails();
  radio.stopListening();
}

void read_sensor_value() {

  SensorData dataToSend;
  dataToSend.temperature = random(20,30);  //  suhu
  dataToSend.humidity = random(10,20);     //  kelembaban

  bool ok ; 
  ok = radio.write(&dataToSend, sizeof(dataToSend));    //digunakan untuk mengirimkan data ke object radio sebelumnya
  if (ok)  {
    Serial.println("Data send succes");
    Serial.print("OKOK tempt= ");
    Serial.print( dataToSend.temperature);
  }else { 
    Serial.println("Failed send data");
  }
  Serial.print("data send temperature = ");
  Serial.println( dataToSend.temperature);
  Serial.print("data send humidity = "); 
  Serial.println(dataToSend.humidity); 
  

  delay(5000);  // delay
}
