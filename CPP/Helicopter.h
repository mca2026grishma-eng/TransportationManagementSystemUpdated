#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "Airway.h"

class Helicopter : public Airway
{
private:
    int capacity;

public:
    Helicopter(int id, string name, string engine, int cap)
        : Airway(id, name, engine)
    {
        capacity = cap;
    }

    void displayDetails() override
    {
        Transportation::displayDetails();
        cout << "Maximum Capacity: " << capacity << endl;
    }

    void startJourney() override
    {
        cout << "Helicopter Journey Started Successfully..." << endl;
    }
};

#endif