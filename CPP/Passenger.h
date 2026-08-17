#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Passenger
{
private:
    int passengerId;
    string passengerName;

public:
    Passenger(int id, string name)
    {
        passengerId = id;
        passengerName = name;
    }

    void displayPassenger()
    {
        cout << "--------------- Passenger Details ----------------" << endl;
        cout << "Passenger ID   : " << passengerId << endl;
        cout << "Passenger Name : " << capitalize(passengerName) << endl;
    }

    static string capitalize(string text)
    {
        if (!text.empty())
            text[0] = toupper(text[0]);

        return text;
    }
};

#endif