package Assignment1;

public class UpperLowerCase {

	public static void main(String[] args) {
		char ch = 'R'; 

		if (ch >= 'A' && ch <= 'Z')
		{
			System.out.println(ch + " is Uppercase");
		} 
		else if (ch >= 'a' && ch <= 'z') 
		{
			System.out.println(ch + " is Lowercase");
		} 
		else 
		{
			System.out.println(ch + " is not an alphabet");
		}
	}
}

