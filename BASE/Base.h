#pragma once

class Base
{
	static int people_on_base;
	static int vehicles_on_base;
	static double petrol_on_base;
	static double goods_on_base;
public:
	Base() = default;
	Base(int a, int b, double c, double d);
	//~Base();
	int get_people();
	int get_vehicles();
	double get_petrol();
	double get_goods();
	void show()const;
};

