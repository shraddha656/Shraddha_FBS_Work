package Assignment1;

public class Palindrome {

	public static void main(String[] args) {
		int n = 131;
	    int a = n;

	    int first_digit = n / 100;        
	    int middle_digit = (n / 10) % 10;  
	    int last_digit = n % 10;           

	    if (first_digit == last_digit) {
	        System.out.println(a + " is a Palindrome");
	    } else {
	        System.out.println(a + " is NOT a Palindrome");
	    }
	}
}
