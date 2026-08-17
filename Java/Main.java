import java.util.Scanner;
import java.time.LocalDate;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;

public class Main {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        Transportation t = null;
        Passenger p = null;
        Driver d = null;
        Cargo c = null;

        System.out.println("====================================================");
        System.out.println("        TRANSPORTATION MANAGEMENT SYSTEM");
        System.out.println("====================================================");

        System.out.println("1. Passenger Transport");
        System.out.println("2. Cargo Transport");
        System.out.println("3. Exit");

        System.out.print("\nEnter Choice : ");
        int mainChoice = sc.nextInt();
        sc.nextLine();

        if (mainChoice == 3) {
            System.out.println("\nThank You!");
            sc.close();
            return;
        }

        // ================= PASSENGER =================

        if (mainChoice == 1) {

            System.out.println("\nChoose Vehicle");
            System.out.println("1. Car");
            System.out.println("2. Bike");
            System.out.println("3. Scooter");
            System.out.println("4. Bus");
            System.out.println("5. Train");
            System.out.println("6. Boat");
            System.out.println("7. Ship");
            System.out.println("8. Aeroplane");
            System.out.println("9. Helicopter");

            System.out.print("\nEnter Choice : ");
            int choice = sc.nextInt();
            sc.nextLine();

            switch (choice) {

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
                    System.out.println("Invalid Choice");
                    sc.close();
                    return;
            }

            System.out.print("\nEnter Passenger ID : ");
            int pid = sc.nextInt();
            sc.nextLine();

            System.out.print("Enter Passenger Name : ");
            String pname = sc.nextLine();

            System.out.print("\nEnter Driver ID : ");
            int did = sc.nextInt();
            sc.nextLine();

            System.out.print("Enter Driver Name : ");
            String dname = sc.nextLine();

            System.out.print("\nEnter Source : ");
            String source = sc.nextLine();

            System.out.print("Enter Destination : ");
            String destination = sc.nextLine();

            p = new Passenger(pid, pname);
            d = new Driver(did, dname);

            if (t instanceof Bus) {

                System.out.print("\nEnter Number of Passengers : ");
                int count = sc.nextInt();

                if (count > 50) {
                    System.out.println("\nBus Capacity Exceeded!");
                    sc.close();
                    return;
                }

                ((Bus) t).setPassengers(count);
            }

            System.out.print("\nConfirm Booking (Y/N): ");
            char ch = sc.next().charAt(0);

            if (ch == 'N' || ch == 'n') {
                System.out.println("\nBooking Cancelled.");
                sc.close();
                return;
            }

            LocalDate date = LocalDate.now();
            LocalTime time = LocalTime.now();
            DateTimeFormatter tf = DateTimeFormatter.ofPattern("hh:mm a");

            System.out.println("\n====================================================");
            System.out.println("          PASSENGER TRANSPORT RECEIPT");
            System.out.println("====================================================");
            System.out.println("Date : " + date);
            System.out.println("Time : " + time.format(tf));
            System.out.println();

            p.displayPassenger();
            System.out.println();

            d.displayDriver();
            System.out.println();

            t.displayDetails();
            System.out.println();

            System.out.println("--------------- Journey Details ------------------");
            System.out.println("Source      : " + Passenger.capitalize(source));
            System.out.println("Destination : " + Passenger.capitalize(destination));
            System.out.println();

            t.startJourney();

            System.out.println("\n====================================================");
            System.out.println("Journey Booked Successfully!");
            System.out.println("Have a Safe Journey!");
            System.out.println();
            System.out.println("Thank You for Choosing Our Transportation Service!");
            System.out.println("We Wish You a Pleasant and Safe Journey.");
            System.out.println("Visit Again!");
            System.out.println("====================================================");
        }

        // ================= CARGO =================

        else if (mainChoice == 2) {

            System.out.println("\nChoose Cargo Vehicle");
            System.out.println("1. Truck");
            System.out.println("2. Train");
            System.out.println("3. Ship");
            System.out.println("4. Aeroplane");

            System.out.print("\nEnter Choice : ");
            int choice = sc.nextInt();
            sc.nextLine();

            switch (choice) {

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
                    System.out.println("Invalid Choice");
                    sc.close();
                    return;
            }

            System.out.print("\nEnter Driver ID : ");
            int did = sc.nextInt();
            sc.nextLine();

            System.out.print("Enter Driver Name : ");
            String dname = sc.nextLine();

            System.out.print("\nEnter Cargo ID : ");
            int cid = sc.nextInt();
            sc.nextLine();

            System.out.print("Enter Cargo Name : ");
            String cname = sc.nextLine();

            System.out.print("Enter Source : ");
            String source = sc.nextLine();

            System.out.print("Enter Destination : ");
            String destination = sc.nextLine();

            d = new Driver(did, dname);
            c = new Cargo(cid, cname);

            System.out.print("\nConfirm Booking (Y/N): ");
            char ch = sc.next().charAt(0);

            if (ch == 'N' || ch == 'n') {
                System.out.println("\nBooking Cancelled.");
                sc.close();
                return;
            }

            LocalDate date = LocalDate.now();
            LocalTime time = LocalTime.now();
            DateTimeFormatter tf = DateTimeFormatter.ofPattern("hh:mm a");

            System.out.println("\n====================================================");
            System.out.println("            CARGO TRANSPORT RECEIPT");
            System.out.println("====================================================");
            System.out.println("Date : " + date);
            System.out.println("Time : " + time.format(tf));
            System.out.println();

            d.displayDriver();
            System.out.println();

            c.displayCargo();
            System.out.println();

            t.displayDetails();
            System.out.println();

            System.out.println("--------------- Journey Details ------------------");
            System.out.println("Source      : " + Passenger.capitalize(source));
            System.out.println("Destination : " + Passenger.capitalize(destination));
            System.out.println();

            t.startJourney();

            System.out.println("\n====================================================");
            System.out.println("Cargo Booked Successfully!");
            System.out.println("====================================================");
        }

        sc.close();
    }
}