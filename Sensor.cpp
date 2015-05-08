#pragma once
#include <iostream>
#include <string>
#include "Sensor.h"
using namespace std;

Sensor::Sensor(System* sys,string _name, string _link)
{
	this->name = _name;
	this->link = _link;
	cout << "Sensor: " << name << " ," << name << "." << endl;
	sys->Register(this);
}
Sensor::~Sensor()
{
	cout << "~Sensor" << endl;
}

string Sensor::ToString(){
	return name;
}