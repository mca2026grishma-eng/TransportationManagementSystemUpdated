class Aeroplane extends Airway
{
    private String flightNo;

    Aeroplane(int id, String name, String engineType, String flightNo)
    {
        super(id, name, engineType);
        this.flightNo = flightNo;
    }

    @Override
    public void displayDetails()
    {
        super.displayDetails();
        System.out.println("Flight Number   : " + flightNo);
    }

    @Override
    void startJourney()
    {
        System.out.println("Aeroplane Journey Started Successfully...");
    }
}