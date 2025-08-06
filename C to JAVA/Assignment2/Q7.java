package Assignment2;

public class Q7 {
    public static void main(String[] args) {
        int age = 45;  // Hardcoded age value — change this as needed

        if (age < 12) {
            System.out.println("Child");
        } else if (age >= 12 && age <= 19) {
            System.out.println("Teenager");
        } else if (age >= 20 && age <= 59) {
            System.out.println("Adult");
        } else if (age >= 60) {
            System.out.println("Senior");
        } else {
            System.out.println("Invalid age input");
        }
    }
}
