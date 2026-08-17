class Bus extends Landway
{
    private int capacity;
    private int passengers;

    Bus(int id, String name, String engineType, int capacity)
    {
        super(id, name, engineType);
        this.capacity = capacity;
    }

    public void setPassengers(int passengers)
    {
        this.passengers = passengers;
    }

    @Override
    public void displayDetails()
    {
        super.displayDetails();
        System.out.println("Capacity        : " + capacity);
        System.out.println("Passengers      : " + passengers);
        System.out.println("Available Seats : " + (capacity - passengers));
    }

    @Override
    void startJourney()
    {
        System.out.println("Bus Journey Started Successfully...");
    }
}