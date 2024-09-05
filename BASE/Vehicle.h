#pragma once

class Vehicle
{
protected:
	int driver;
	double petrol_amount;
	double tank_volume;
public:
	Vehicle() = default;
	Vehicle(int d, double p, double t) : driver(d), petrol_amount(p), tank_volume(t) {};
	double get_petrol_amount();
	double get_tank_volume();
	void arrive(static int &people_on_base, static int &vehicles_on_base);
	bool leave(static int& people_on_base, static double &petrol_on_base, static int& vehicles_on_base);
	void show()const;
};

