using System;

public class Driver
{
    private int driverId;
    private string driverName;

    public Driver(int id, string name)
    {
        driverId = id;
        driverName = name;
    }

    public void DisplayDriver()
    {
        Console.WriteLine("---------------- Driver Details ------------------");
        Console.WriteLine("Driver ID      : " + driverId);
        Console.WriteLine("Driver Name    : " + Capitalize(driverName));
    }

    public static string Capitalize(string text)
    {
        if (!string.IsNullOrEmpty(text))
            text = char.ToUpper(text[0]) + text.Substring(1);

        return text;
    }
}