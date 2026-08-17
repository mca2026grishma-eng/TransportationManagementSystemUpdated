class Train extends Landway
{
    private int coachNo;

    Train(int id, String name, String engineType, int coachNo)
    {
        super(id, name, engineType);
        this.coachNo = coachNo;
    }

    public void displayDetails()
    {
        super.displayDetails();
        System.out.println("Coach Number   : " + coachNo);
    }

    @Override
    void startJourney()
    {
        System.out.println("Train Journey Started Successfully...");
    }
}