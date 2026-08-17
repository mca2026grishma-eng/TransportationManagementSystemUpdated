public class Aeroplane : Airway
{
    private string flightNo;

    public Aeroplane(int id, string name, string engine, string flight)
        : base(id, name, engine)
    {
        flightNo = flight;
    }

    public override void DisplayDetails()
    {
        base.DisplayDetails();
        Console.WriteLine("Flight Number   : " + flightNo);
    }

    public override void StartJourney()
    {
        Console.WriteLine("Aeroplane Journey Started Successfully...");
    }
}