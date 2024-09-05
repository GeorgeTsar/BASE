#pragma once
#include "Vehicle.h"

class Bus : public Vehicle
{
protected:
	int max_people;
public:
	Bus() = default;
	Bus(int d, double p, double t, int m) : Vehicle(d, p, t), max_people(m) {};
	double get_petrol_amount();
	double get_tank_volume();
	int get_max_people();
	void arrive(int max_people, int& people_on_base, int& vehicles_on_base);
	bool leave(int max_people, int& people_on_base, double& petrol_on_base, int& vehicles_on_base);
	void show()const;
};

