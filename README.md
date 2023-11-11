**CleanWave**

O projeto CleanWave é uma solução inovadora que utiliza dispositivos ESP (ESP8266 ou ESP32) para detectar a presença em vasos sanitários, permitindo um monitoramento eficiente e em tempo real por meio da plataforma TagoIO. Este README fornecerá uma visão abrangente do projeto e orientações para configurar e implementar a solução.

### Requisitos de Hardware:

- ESP32
- Sensor de Presença (por exemplo, PIR - Passive Infrared Sensor)
- Conexão à Internet (Wi-Fi)

### Configuração do Ambiente de Desenvolvimento:

**Arduino IDE:**
1. Certifique-se de ter a Arduino IDE instalada em seu computador.
2. Instale as bibliotecas necessárias, como "ArduinoJson" e "EspMQTTClient", utilizando o Gerenciador de Bibliotecas da Arduino IDE.

### Configuração do Projeto:

**TagoIO:**
1. Crie uma conta na plataforma TagoIO (https://tago.io/).
2. Crie um novo "Device" e obtenha o "Token do Device".

**Arduino Code:**
1. Abra o código fornecido na Arduino IDE.
2. Modifique as informações de conexão Wi-Fi (SSID e senha).
3. Substitua os campos em EspMQTTClient com as informações fornecidas pelo TagoIO (servidor, usuário e token do dispositivo).
4. Adapte o código para o tipo de sensor de presença que você está usando.

### Como Funciona:

1. O ESP se conecta à rede Wi-Fi e ao servidor MQTT da TagoIO.
2. Utilizando um sensor de presença, o ESP detecta a presença em um vaso sanitário.
3. Os dados (variável e valor) são formatados em JSON e enviados para a plataforma TagoIO.
4. Os dados são armazenados no TagoIO, permitindo monitoramento em tempo real.
5. O display mostra a variável e o valor, por exemplo, "presenca: true".

O projeto CleanWave oferece uma solução eficaz e escalável para a detecção de presença em vasos sanitários, proporcionando benefícios como eficiência operacional e monitoramento em tempo real. Sinta-se à vontade para adaptar e expandir o código de acordo com as necessidades específicas da empresa.
