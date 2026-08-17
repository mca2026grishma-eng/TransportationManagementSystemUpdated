#ifndef AEROPLANE_H
#define AEROPLANE_H

#include "Airway.h"

class Aeroplane : public Airway
{
private:
    string flightNo;

public:
    Aeroplane(int id, string name, string engine, string flight)
        : Airway(id, name, engine)
    {
        flightNo = flight;
    }

    void displayDetails() override
    {
        Transportation::displayDetails();
        cout << "Flight Number   : " << flightNo << endl;
    }

    void startJourney() override
    {
        cout << "Aeroplane Journey Started Successfully..." << endl;
    }
};

#endif