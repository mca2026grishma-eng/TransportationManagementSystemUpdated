#ifndef TRANSPORTATION_H
#define TRANSPORTATION_H

#include <iostream>
#include <string>
using namespace std;

class Transportation
{
private:
    int vehicleId;
    string vehicleName;
    string engineType;

public:
    Transportation(int id, string name, string engine)
    {
        vehicleId = id;
        vehicleName = name;
        engineType = engine;
    }

    int getVehicleId()
    {
        return vehicleId;
    }

    string getVehicleName()
    {
        return vehicleName;
    }

    string getEngineType()
    {
        return engineType;
    }

    void setVehicleId(int id)
    {
        vehicleId = id;
    }

    void setVehicleName(string name)
    {
        vehicleName = name;
    }

    void setEngineType(string engine)
    {
        engineType = engine;
    }

    virtual void displayDetails()
    {
        cout << "Vehicle ID     : " << vehicleId << endl;
        cout << "Vehicle Name   : " << vehicleName << endl;
        cout << "Engine Type    : " << engineType << endl;
    }

    virtual void startJourney() = 0;

    virtual ~Transportation() {}
};

#endif