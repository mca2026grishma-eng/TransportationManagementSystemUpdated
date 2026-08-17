public class Boat : Waterway
{
    private string boatType;

    public Boat(int id, string name, string engine, string type)
        : base(id, name, engine)
    {
        boatType = type;
    }

    public override void DisplayDetails()
    {
        base.DisplayDetails();
        Console.WriteLine("Boat Type       : " + boatType);
    }

    public override void StartJourney()
    {
        Console.WriteLine("Boat Journey Started Successfully...");
    }
}