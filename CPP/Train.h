#ifndef TRAIN_H
#define TRAIN_H

#include "Landway.h"

class Train : public Landway
{
private:
    int coaches;

public:
    Train(int id, string name, string engine, int c)
        : Landway(id, name, engine)
    {
        coaches = c;
    }

    void displayDetails() override
    {
        Transportation::displayDetails();
        cout << "Number of Coaches: " << coaches << endl;
    }

    void startJourney() override
    {
        cout << "Train Journey Started Successfully..." << endl;
    }
};

#endif