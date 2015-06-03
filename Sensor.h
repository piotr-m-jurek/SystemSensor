#pragma once
#include <iostream>
#include <string>
#include "System.h"
using namespace std;


class Sensor{
private:
protected:
	string name, link;

public:
	double current_measure;
	Sensor();
	Sensor(SensorSystem* sys, string _name, string _link);
	virtual ~Sensor();
	virtual void measure(SensorSystem* sys) = 0;
	virtual string ToString();
	//void CriticalValue();
};