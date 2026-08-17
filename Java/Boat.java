class Boat extends Waterway
{
    private String boatType;

    Boat(int id, String name, String engineType, String boatType)
    {
        super(id, name, engineType);
        this.boatType = boatType;
    }

    public void displayDetails()
    {
        super.displayDetails();
        System.out.println("Boat Type      : " + boatType);
    }

    @Override
    void startJourney()
    {
        System.out.println("Boat Journey Started Successfully...");
    }
}