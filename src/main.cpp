#include <Arduino.h>
#include <WiFi.h>

const char * ssid = "viper";
const char * password = ";uM56303";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando a la red WiFi...");
  }

  Serial.println("Conectada a una red Wifi.");

  int numero = 10;
  int *puntero = &numero;

  Serial.print("El valor es: ");
  Serial.println(numero);



  Serial.print("La dirección de memoria de puntero es: ");
  Serial.printf("%p\n", (void*)puntero);

  Serial.print("El valor de *puntero es: ");
  Serial.println(*puntero);
}

void loop() {
  // put your main code here, to run repeatedly:
}