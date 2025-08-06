package Assignment1;

public class leapYear {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 int year = 2005;

		    if (year%4==0 && year%100==0 && year%400==0)
		    {
		    	System.out.println("Year is Leap Year");
		    }
		    else{
		    	System.out.println("Year is Not Leap Year");
		    }

	}

}
