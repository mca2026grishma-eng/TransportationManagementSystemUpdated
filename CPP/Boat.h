#ifndef BOAT_H
#define BOAT_H

#include "Waterway.h"

class Boat : public Waterway
{
private:
    string boatType;

public:
    Boat(int id, string name, string engine, string type)
        : Waterway(id, name, engine)
    {
        boatType = type;
    }

    void displayDetails() override
    {
        Transportation::displayDetails();
        cout << "Boat Type       : " << boatType << endl;
    }

    void startJourney() override
    {
        cout << "Boat Journey Started Successfully..." << endl;
    }
};

#endif