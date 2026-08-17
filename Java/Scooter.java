class Scooter extends Landway
{
    private int engineCC;

    Scooter(int id, String name, String engineType, int engineCC)
    {
        super(id, name, engineType);
        this.engineCC = engineCC;
    }

    public void displayDetails()
    {
        super.displayDetails();
        System.out.println("Engine CC      : " + engineCC + " cc");
    }

    @Override
    void startJourney()
    {
        System.out.println("Scooter Journey Started Successfully...");
    }
}