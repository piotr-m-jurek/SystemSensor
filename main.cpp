#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "Sensor.h"
#include "System.h"
#include "TempSensor.h"

int main()
{
	srand(time(NULL));
	SensorSystem* sys = new SensorSystem();

	Sensor* newSensor = new TempSensor(sys, "w kuchni", "COM", +25.0, +40.0);
	newSensor->measure();
	sys->ShowAll();
	delete newSensor;
	delete sys;
	system("pause");

	return 0;
}