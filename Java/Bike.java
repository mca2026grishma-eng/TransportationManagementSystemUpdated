class Bike extends Landway
{
    private int engineCC;

    Bike(int id, String name, String engineType, int engineCC)
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
        System.out.println("Bike Journey Started Successfully...");
    }
}