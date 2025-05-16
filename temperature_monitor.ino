void setup() {
  Serial.begin(9600); // Start Serial Monitor
}

void loop() {
  int sensorValue = analogRead(A0); // Read TMP36 analog value
  float voltage = sensorValue * (5.0 / 1023.0); // Convert to voltage
  float temperatureC = (voltage - 0.5) * 100.0; // TMP36 formula in °C

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000); // Read every 1 second
}