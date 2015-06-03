#pragma once
#include "Sensor.h"
using namespace std;

class TempSensor : public Sensor
{
protected:
	double t_min, t_max, t_crit;	
public:
	TempSensor();
	TempSensor(SensorSystem* sys,string _name,string _link,double minimum,double maximum, double t_crit);
	~TempSensor();
	void measure(SensorSystem* sys);
};