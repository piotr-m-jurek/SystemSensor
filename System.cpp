#pragma once
#include <iostream>
#include <string>
#include "Sensor.h"
#include "System.h"
using namespace std;

SensorSystem::SensorSystem()
{
	cout << "System()" << endl;
}

SensorSystem::~SensorSystem()
{
	cout << "~SensorSystem()" << endl;
	for (int i = 0; i < sensors.size(); ++i){
		delete sensors[i];
		//sensors[i] = NULL;
	}
	sensors.clear();
}

void SensorSystem::Register(Sensor* sensor)
{
	sensors.push_back(sensor);
}

void SensorSystem::ShowAll(){
	cout << endl << "wyswietlenie wszystkich:" << endl;
	for (int i = 0; i < sensors.size(); ++i)
	{
		cout << sensors[i]->ToString() << endl;
	}
}