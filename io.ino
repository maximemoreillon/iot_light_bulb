void IO_setup(){
  pinMode(LED_PIN, OUTPUT);
  pinMode(RELAY_PIN, OUTPUT);

  digitalWrite(LED_PIN, HIGH); // LED is active LOW
  digitalWrite(RELAY_PIN, LOW);
}

void turn_on(){
  digitalWrite(RELAY_PIN, HIGH);
  Serial.println("[IO] Turning on");
  iot_kernel.device_state = "on";
  iot_kernel.mqtt_publish_state();
}

void turn_off(){
  digitalWrite(RELAY_PIN, LOW);
  Serial.println("[IO] Turning off");
  iot_kernel.device_state = "off";
  iot_kernel.mqtt_publish_state();
}
