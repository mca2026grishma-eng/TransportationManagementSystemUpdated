#ifndef BIKE_H
#define BIKE_H

#include "Landway.h"

class Bike : public Landway
{
private:
    int engineCC;

public:
    Bike(int id, string name, string engine, int cc)
        : Landway(id, name, engine)
    {
        engineCC = cc;
    }

    void displayDetails() override
    {
        Transportation::displayDetails();
        cout << "Engine CC       : " << engineCC << endl;
    }

    void startJourney() override
    {
        cout << "Bike Journey Started Successfully..." << endl;
    }
};

#endif