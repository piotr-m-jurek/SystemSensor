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
TempSensor::TempSensor(SensorSystem* sys, string name, string link, double t_min, double t_max)
	:Sensor(sys, name, link), t_min(t_min), t_max(t_max)
{
	cout << "TempSensor: " << name << " ," << link << "." << endl;
	
}
TempSensor::~TempSensor(){
}
void TempSensor::measure(){
	cout<<"Temperatura " <<name<<" : "<< ((rand() % (int)(t_max - t_min)) + t_min)<<"*C" << endl;
}
