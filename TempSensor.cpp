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
TempSensor::TempSensor(SensorSystem* sys, string _name, string _link, double minimum, double maximum){
	this->name = _name;
	this->link = _link;
	this->t_min = minimum;
	this->t_max = maximum;
	cout << "Sensor: " << name << " ," << link << "." << endl;
	sys->Register(this);
}
TempSensor::~TempSensor(){
}
void TempSensor::measure(){
	cout <<name<<" : "<< ((rand() % (int)(t_max - t_min)) + t_min) << endl;
}