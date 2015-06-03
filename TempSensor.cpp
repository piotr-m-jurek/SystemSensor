#pragma once
#include <iostream>
#include <string>
#include "Sensor.h"
#include "System.h"
#include "TempSensor.h"
using namespace std;

TempSensor::TempSensor(){
	cout << "TempSensor default constructor" << endl;
}
TempSensor::TempSensor(SensorSystem* sys, string name, string link, double t_min, double t_max, double t_crit)
	:Sensor(sys, name, link), t_min(t_min), t_max(t_max), t_crit(t_crit)
{
	cout << "TempSensor: " << name << " ," << link << "." << endl;
	
}
TempSensor::~TempSensor(){
}
void TempSensor::measure(SensorSystem* sys){
	current_measure = ((rand() % (int)(t_max - t_min)) + t_min);
	cout<<"Temperatura " <<name<<" : "<<current_measure<<"*C" << endl;
	if (t_crit<=current_measure)
	{
		sys->CriticalValue(this);
	};

}
