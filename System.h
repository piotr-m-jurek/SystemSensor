#pragma once
#include <iostream>
#include <vector>
#include "Sensor.h"
#include <fstream>
using namespace std;

class Sensor;

class SensorSystem
{
private:
protected:
	vector <Sensor*> sensors;
public:
	SensorSystem();
	virtual ~SensorSystem();
	void Register(Sensor* sensor);
	void ShowAll();
	void MeasureAll();
	void CriticalValue(Sensor* sensor);
	void MeasureToFile();

};