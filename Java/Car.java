class Car extends Landway
{
    private int seats;

    Car(int id, String name, String engineType, int seats)
    {
        super(id, name, engineType);
        this.seats = seats;
    }

    public void displayDetails()
    {
        super.displayDetails();
        System.out.println("Seats          : " + seats);
    }

    @Override
    void startJourney()
    {
        System.out.println("Car Journey Started Successfully...");
    }
}