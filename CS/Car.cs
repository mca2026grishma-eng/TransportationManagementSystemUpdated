public class Car : Landway
{
    private int seatingCapacity;

    public Car(int id, string name, string engine, int capacity)
        : base(id, name, engine)
    {
        seatingCapacity = capacity;
    }

    public override void DisplayDetails()
    {
        base.DisplayDetails();
        Console.WriteLine("Seating Capacity: " + seatingCapacity);
    }

    public override void StartJourney()
    {
        Console.WriteLine("Car Journey Started Successfully...");
    }
}