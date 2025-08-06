package Assignment1;

public class Salary {

	public static void main(String[] args) {
		double basic = 4500; // Assign a value to basic
		double da, ta, hra, total;

	    if (basic <= 5000) {
	        da = 0.10 * basic;
	        ta = 0.20 * basic;
	        hra = 0.25 * basic;
	    } else {
	        da = 0.15 * basic;
	        ta = 0.25 * basic;
	        hra = 0.30 * basic;
	    }

	    total = basic + da + ta + hra;

	    System.out.printf("Basic Salary: %.2f\n", basic);
	    System.out.printf("DA: %.2f\n", da);
	    System.out.printf("TA: %.2f\n", ta);
	    System.out.printf("HRA: %.2f\n", hra);
	    System.out.printf("Total Salary: %.2f\n", total);
	}
}