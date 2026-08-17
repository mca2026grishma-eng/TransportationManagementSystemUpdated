class Ship extends Waterway
{
    private double cargoCapacity;

    Ship(int id, String name, String engineType, double cargoCapacity)
    {
        super(id, name, engineType);
        this.cargoCapacity = cargoCapacity;
    }

    public void displayDetails()
    {
        super.displayDetails();
        System.out.println("Cargo Capacity : " + cargoCapacity + " Tons");
    }

    @Override
    void startJourney()
    {
        System.out.println("Ship Journey Started Successfully...");
    }
}