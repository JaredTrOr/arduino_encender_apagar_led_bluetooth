#include <SoftwareSerial.h>

// PIN RGB
const int redPin = 2;
const int greenPin = 3;
const int bluePin = 4;

// MODULO BLUETOOTH
const int rxPin = 10;
const int txPin = 11;

SoftwareSerial bluetooth(rxPin, txPin);

void setup() {
  Serial.begin(9600);
  bluetooth.begin(9600);
  
  // Configuración de LED RGB
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  Serial.println("BLUETOOTH LISTO PARA CONECTAR");

  apagarLed();
}

void loop() {
  if (bluetooth.available()) {
    int data = bluetooth.read();
    
    Serial.print("Data que llega desde el dispositivo: ");
    Serial.println(data);

    if (data == '1') {
      encenderLed();
    } else if (data == '0') {
      apagarLed();
    }
  }
}

void encenderLed() {
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
}

void apagarLed() {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
}
