class Driver
{
    private int driverId;
    private String driverName;

    Driver(int driverId, String driverName)
    {
        this.driverId = driverId;
        this.driverName = driverName;
    }

    public void displayDriver()
    {
        System.out.println("---------------- Driver Details ------------------");
        System.out.println("Driver ID      : " + driverId);
        System.out.println("Driver Name    : " + capitalize(driverName));
    }

    public static String capitalize(String text)
    {
        if(text == null || text.isEmpty())
            return text;

        return text.substring(0,1).toUpperCase() +
               text.substring(1).toLowerCase();
    }
}