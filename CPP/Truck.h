#ifndef TRUCK_H
#define TRUCK_H

#include "Landway.h"

class Truck : public Landway
{
private:
    int cargoCapacity;

public:
    Truck(int id, string name, string engine, int capacity)
        : Landway(id, name, engine)
    {
        cargoCapacity = capacity;
    }

    void displayDetails() override
    {
        Transportation::displayDetails();
        cout << "Cargo Capacity  : " << cargoCapacity << " kg" << endl;
    }

    void startJourney() override
    {
        cout << "Truck Journey Started Successfully..." << endl;
    }
};

#endif