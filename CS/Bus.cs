public class Bus : Landway
{
    private int capacity;
    private int passengers;

    public Bus(int id, string name, string engine, int cap)
        : base(id, name, engine)
    {
        capacity = cap;
        passengers = 0;
    }

    public void SetPassengers(int count)
    {
        passengers = count;
    }

    public int GetPassengers()
    {
        return passengers;
    }

    public int GetCapacity()
    {
        return capacity;
    }

    public override void DisplayDetails()
    {
        base.DisplayDetails();

        Console.WriteLine("Bus Capacity    : " + capacity);
        Console.WriteLine("Passengers      : " + passengers);
    }

    public override void StartJourney()
    {
        Console.WriteLine("Bus Journey Started Successfully...");
    }
}