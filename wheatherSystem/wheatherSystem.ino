#include <DHT11.h>
#define soilSensor A0
#define rainDropSensor A1
#define dht 9
#define gasSensor A2
DHT11 dht11(8);

void setup() {
  // put your setup code here, to run once:
  pinMode(soilSensor,INPUT);
  pinMode(rainDropSensor,INPUT);
  pinMode(dht,INPUT);
  pinMode(gasSensor,INPUT);
  Serial.begin(9600);
}

void loop() {
  int temperature = 0;
  int humidity = 0;
  int result = dht11.readTemperatureHumidity(temperature, humidity);

  
        if (result == 0) {
        Serial.print("Temperature: ");
        Serial.print(temperature);
        Serial.print(" °C\tHumidity: ");
        Serial.print(humidity);
        Serial.println(" %");
        Serial.println("      ");
    } else {
        // Print error message based on the error code.
        Serial.println(DHT11::getErrorString(result));
    }
      

  // put your main code here, to run repeatedly:
  int Soil = analogRead(soilSensor);
  int Rain = analogRead(rainDropSensor);
  //double DHT = digitalRead(dht);
  int Gas = analogRead(gasSensor);

  Serial.print("Soil:-");
  Serial.print(soilSensr());
  Serial.println(" ");

  Serial.print("RainDrop:-");
  Serial.print(rainSensr());
  Serial.println(" ");

  //Serial.println(" DHT:");
  //Serial.print(DHT);

  Serial.print("Gas:-");
  Serial.print(Gas);
  Serial.println(" ");
  delay(1000);
}

int rainSensr() {
  int sensorValue = analogRead(rainDropSensor);  // Read the analog value from sensor
  int outputValue = map(sensorValue, 0, 1023, 255, 0); // map the 10-bit data to 8-bit data
  return outputValue;             // Return analog moisture value
}

int soilSensr() {
  int sensorValue = analogRead(soilSensor);  // Read the analog value from sensor
  int outputValue = map(sensorValue, 0, 1023, 255, 0); // map the 10-bit data to 8-bit data
  return outputValue;             // Return analog moisture value
}
