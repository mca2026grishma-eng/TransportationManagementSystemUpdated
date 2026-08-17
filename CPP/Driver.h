#ifndef DRIVER_H
#define DRIVER_H

#include <iostream>
#include <string>
using namespace std;

class Driver
{
private:
    int driverId;
    string driverName;

public:
    Driver(int id, string name)
    {
        driverId = id;
        driverName = name;
    }

    void displayDriver()
    {
        cout << "---------------- Driver Details ------------------" << endl;
        cout << "Driver ID      : " << driverId << endl;
        cout << "Driver Name    : " << capitalize(driverName) << endl;
    }

    static string capitalize(string text)
    {
        if (!text.empty())
            text[0] = toupper(text[0]);

        return text;
    }
};

#endif