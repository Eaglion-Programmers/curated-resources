public class ElseIf {
    public static void main(String[] args) {
        String coffee = "";

        if (coffee == "Cappuccino"){
            System.out.println("Preparing Cappuccino!");
        }
        else if (coffee == "Espresso"){
            System.out.println("Preparing Espresso!");
        }
        else if (coffee == "Latte"){
            System.out.println("Preparing Latte!");
        }
        else if (coffee == "Black Coffee"){
            System.out.println("Preparing Black Coffee!");
        }
        else{
            System.out.println("Please select a valid option...");
        }
    }
}