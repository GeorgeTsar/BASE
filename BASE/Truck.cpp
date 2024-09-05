#include "Truck.h"
#include <iostream>
using namespace std;

double Truck::get_petrol_amount()
{
    return petrol_amount;
}

double Truck::get_tank_volume()
{
    return tank_volume;
}

int Truck::get_max_load()
{
    return max_load;
}

void Truck::arrive(int max_load, int& goods_on_base, int& vehicles_on_base)
{
    goods_on_base = goods_on_base + max_load;
    vehicles_on_base = vehicles_on_base + 1;
}

bool Truck::leave(int max_load, double& goods_on_base, int& people_on_base, double& petrol_on_base, int& vehicles_on_base)
{
    if (petrol_on_base >= 1 && people_on_base >= 1)
    {
        petrol_on_base = petrol_on_base - 1;
        goods_on_base = goods_on_base - max_load;
        vehicles_on_base = vehicles_on_base - 1;
        return true;
    }
    else
    {
        return false;
    }
}

void Truck::show() const
{
    cout << "Driver: " << driver << endl << "Goods: " << max_load << endl << "Amount of petrol: " << petrol_amount << "Tank volume: " << tank_volume << endl;
}
