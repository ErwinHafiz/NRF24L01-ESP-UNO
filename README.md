# Deskripsi project
Project ini menggunakan NRF24L01 serta dua micro controller yaitu ESP32 sebagai receiver dan Arduino Uno R3 sebagai transmitter.
# NRF24L01
Nrf24l01 merupakan sebuah modul komunikasi nirkabel yang dirancang menggunakan radio 2.4ghz sebagai jalur komunikasinya. Nrf24l01 dapat bertindak sebagai pengirim (transceiver) data atau sebagai penerima (receiver) data. Saat ini Nrf24l01 tersedia dua tipe pertama menggunakan antena dan yang kedua tidak menggunakan antena. Perbedaannya nrf24l01 yang menggunakan antena dapat menjangkau jarak yang lebih jauh sekitar 800meter s/d 1km tergantung kondisi dilapangan seperti kepadatan bangunan ataupun gangguan elektronik lainnya ,sedangkan nrf24l01 tanpa antena hanya dapat menjangkau jarak +- 100 meter dalam kondisi yang optimal.
<div align = "center">
  <img src = "https://github.com/user-attachments/assets/9dd53a18-6808-434c-85c5-08434da49579">

</div>

# Struktur Folder
**- Main**\
**-- main.uno**\
**-- nrf24l01.h**\
**-- nrf24l01.cpp**\


## Folder main.uno 
Digunakan sebagai program utama yang bisa memanggil seluruh fungsi / file yang ada pada .cpp dan .h
## Folder nrf24l01.h 
Digunakan sebagai tempat mendeklarasikan / mendefinisikan fungsi ataupun variabel 
## Folder nrf24l01.cpp 
Digunakan sebgai tempat logic yang ada dari variabel / fungsi yang ada pada folder header (nrf24l01.h)


