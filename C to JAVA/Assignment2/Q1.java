package Assignment2;

public class Q1 {
    public static void main(String[] args) {
        int num1 = 20;          
        int num2 = 5;           
        char op = '*';          

        if (op == '+') {
            System.out.println("Result: " + (num1 + num2));
        } else if (op == '-') {
            System.out.println("Result: " + (num1 - num2));
        } else if (op == '*') {
            System.out.println("Result: " + (num1 * num2));
        } else if (op == '/') {
            if (num2 != 0)
                System.out.println("Result: " + (num1 / num2));
            else
                System.out.println("Error: Division by zero is not allowed.");
        } else if (op == '%') {
            if (num2 != 0)
                System.out.println("Result: " + (num1 % num2));
            else
                System.out.println("Error: Modulus by zero is not allowed.");
        } else {
            System.out.println("Invalid operator.");
        }
    }
}
