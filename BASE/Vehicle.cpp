#include "Vehicle.h"
#include <iostream>
using namespace std;

double Vehicle::get_petrol_amount()
{
    return petrol_amount;
}

double Vehicle::get_tank_volume()
{
    return tank_volume;
}

void Vehicle::arrive(static int& people_on_base, static int& vehicles_on_base)
{
    people_on_base = people_on_base + 1;
    vehicles_on_base = vehicles_on_base + 1;
}

bool Vehicle::leave(static int& people_on_base, static double &petrol_on_base, static int& vehicles_on_base)
{
    if (petrol_on_base >= 1 && people_on_base >= 1)
    {
        petrol_on_base = petrol_on_base - 1;
        people_on_base = people_on_base - 1;
        vehicles_on_base = vehicles_on_base - 1;
        return true;
    }
    else
    {
        return false;
    }
}

void Vehicle::show() const
{
    cout << "Driver: " << driver << endl << "Amount of petrol: " << petrol_amount << "Tank volume: " << tank_volume << endl;
}
