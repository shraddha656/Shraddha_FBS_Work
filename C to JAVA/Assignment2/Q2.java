package Assignment2;

public class Q2 {
    public static void main(String[] args) {
        int Side1 = 100;
        int Side2 = 100;
        int Side3 = 100;

        if (Side1 == Side2 && Side2 == Side3) {
            System.out.println("The triangle is equilateral.");
        } else if (Side1 == Side2 || Side2 == Side3 || Side1 == Side3) {
            System.out.println("The triangle is isosceles.");
        } else {
            System.out.println("The triangle is scalene.");
        }
    }
}
