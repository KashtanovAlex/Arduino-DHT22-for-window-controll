#include <DHT.h>
#define DHTPIN 2     // вывод, к которому подключается датчик
#define DHTTYPE DHT22   // DHT 22  (AM2302)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(150);
  // Считывание температуры в цельсиях
  float t = dht.readTemperature();
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");//проверка работы датчика
    return;
  }
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C ");
}
