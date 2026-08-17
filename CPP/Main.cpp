#include <iostream>
#include <string>
#include <ctime>

#include "Transportation.h"
#include "Landway.h"
#include "Waterway.h"
#include "Airway.h"

#include "Car.h"
#include "Bike.h"
#include "Scooter.h"
#include "Bus.h"
#include "Train.h"
#include "Boat.h"
#include "Ship.h"
#include "Aeroplane.h"
#include "Helicopter.h"
#include "Truck.h"

#include "Passenger.h"
#include "Driver.h"
#include "Cargo.h"

using namespace std;

string capitalize(string text)
{
    if (!text.empty())
        text[0] = toupper(text[0]);

    return text;
}

int main()
{
    Transportation* t = nullptr;

    cout << "====================================================" << endl;
    cout << "        TRANSPORTATION MANAGEMENT SYSTEM" << endl;
    cout << "====================================================" << endl;

    cout << "1. Passenger Transport" << endl;
    cout << "2. Cargo Transport" << endl;
    cout << "3. Exit" << endl;

    int mainChoice;
    cout << "\nEnter Choice : ";
    cin >> mainChoice;
    cin.ignore();

    if (mainChoice == 3)
    {
        cout << "\nThank You!" << endl;
        return 0;
    }

    // ================= PASSENGER TRANSPORT =================

    if (mainChoice == 1)
    {
        cout << "\nChoose Vehicle" << endl;
        cout << "1. Car" << endl;
        cout << "2. Bike" << endl;
        cout << "3. Scooter" << endl;
        cout << "4. Bus" << endl;
        cout << "5. Train" << endl;
        cout << "6. Boat" << endl;
        cout << "7. Ship" << endl;
        cout << "8. Aeroplane" << endl;
        cout << "9. Helicopter" << endl;

        int choice;
        cout << "\nEnter Choice : ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
            case 1:
                t = new Car(101, "Swift", "Petrol", 5);
                break;

            case 2:
                t = new Bike(102, "Royal Enfield", "Petrol", 350);
                break;

            case 3:
                t = new Scooter(103, "Activa", "Petrol", 125);
                break;

            case 4:
                t = new Bus(104, "Volvo", "Diesel", 50);
                break;

            case 5:
                t = new Train(105, "Vande Bharat", "Electric", 8);
                break;

            case 6:
                t = new Boat(106, "Speed Boat", "Outboard Engine", "Motor Boat");
                break;

            case 7:
                t = new Ship(107, "Cruise Ship", "Marine Diesel", 1000);
                break;

            case 8:
                t = new Aeroplane(108, "Airbus A320", "Jet Engine", "AI202");
                break;

            case 9:
                t = new Helicopter(109, "Apache", "Turboshaft", 8);
                break;

            default:
                cout << "Invalid Choice" << endl;
                return 0;
        }

        int passengerId;
        string passengerName;

        cout << "\nEnter Passenger ID : ";
        cin >> passengerId;
        cin.ignore();

        cout << "Enter Passenger Name : ";
        getline(cin, passengerName);

        int driverId;
        string driverName;

        cout << "\nEnter Driver ID : ";
        cin >> driverId;
        cin.ignore();

        cout << "Enter Driver Name : ";
        getline(cin, driverName);

        string source;
        string destination;

        cout << "\nEnter Source : ";
        getline(cin, source);

        cout << "Enter Destination : ";
        getline(cin, destination);

        Passenger p(passengerId, passengerName);
        Driver d(driverId, driverName);

        // Bus passenger count
        if (choice == 4)
        {
            int count;

            cout << "\nEnter Number of Passengers : ";
            cin >> count;

            if (count > 50)
            {
                cout << "\nBus Capacity Exceeded!" << endl;
                delete t;
                return 0;
            }

            Bus* bus = dynamic_cast<Bus*>(t);
            bus->setPassengers(count);
        }

        char confirm;

        cout << "\nConfirm Booking (Y/N): ";
        cin >> confirm;

        if (confirm == 'N' || confirm == 'n')
        {
            cout << "\nBooking Cancelled." << endl;
            delete t;
            return 0;
        }

        // ================= RECEIPT =================

        cout << "\n====================================================" << endl;
        cout << "          PASSENGER TRANSPORT RECEIPT" << endl;
        cout << "====================================================" << endl;

        cout << "\n";

        p.displayPassenger();

        cout << "\n";

        d.displayDriver();

        cout << "\n--------------- Vehicle Details ------------------" << endl;

        t->displayDetails();

        cout << "\n--------------- Journey Details ------------------" << endl;
        cout << "Source      : " << capitalize(source) << endl;
        cout << "Destination : " << capitalize(destination) << endl;

        cout << "\n";

        // Runtime polymorphism
        t->startJourney();

        cout << "\n====================================================" << endl;
        cout << "Journey Booked Successfully!" << endl;
        cout << "Have a Safe Journey!" << endl;
        cout << "====================================================" << endl;
    }

    // ================= CARGO TRANSPORT =================

    else if (mainChoice == 2)
    {
        cout << "\nChoose Cargo Vehicle" << endl;
        cout << "1. Truck" << endl;
        cout << "2. Train" << endl;
        cout << "3. Ship" << endl;
        cout << "4. Aeroplane" << endl;

        int choice;

        cout << "\nEnter Choice : ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
            case 1:
                t = new Truck(201, "Ashok Leyland", "Diesel", 5000);
                break;

            case 2:
                t = new Train(202, "Goods Train", "Electric", 20);
                break;

            case 3:
                t = new Ship(203, "Cargo Ship", "Marine Diesel", 10000);
                break;

            case 4:
                t = new Aeroplane(204, "Cargo Aircraft", "Jet Engine", "CG101");
                break;

            default:
                cout << "Invalid Choice" << endl;
                return 0;
        }

        int driverId;
        string driverName;

        cout << "\nEnter Driver ID : ";
        cin >> driverId;
        cin.ignore();

        cout << "Enter Driver Name : ";
        getline(cin, driverName);

        int cargoId;
        string cargoName;

        cout << "\nEnter Cargo ID : ";
        cin >> cargoId;
        cin.ignore();

        cout << "Enter Cargo Name : ";
        getline(cin, cargoName);

        string source;
        string destination;

        cout << "\nEnter Source : ";
        getline(cin, source);

        cout << "Enter Destination : ";
        getline(cin, destination);

        Driver d(driverId, driverName);
        Cargo c(cargoId, cargoName);

        char confirm;

        cout << "\nConfirm Booking (Y/N): ";
        cin >> confirm;

        if (confirm == 'N' || confirm == 'n')
        {
            cout << "\nBooking Cancelled." << endl;
            delete t;
            return 0;
        }

        // ================= CARGO RECEIPT =================

        cout << "\n====================================================" << endl;
        cout << "            CARGO TRANSPORT RECEIPT" << endl;
        cout << "====================================================" << endl;

        cout << "\n";

        d.displayDriver();

        cout << "\n";

        c.displayCargo();

        cout << "\n--------------- Vehicle Details ------------------" << endl;

        t->displayDetails();

        cout << "\n--------------- Journey Details ------------------" << endl;
        cout << "Source      : " << capitalize(source) << endl;
        cout << "Destination : " << capitalize(destination) << endl;

        cout << "\n";

        t->startJourney();

        cout << "\n====================================================" << endl;
        cout << "Cargo Booked Successfully!" << endl;
        cout << "====================================================" << endl;
    }

    else
    {
        cout << "\nInvalid Choice!" << endl;
    }

    delete t;

    return 0;
}