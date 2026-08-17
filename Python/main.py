from car import Car
from bike import Bike
from scooter import Scooter
from bus import Bus
from train import Train
from boat import Boat
from ship import Ship
from aeroplane import Aeroplane
from helicopter import Helicopter
from truck import Truck
from passenger import Passenger
from driver import Driver
from cargo import Cargo


def capitalize(text):
    return text.capitalize()


print("====================================================")
print("        TRANSPORTATION MANAGEMENT SYSTEM")
print("====================================================")

print("1. Passenger Transport")
print("2. Cargo Transport")
print("3. Exit")

main_choice = int(input("\nEnter Choice : "))

if main_choice == 3:
    print("\nThank You!")

# ================= PASSENGER TRANSPORT =================

elif main_choice == 1:

    print("\nChoose Vehicle")
    print("1. Car")
    print("2. Bike")
    print("3. Scooter")
    print("4. Bus")
    print("5. Train")
    print("6. Boat")
    print("7. Ship")
    print("8. Aeroplane")
    print("9. Helicopter")

    choice = int(input("\nEnter Choice : "))

    if choice == 1:
        t = Car(101, "Swift", "Petrol", 5)

    elif choice == 2:
        t = Bike(102, "Royal Enfield", "Petrol", 350)

    elif choice == 3:
        t = Scooter(103, "Activa", "Petrol", 125)

    elif choice == 4:
        t = Bus(104, "Volvo", "Diesel", 50)

    elif choice == 5:
        t = Train(105, "Vande Bharat", "Electric", 8)

    elif choice == 6:
        t = Boat(106, "Speed Boat",
                 "Outboard Engine", "Motor Boat")

    elif choice == 7:
        t = Ship(107, "Cruise Ship",
                 "Marine Diesel", 1000)

    elif choice == 8:
        t = Aeroplane(108, "Airbus A320",
                      "Jet Engine", "AI202")

    elif choice == 9:
        t = Helicopter(109, "Apache",
                       "Turboshaft", 8)

    else:
        print("Invalid Choice")
        exit()

    # Passenger details

    pid = int(input("\nEnter Passenger ID : "))
    pname = input("Enter Passenger Name : ")

    # Driver details

    did = int(input("\nEnter Driver ID : "))
    dname = input("Enter Driver Name : ")

    # Journey details

    source = input("\nEnter Source : ")
    destination = input("Enter Destination : ")

    p = Passenger(pid, pname)
    d = Driver(did, dname)

    # Bus passenger capacity

    if isinstance(t, Bus):

        count = int(input("\nEnter Number of Passengers : "))

        if count > 50:
            print("\nBus Capacity Exceeded!")
            exit()

        t.set_passengers(count)

    # Confirmation

    confirm = input("\nConfirm Booking (Y/N): ")

    if confirm.lower() == "n":
        print("\nBooking Cancelled.")
        exit()

    # Receipt

    print("\n====================================================")
    print("          PASSENGER TRANSPORT RECEIPT")
    print("====================================================")

    print()

    p.display_passenger()

    print()

    d.display_driver()

    print()

    print("--------------- Vehicle Details ------------------")
    t.display_details()

    print()

    print("--------------- Journey Details ------------------")
    print("Source      :", capitalize(source))
    print("Destination :", capitalize(destination))

    print()

    # Runtime polymorphism
    t.start_journey()

    print("\n====================================================")
    print("Journey Booked Successfully!")
    print("Have a Safe Journey!")
    print("====================================================")


# ================= CARGO TRANSPORT =================

elif main_choice == 2:

    print("\nChoose Cargo Vehicle")
    print("1. Truck")
    print("2. Train")
    print("3. Ship")
    print("4. Aeroplane")

    choice = int(input("\nEnter Choice : "))

    if choice == 1:
        t = Truck(201, "Ashok Leyland",
                  "Diesel", 5000)

    elif choice == 2:
        t = Train(202, "Goods Train",
                  "Electric", 20)

    elif choice == 3:
        t = Ship(203, "Cargo Ship",
                 "Marine Diesel", 10000)

    elif choice == 4:
        t = Aeroplane(204, "Cargo Aircraft",
                      "Jet Engine", "CG101")

    else:
        print("Invalid Choice")
        exit()

    # Driver details

    did = int(input("\nEnter Driver ID : "))
    dname = input("Enter Driver Name : ")

    # Cargo details

    cid = int(input("\nEnter Cargo ID : "))
    cname = input("Enter Cargo Name : ")

    # Journey details

    source = input("\nEnter Source : ")
    destination = input("Enter Destination : ")

    d = Driver(did, dname)
    c = Cargo(cid, cname)

    # Confirmation

    confirm = input("\nConfirm Booking (Y/N): ")

    if confirm.lower() == "n":
        print("\nBooking Cancelled.")
        exit()

    # Cargo receipt

    print("\n====================================================")
    print("            CARGO TRANSPORT RECEIPT")
    print("====================================================")

    print()

    d.display_driver()

    print()

    c.display_cargo()

    print()

    print("--------------- Vehicle Details ------------------")
    t.display_details()

    print()

    print("--------------- Journey Details ------------------")
    print("Source      :", capitalize(source))
    print("Destination :", capitalize(destination))

    print()

    # Runtime polymorphism
    t.start_journey()

    print("\n====================================================")
    print("Cargo Booked Successfully!")
    print("====================================================")


else:
    print("\nInvalid Choice!")