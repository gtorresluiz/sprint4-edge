#include "ArduinoJson.h"
#include "EspMQTTClient.h"
// MQTT Configuracoes
EspMQTTClient client{
 "Wokwi-GUEST", //SSID do WiFi
  "",     // Senha do wifi
  "mqtt.tago.io",  // Endereço do servidor
  "Default",       // Usuario
  "b7dd6c40-6b63-4743-8bb9-37708a72023e",         // Token do device
  "CleanWave",           // Nome do device
  1883             // Porta de comunicação
};
void setup() {
  Serial.begin(9600);
  Serial.println("Conectando WiFi");
  while (!client.isWifiConnected()) {
    Serial.print('.'); client.loop(); delay(1000);
  }
  Serial.println("WiFi Conectado");
  Serial.println("Conectando com Servidor MQTT");
  while (!client.isMqttConnected()) {
    Serial.print('.'); client.loop(); delay(1000);
  }
  Serial.println("MQTT Conectado");
}
// Callback da EspMQTTClient
void onConnectionEstablished()
{}
char bufferJson[100];
int presenca = true;
void loop() {
  presenca = random(2); // Gera um valor aleatório entre 0 e 1
  bool presencaBool = presenca == 1; // Converte para booleano

  StaticJsonDocument<300> documentoJson;
  documentoJson["variable"] = "presenca";
  documentoJson["value"] = presencaBool; // Use a variável booleana
  //documentoJson["unit"] = "celsius";
  serializeJson(documentoJson, bufferJson);
  Serial.println(bufferJson);
  client.publish("topicoCleanWave", bufferJson);
  delay(5000);
  client.loop();
}
