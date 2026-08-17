#ifndef SHIP_H
#define SHIP_H

#include "Waterway.h"

class Ship : public Waterway
{
private:
    int capacity;

public:
    Ship(int id, string name, string engine, int cap)
        : Waterway(id, name, engine)
    {
        capacity = cap;
    }

    void displayDetails() override
    {
        Transportation::displayDetails();
        cout << "Cargo Capacity  : " << capacity << endl;
    }

    void startJourney() override
    {
        cout << "Ship Journey Started Successfully..." << endl;
    }
};

#endif