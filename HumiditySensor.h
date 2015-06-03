#pragma once
#include "Sensor.h"
using namespace std;

class HumiditySensor : public Sensor
{
protected:
	double h_min, h_max,h_crit;
public:
	HumiditySensor();
	HumiditySensor(SensorSystem* sys,string _name,string _link,double minimum,double maximum,double h_crit);
	~HumiditySensor();
	void measure(SensorSystem* sys);
};