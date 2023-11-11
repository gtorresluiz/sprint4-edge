**CleanWave**

Este é um projeto que utiliza um dispositivo ESP (ESP8266 ou ESP32) para detectar a presença em vasos sanitários e enviar essas informações para a plataforma TagoIO usando MQTT. A plataforma TagoIO será usada para armazenar os dados e permitir a visualização em tempo real por meio de um display.

### Requisitos de Hardware:

- ESP32 
- Sensor de Presença (por exemplo, PIR - Passive Infrared Sensor)
- Conexão à Internet (Wi-Fi)

### Configuração do Ambiente de Desenvolvimento:

1. **Arduino IDE:**
   - Certifique-se de ter a Arduino IDE instalada em seu computador.
   - Instale as bibliotecas necessárias, como "ArduinoJson" e "EspMQTTClient", usando o Gerenciador de Bibliotecas da Arduino IDE.

### Configuração do Projeto:

1. **TagoIO:**
   - Crie uma conta na plataforma TagoIO (https://tago.io/).
   - Crie um novo "Device" e obtenha o "Token do Device".

2. **Arduino Code:**
   - Abra o código fornecido no Arduino IDE.
   - Modifique as informações de conexão Wi-Fi (`SSID` e `senha`).
   - Substitua os campos em `EspMQTTClient` com as informações fornecidas pelo TagoIO (servidor, usuário e token do dispositivo).
   - Adapte o código para o tipo de sensor de presença que você está usando.

### Como Funciona:

1. O ESP se conecta à rede Wi-Fi e ao servidor MQTT da TagoIO.
2. Utilizando um sensor de presença, o ESP detecta a presença em um vaso sanitário.
3. Os dados (variável e valor) são formatados em JSON e enviados para a plataforma TagoIO.
4. Os dados são armazenados no TagoIO, permitindo monitoramento em tempo real.
5. O display mostra a variável e o valor, por exemplo, "presenca: true".

Este README fornece uma visão geral do projeto CleanWave, permitindo que a empresa implante um sistema de detecção de presença eficiente em seus vasos sanitários. 
