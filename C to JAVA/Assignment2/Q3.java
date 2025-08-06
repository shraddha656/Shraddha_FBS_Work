package Assignment2;

public class Q3 {
    public static void main(String[] args) {
        int num1 = 25;
        int num2 = 40;
        int num3 = 35;

        if (num1 >= num2) {
            if (num1 >= num3) {
                System.out.println("Greatest number is: " + num1);
            } else {
                System.out.println("Greatest number is: " + num3);
            }
        } else {
            if (num2 >= num3) {
                System.out.println("Greatest number is: " + num2);
            } else {
                System.out.println("Greatest number is: " + num3);
            }
        }
    }
}

