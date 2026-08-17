class Helicopter extends Airway
{
    private int maxPassengers;

    Helicopter(int id, String name, String engineType, int maxPassengers)
    {
        super(id, name, engineType);
        this.maxPassengers = maxPassengers;
    }

    @Override
    public void displayDetails()
    {
        super.displayDetails();
        System.out.println("Maximum Capacity : " + maxPassengers);
    }

    @Override
    void startJourney()
    {
        System.out.println("Helicopter Journey Started Successfully...");
    }
}