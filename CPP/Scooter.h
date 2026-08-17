#ifndef SCOOTER_H
#define SCOOTER_H

#include "Landway.h"

class Scooter : public Landway
{
private:
    int engineCC;

public:
    Scooter(int id, string name, string engine, int cc)
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
        cout << "Scooter Journey Started Successfully..." << endl;
    }
};

#endif