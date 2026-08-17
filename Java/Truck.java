class Truck extends Landway
{
    private double cargoWeight;

    Truck(int id, String name, String engineType, double cargoWeight)
    {
        super(id, name, engineType);
        this.cargoWeight = cargoWeight;
    }

    public void displayDetails()
    {
        super.displayDetails();
        System.out.println("Cargo Weight   : " + cargoWeight + " kg");
    }

    @Override
    void startJourney()
    {
        System.out.println("Truck Journey Started Successfully...");
    }
}