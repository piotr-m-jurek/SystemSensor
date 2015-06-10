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
		
		sensors[i]->measure(this);
	}
}

void SensorSystem::CriticalValue(Sensor* sensor){
	cout <<"wartosc krytyczna zostala przekroczona: "<<sensor->current_measure<< " przez sensor: " <<sensor->ToString()<<endl;
}

void SensorSystem::MeasureToFile(){
	cout << "\n\nteraz nastapi zapis do pliku:" << endl;

	ofstream toFile;
	toFile.open("pomiary.txt",ios::out);
	if (toFile.is_open()){
		for (int i = 0; i < sensors.size(); ++i){
			toFile << sensors[i]->ToString() <<"\t"<< sensors[i]->current_measure << endl;
		}
		toFile.close();
	}
	else{
		cout << "nie mozna otworzyc pliku!";
		exit(1);
	}
	


}