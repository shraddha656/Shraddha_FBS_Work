package Assignment2;

public class Q5 {
    public static void main(String[] args) {
        float price = 550.0f;       // Hardcoded price
        char isStudent = 'y';       // Hardcoded student status
        float discount = 0.0f;
        float finalAmount;

        if (isStudent == 'y' || isStudent == 'Y') {
            if (price > 500) {
                discount = 0.20f * price;
            } else {
                discount = 0.10f * price;
            }
        } else {
            if (price > 600) {
                discount = 0.15f * price;
            } else {
                discount = 0.0f;
            }
        }

        finalAmount = price - discount;

        System.out.println("Discount: " + discount);
        System.out.println("Amount to be paid: " + finalAmount);
        System.out.println("Thank you for shopping with us!");
        System.out.println("Have a great day!");
        System.out.println("Please visit us again!");
    }
}
