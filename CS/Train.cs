public class Train : Landway
{
    private int coaches;

    public Train(int id, string name, string engine, int c)
        : base(id, name, engine)
    {
        coaches = c;
    }

    public override void DisplayDetails()
    {
        base.DisplayDetails();
        Console.WriteLine("Number of Coaches: " + coaches);
    }

    public override void StartJourney()
    {
        Console.WriteLine("Train Journey Started Successfully...");
    }
}