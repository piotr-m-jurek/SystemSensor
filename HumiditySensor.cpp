#pragma once
#include <iostream>
#include <string>
#include "Sensor.h"
#include "System.h"
#include "HumiditySensor.h"
using namespace std;

HumiditySensor::HumiditySensor(){
	cout << "HumiditySensor default constructor" << endl;
}
HumiditySensor::HumiditySensor(SensorSystem* sys, string name, string link, double h_min, double h_max)
	:Sensor(sys, name, link), h_min(h_min), h_max(h_max)
{
	cout << "HumiditySensor: " << name << " ," << link << "." << endl;

}
HumiditySensor::~HumiditySensor(){
}
void HumiditySensor::measure(){
	cout<<"Wilgotnosc " <<name<<" : "<< ((rand() % (int)(h_max - h_min)) + h_min)<<"%"<< endl;
}
