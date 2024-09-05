#include "Bus.h"
#include <iostream>
using namespace std;

double Bus::get_petrol_amount()
{
    return petrol_amount;
}

double Bus::get_tank_volume()
{
    return tank_volume;
}

int Bus::get_max_people()
{
    return max_people;
}

void Bus::arrive(int max_people, int& people_on_base, int& vehicles_on_base)
{
    people_on_base = people_on_base + max_people;
    vehicles_on_base = vehicles_on_base + 1;
}

bool Bus::leave(int max_people, int& people_on_base, double& petrol_on_base, static int& vehicles_on_base)
{
    if (petrol_on_base >= 1 && people_on_base >= 1)
    {
        petrol_on_base = petrol_on_base - 1;
        people_on_base = people_on_base - max_people;
        vehicles_on_base = vehicles_on_base - 1;
        return true;
    }
    else
    {
        return false;
    }
}

void Bus::show() const
{
    cout << "Driver: " << driver << endl  << "People: " << max_people << endl << "Amount of petrol: " << petrol_amount << "Tank volume: " << tank_volume << endl;
}
