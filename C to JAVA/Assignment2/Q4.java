package Assignment2;

public class Q4 {
    public static void main(String[] args) {
        int marks = 72;  
        
        if (marks > 75) {
            System.out.println("Distinction");
        } else if (marks > 65) {
            System.out.println("First Class");
        } else if (marks > 55) {
            System.out.println("Second Class");
        } else if (marks >= 40) {
            System.out.println("Pass Class");
        } else {
            System.out.println("Fail");
        }
    }
}

