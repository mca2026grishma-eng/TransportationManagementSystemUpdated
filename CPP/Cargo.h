#ifndef CARGO_H
#define CARGO_H

#include <iostream>
#include <string>
using namespace std;

class Cargo
{
private:
    int cargoId;
    string cargoName;

public:
    Cargo(int id, string name)
    {
        cargoId = id;
        cargoName = name;
    }

    void displayCargo()
    {
        cout << "---------------- Cargo Details -------------------" << endl;
        cout << "Cargo ID       : " << cargoId << endl;
        cout << "Cargo Name     : " << capitalize(cargoName) << endl;
    }

    static string capitalize(string text)
    {
        if (!text.empty())
            text[0] = toupper(text[0]);

        return text;
    }
};

#endif