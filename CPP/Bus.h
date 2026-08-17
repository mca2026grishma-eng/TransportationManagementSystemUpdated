#ifndef BUS_H
#define BUS_H

#include "Landway.h"

class Bus : public Landway
{
private:
    int capacity;
    int passengers;

public:
    Bus(int id, string name, string engine, int cap)
        : Landway(id, name, engine)
    {
        capacity = cap;
        passengers = 0;
    }

    void setPassengers(int count)
    {
        passengers = count;
    }

    int getPassengers()
    {
        return passengers;
    }

    int getCapacity()
    {
        return capacity;
    }

    void displayDetails() override
    {
        Transportation::displayDetails();

        cout << "Bus Capacity    : " << capacity << endl;
        cout << "Passengers      : " << passengers << endl;
    }

    void startJourney() override
    {
        cout << "Bus Journey Started Successfully..." << endl;
    }
};

#endif