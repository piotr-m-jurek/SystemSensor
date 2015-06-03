#pragma once
#include "Sensor.h"
using namespace std;

Sensor::Sensor(){
	cout << "default sensor ctor" << endl;
	}

Sensor::Sensor(SensorSystem* sys, string _name, string _link)
{
	this->name = _name;
	this->link = _link;
	cout << "Sensor: " << name << " ," << link << "." << endl;
	sys->Register(this);
}

Sensor::~Sensor()
{
	cout << "~Sensor" << endl;
}

string Sensor::ToString(){
	return name;
}

//void Sensor::CriticalValue()
//{
//	if(current_measure>)
//	{
//		cout<<"Wartosc krytyczna zostala przekroczona: "<<current_measure<<endl;
//
//	}
//
//}

