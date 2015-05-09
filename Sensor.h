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
	Sensor();
	Sensor(SensorSystem* sys, string _name, string _link);
	virtual ~Sensor();
	virtual void measure() = 0;
	virtual string ToString();
};