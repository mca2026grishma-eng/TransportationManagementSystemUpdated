
using System;

class Program
{
    static void Main()
    {
        Transportation t = null;

        Console.WriteLine("====================================================");
        Console.WriteLine("        TRANSPORTATION MANAGEMENT SYSTEM");
        Console.WriteLine("====================================================");

        Console.WriteLine("1. Passenger Transport");
        Console.WriteLine("2. Cargo Transport");
        Console.WriteLine("3. Exit");

        Console.Write("\nEnter Choice : ");
        int mainChoice = Convert.ToInt32(Console.ReadLine());

        if (mainChoice == 3)
        {
            Console.WriteLine("\nThank You!");
            return;
        }

        // ================= PASSENGER TRANSPORT =================

        if (mainChoice == 1)
        {
            Console.WriteLine("\nChoose Vehicle");
            Console.WriteLine("1. Car");
            Console.WriteLine("2. Bike");
            Console.WriteLine("3. Scooter");
            Console.WriteLine("4. Bus");
            Console.WriteLine("5. Train");
            Console.WriteLine("6. Boat");
            Console.WriteLine("7. Ship");
            Console.WriteLine("8. Aeroplane");
            Console.WriteLine("9. Helicopter");

            Console.Write("\nEnter Choice : ");
            int choice = Convert.ToInt32(Console.ReadLine());

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
                    t = new Boat(106, "Speed Boat",
                                 "Outboard Engine", "Motor Boat");
                    break;

                case 7:
                    t = new Ship(107, "Cruise Ship",
                                 "Marine Diesel", 1000);
                    break;

                case 8:
                    t = new Aeroplane(108, "Airbus A320",
                                      "Jet Engine", "AI202");
                    break;

                case 9:
                    t = new Helicopter(109, "Apache",
                                       "Turboshaft", 8);
                    break;

                default:
                    Console.WriteLine("Invalid Choice");
                    return;
            }

            // Passenger details
            Console.Write("\nEnter Passenger ID : ");
            int pid = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter Passenger Name : ");
            string pname = Console.ReadLine();

            // Driver details
            Console.Write("\nEnter Driver ID : ");
            int did = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter Driver Name : ");
            string dname = Console.ReadLine();

            // Journey details
            Console.Write("\nEnter Source : ");
            string source = Console.ReadLine();

            Console.Write("Enter Destination : ");
            string destination = Console.ReadLine();

            Passenger p = new Passenger(pid, pname);
            Driver d = new Driver(did, dname);

            // ================= BUS PASSENGERS =================

            if (t is Bus)
            {
                Console.Write("\nEnter Number of Passengers : ");
                int count = Convert.ToInt32(Console.ReadLine());

                if (count > 50)
                {
                    Console.WriteLine("\nBus Capacity Exceeded!");
                    return;
                }

                Bus bus = (Bus)t;
                bus.SetPassengers(count);
            }

            // Booking confirmation
            Console.Write("\nConfirm Booking (Y/N): ");
            char confirm = Convert.ToChar(Console.ReadLine());

            if (confirm == 'N' || confirm == 'n')
            {
                Console.WriteLine("\nBooking Cancelled.");
                return;
            }

            // ================= RECEIPT =================

            Console.WriteLine("\n====================================================");
            Console.WriteLine("          PASSENGER TRANSPORT RECEIPT");
            Console.WriteLine("====================================================");

            Console.WriteLine();

            p.DisplayPassenger();

            Console.WriteLine();

            d.DisplayDriver();

            Console.WriteLine();

            Console.WriteLine("--------------- Vehicle Details ------------------");
            t.DisplayDetails();

            Console.WriteLine();

            Console.WriteLine("--------------- Journey Details ------------------");
            Console.WriteLine("Source      : " + Passenger.Capitalize(source));
            Console.WriteLine("Destination : " + Passenger.Capitalize(destination));

            Console.WriteLine();

            // Runtime Polymorphism
            t.StartJourney();

            Console.WriteLine("\n====================================================");
            Console.WriteLine("Journey Booked Successfully!");
            Console.WriteLine("Have a Safe Journey!");
            Console.WriteLine("====================================================");
        }

        // ================= CARGO TRANSPORT =================

        else if (mainChoice == 2)
        {
            Console.WriteLine("\nChoose Cargo Vehicle");
            Console.WriteLine("1. Truck");
            Console.WriteLine("2. Train");
            Console.WriteLine("3. Ship");
            Console.WriteLine("4. Aeroplane");

            Console.Write("\nEnter Choice : ");
            int choice = Convert.ToInt32(Console.ReadLine());

            switch (choice)
            {
                case 1:
                    t = new Truck(201, "Ashok Leyland",
                                  "Diesel", 5000);
                    break;

                case 2:
                    t = new Train(202, "Goods Train",
                                  "Electric", 20);
                    break;

                case 3:
                    t = new Ship(203, "Cargo Ship",
                                 "Marine Diesel", 10000);
                    break;

                case 4:
                    t = new Aeroplane(204, "Cargo Aircraft",
                                      "Jet Engine", "CG101");
                    break;

                default:
                    Console.WriteLine("Invalid Choice");
                    return;
            }

            // Driver details
            Console.Write("\nEnter Driver ID : ");
            int did = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter Driver Name : ");
            string dname = Console.ReadLine();

            // Cargo details
            Console.Write("\nEnter Cargo ID : ");
            int cid = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter Cargo Name : ");
            string cname = Console.ReadLine();

            // Journey details
            Console.Write("\nEnter Source : ");
            string source = Console.ReadLine();

            Console.Write("Enter Destination : ");
            string destination = Console.ReadLine();

            Driver d = new Driver(did, dname);
            Cargo c = new Cargo(cid, cname);

            Console.Write("\nConfirm Booking (Y/N): ");
            char confirm = Convert.ToChar(Console.ReadLine());

            if (confirm == 'N' || confirm == 'n')
            {
                Console.WriteLine("\nBooking Cancelled.");
                return;
            }

            // ================= CARGO RECEIPT =================

            Console.WriteLine("\n====================================================");
            Console.WriteLine("            CARGO TRANSPORT RECEIPT");
            Console.WriteLine("====================================================");

            Console.WriteLine();

            d.DisplayDriver();

            Console.WriteLine();

            c.DisplayCargo();

            Console.WriteLine();

            Console.WriteLine("--------------- Vehicle Details ------------------");
            t.DisplayDetails();

            Console.WriteLine();

            Console.WriteLine("--------------- Journey Details ------------------");
            Console.WriteLine("Source      : " + Passenger.Capitalize(source));
            Console.WriteLine("Destination : " + Passenger.Capitalize(destination));

            Console.WriteLine();

            // Runtime Polymorphism
            t.StartJourney();

            Console.WriteLine("\n====================================================");
            Console.WriteLine("Cargo Booked Successfully!");
            Console.WriteLine("====================================================");
        }

        else
        {
            Console.WriteLine("\nInvalid Choice!");
        }
    }
}