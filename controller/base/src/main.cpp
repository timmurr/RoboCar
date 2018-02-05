//base
#include <Arduino.h>
#include "modules/Manager.h"
#include "modules/pins.h"
#include <TimerOne.h>
int i=1;
double time=0;
int time2=0;
volatile bool temp;
Logger* Log;
Manager* manager;
void setup()
{
  Log = new Logger();
  Log->d("BASE");
  manager=new Manager();
  manager->makeRadioConnection(true);
}

void loop()
{
  manager->makeRadioConnection();
  manager->debugRadio();
  manager->ackControl();
  manager->ackSensors();
}
