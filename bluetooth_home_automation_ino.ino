char data = 0;
int device1 = 8;  // Relay or LED for Device 1
int device2 = 9;  // Relay or LED for Device 2

void setup() {
  Serial.begin(9600);  // Start Bluetooth communication
  pinMode(device1, OUTPUT);
  pinMode(device2, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();
    
    if (data == 'A') {
      digitalWrite(device1, HIGH); // Turn ON device 1
    }
    else if (data == 'a') {
      digitalWrite(device1, LOW);  // Turn OFF device 1
    }
    else if (data == 'B') {
      digitalWrite(device2, HIGH); // Turn ON device 2
    }
    else if (data == 'b') {
      digitalWrite(device2, LOW);  // Turn OFF device 2
    }
  }
}

