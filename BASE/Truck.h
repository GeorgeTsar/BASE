#pragma once
#include "Vehicle.h"

class Truck : public Vehicle
{
protected:
	int max_load;
public:
	Truck() = default;
	Truck(int d, double p, double t, int m) : Vehicle(d, p, t), max_load(m) {};
	double get_petrol_amount();
	double get_tank_volume();
	int get_max_load();
	void arrive(int max_load, static int& goods_on_base, static int& vehicles_on_base);
	bool leave(int max_load, static double &goods_on_base, int& people_on_base, static double& petrol_on_base, static int& vehicles_on_base);
	void show()const;
};

