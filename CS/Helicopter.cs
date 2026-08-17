public class Helicopter : Airway
{
    private int capacity;

    public Helicopter(int id, string name, string engine, int cap)
        : base(id, name, engine)
    {
        capacity = cap;
    }

    public override void DisplayDetails()
    {
        base.DisplayDetails();
        Console.WriteLine("Maximum Capacity: " + capacity);
    }

    public override void StartJourney()
    {
        Console.WriteLine("Helicopter Journey Started Successfully...");
    }
}