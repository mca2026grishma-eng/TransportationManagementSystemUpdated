using System;

public abstract class Transportation
{
    private int vehicleId;
    private string vehicleName;
    private string engineType;

    public Transportation(int id, string name, string engine)
    {
        vehicleId = id;
        vehicleName = name;
        engineType = engine;
    }

    public int GetVehicleId()
    {
        return vehicleId;
    }

    public string GetVehicleName()
    {
        return vehicleName;
    }

    public string GetEngineType()
    {
        return engineType;
    }

    public void SetVehicleId(int id)
    {
        vehicleId = id;
    }

    public void SetVehicleName(string name)
    {
        vehicleName = name;
    }

    public void SetEngineType(string engine)
    {
        engineType = engine;
    }

    public virtual void DisplayDetails()
    {
        Console.WriteLine("Vehicle ID     : " + vehicleId);
        Console.WriteLine("Vehicle Name   : " + vehicleName);
        Console.WriteLine("Engine Type    : " + engineType);
    }

    public abstract void StartJourney();
}