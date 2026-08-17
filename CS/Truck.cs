public class Truck : Landway
{
    private int cargoCapacity;

    public Truck(int id, string name, string engine, int capacity)
        : base(id, name, engine)
    {
        cargoCapacity = capacity;
    }

    public override void DisplayDetails()
    {
        base.DisplayDetails();
        Console.WriteLine("Cargo Capacity  : " + cargoCapacity + " kg");
    }

    public override void StartJourney()
    {
        Console.WriteLine("Truck Journey Started Successfully...");
    }
}