#ifndef CAR_H
#define CAR_H

#include "Landway.h"

class Car : public Landway
{
private:
    int seatingCapacity;

public:
    Car(int id, string name, string engine, int capacity)
        : Landway(id, name, engine)
    {
        seatingCapacity = capacity;
    }

    void displayDetails() override
    {
        Transportation::displayDetails();
        cout << "Seating Capacity: " << seatingCapacity << endl;
    }

    void startJourney() override
    {
        cout << "Car Journey Started Successfully..." << endl;
    }
};

#endif