/*
 * Light bulb firmware
 * Maxime MOREILLON
 * 
 * Board type: Generic ESP8266
 */

#include "IotKernel.h"


// Information to identify the device
#define DEVICE_TYPE "bulb"
#define DEVICE_FIRMWARE_VERSION "0.2.1"

// Pin mapping
#define RELAY_PIN 5
#define LED_PIN 2

IotKernel iot_kernel(DEVICE_TYPE,DEVICE_FIRMWARE_VERSION); 


void setup() {
  IO_setup();
  iot_kernel.init();
  mqtt_config();
}


void loop() {
  iot_kernel.loop();
}
