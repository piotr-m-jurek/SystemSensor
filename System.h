#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Sensor.h"
using namespace std;

class System
{
private:
protected:
	vector <Sensor*> sensors;
public:
	System();
	virtual ~System();
	void Register(Sensor* sensor);
	void ShowAll();
};