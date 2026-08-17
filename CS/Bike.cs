public class Bike : Landway
{
    private int engineCC;

    public Bike(int id, string name, string engine, int cc)
        : base(id, name, engine)
    {
        engineCC = cc;
    }

    public override void DisplayDetails()
    {
        base.DisplayDetails();
        Console.WriteLine("Engine CC       : " + engineCC);
    }

    public override void StartJourney()
    {
        Console.WriteLine("Bike Journey Started Successfully...");
    }
}