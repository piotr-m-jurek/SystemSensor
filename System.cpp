#pragma once
#include <iostream>
#include <string>
#include "Sensor.h"
#include "TempSensor.h"
#include "System.h"
using namespace std;

System::System(){cout << "System()" << endl;}
System::~System()
{
	cout << "~System()" << endl;
	for (int i = 0; i < sensors.size(); ++i){
		delete sensors[i];
		//sensors[i] = NULL;
	}
	sensors.clear();
}

void System::Register(Sensor* sensor)
{
	sensors.push_back(sensor);
}
void System::ShowAll(){
	for (int i = 0; i < sensors.size(); ++i)
	{
		cout << sensors[i]->ToString() << endl;
	}
}