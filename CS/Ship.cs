public class Ship : Waterway
{
    private int capacity;

    public Ship(int id, string name, string engine, int cap)
        : base(id, name, engine)
    {
        capacity = cap;
    }

    public override void DisplayDetails()
    {
        base.DisplayDetails();
        Console.WriteLine("Cargo Capacity  : " + capacity + " kg");
    }

    public override void StartJourney()
    {
        Console.WriteLine("Ship Journey Started Successfully...");
    }
}