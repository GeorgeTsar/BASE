#include "Base.h"
#include <iostream>
using namespace std;


int Base::people_on_base = 100;
int Base::vehicles_on_base = 10;
double Base::petrol_on_base = 1000;
double Base::goods_on_base = 100;

Base::Base(int a, int b, double c, double d)
{
    people_on_base = a;
    vehicles_on_base = b;
    petrol_on_base = c;
    goods_on_base = d;
}

int Base::get_people()
{
    return people_on_base;
}

int Base::get_vehicles()
{
    return vehicles_on_base;
}

double Base::get_petrol()
{
    return petrol_on_base;
}

double Base::get_goods()
{
    return goods_on_base;
}

void Base::show() const
{
    cout << "People on base: " << people_on_base << endl << "Vehicles on base: " << vehicles_on_base << endl << "Petrol on base: " << petrol_on_base << endl << "Goods on base: " << goods_on_base << endl;
}

