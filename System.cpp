#pragma once
#include <iostream>
#include <vector>
#include "Sensor.h"
#include "System.h"
using namespace std;

SensorSystem::SensorSystem()
{
	cout << "System()" << endl;
}

SensorSystem::~SensorSystem()
{
	for (int i = 0; i < sensors.size(); ++i){
		delete sensors[i];
		//sensors[i] = NULL;
	}
	sensors.clear();
	cout << "~SensorSystem()" << endl;
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
void SensorSystem::MeasureAll(){
	for (int i = 0; i < sensors.size(); ++i){
		
		sensors[i]->measure(syst);
	}
}

void SensorSystem::CriticalValue(Sensor* sensor){
	cout <<"wartosc krytyczna zostala przekroczona: "<<sensor->current_measure<< " przez sensor: " <<sensor->ToString()<<endl;
}