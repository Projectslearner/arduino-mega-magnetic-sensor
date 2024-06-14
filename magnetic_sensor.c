/*
    Project name : Magnetic Sensor
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-magnetic-sensor
*/

const int magneticSensorPin = 2; // Digital pin connected to the magnetic sensor

void setup() {
  pinMode(magneticSensorPin, INPUT); // Set the pin as input
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the state of the magnetic sensor
  int sensorValue = digitalRead(magneticSensorPin);

  // Print the state to the Serial Monitor
  if (sensorValue == HIGH) {
    Serial.println("Magnetic field detected");
  } else {
    Serial.println("No magnetic field detected");
  }

  delay(1000); // Add a small delay to avoid spamming the Serial Monitor
}
