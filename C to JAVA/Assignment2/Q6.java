package Assignment2;

public class Q6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		        int num = 30;  // Hardcoded number

		        if (num % 3 == 0 && num % 5 == 0) {
		            System.out.println("Divisible by both");
		        } else if (num % 3 == 0) {
		            System.out.println("Divisible by 3 but not by 5");
		        } else if (num % 5 == 0) {
		            System.out.println("Divisible by 5 but not by 3");
		        } else {
		            System.out.println("Divisible by None");
		        }
		    }
		}


	}

}
