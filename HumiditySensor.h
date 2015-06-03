#pragma once
#include "Sensor.h"
using namespace std;

class HumiditySensor : public Sensor
{
protected:
	double h_min, h_max;
public:
	HumiditySensor();
	HumiditySensor(SensorSystem* sys,string _name,string _link,double minimum,double maximum);
	~HumiditySensor();
	void measure();
};
