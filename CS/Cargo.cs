using System;

public class Cargo
{
    private int cargoId;
    private string cargoName;

    public Cargo(int id, string name)
    {
        cargoId = id;
        cargoName = name;
    }

    public void DisplayCargo()
    {
        Console.WriteLine("---------------- Cargo Details -------------------");
        Console.WriteLine("Cargo ID       : " + cargoId);
        Console.WriteLine("Cargo Name     : " + Capitalize(cargoName));
    }

    public static string Capitalize(string text)
    {
        if (!string.IsNullOrEmpty(text))
            text = char.ToUpper(text[0]) + text.Substring(1);

        return text;
    }
}