#include <Arduino.h>
#include "Rte_Task_Scheduler.hpp"

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  Serial.print("HelloWorld!\r\n");

  DoScheduling();
}