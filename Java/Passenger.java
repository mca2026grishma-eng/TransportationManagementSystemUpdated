class Passenger
{
    private int passengerId;
    private String passengerName;

    Passenger(int passengerId, String passengerName)
    {
        this.passengerId = passengerId;
        this.passengerName = passengerName;
    }

    public void displayPassenger()
    {
        System.out.println("--------------- Passenger Details ----------------");
        System.out.println("Passenger ID   : " + passengerId);
        System.out.println("Passenger Name : " + capitalize(passengerName));
    }

    public static String capitalize(String text)
    {
        if(text == null || text.isEmpty())
            return text;

        return text.substring(0,1).toUpperCase() +
               text.substring(1).toLowerCase();
    }
}