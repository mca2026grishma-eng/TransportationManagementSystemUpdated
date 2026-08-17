abstract class Transportation
{
    private int vehicleId;
    private String vehicleName;
    private String engineType;

    Transportation(int vehicleId, String vehicleName, String engineType)
    {
        this.vehicleId = vehicleId;
        this.vehicleName = vehicleName;
        this.engineType = engineType;
    }

    public int getVehicleId()
    {
        return vehicleId;
    }

    public String getVehicleName()
    {
        return vehicleName;
    }

    public String getEngineType()
    {
        return engineType;
    }

    public void setVehicleId(int vehicleId)
    {
        this.vehicleId = vehicleId;
    }

    public void setVehicleName(String vehicleName)
    {
        this.vehicleName = vehicleName;
    }

    public void setEngineType(String engineType)
    {
        this.engineType = engineType;
    }

    public void displayDetails()
    {
        System.out.println("--------------- Vehicle Details ------------------");
        System.out.println("Vehicle ID     : " + vehicleId);
        System.out.println("Vehicle Name   : " + vehicleName);
        System.out.println("Engine Type    : " + engineType);
    }

    abstract void startJourney();
}