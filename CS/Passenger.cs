using System;

public class Passenger
{
    private int passengerId;
    private string passengerName;

    public Passenger(int id, string name)
    {
        passengerId = id;
        passengerName = name;
    }

    public void DisplayPassenger()
    {
        Console.WriteLine("--------------- Passenger Details ----------------");
        Console.WriteLine("Passenger ID   : " + passengerId);
        Console.WriteLine("Passenger Name : " + Capitalize(passengerName));
    }

    public static string Capitalize(string text)
    {
        if (!string.IsNullOrEmpty(text))
            text = char.ToUpper(text[0]) + text.Substring(1);

        return text;
    }
}