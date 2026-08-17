class Cargo
{
    private int cargoId;
    private String cargoName;

    Cargo(int cargoId, String cargoName)
    {
        this.cargoId = cargoId;
        this.cargoName = cargoName;
    }

    public void displayCargo()
    {
        System.out.println("---------------- Cargo Details -------------------");
        System.out.println("Cargo ID       : " + cargoId);
        System.out.println("Cargo Name     : " + capitalize(cargoName));
    }

    public static String capitalize(String text)
    {
        if(text == null || text.isEmpty())
            return text;

        return text.substring(0,1).toUpperCase() +
               text.substring(1).toLowerCase();
    }
}