package Assignment0;

class BankAccount{
	int acc_No;
	String name;
	double balance;
	static double iRate;

	static {
		
		iRate=10.3;
	}
	int getAcc_No() {
		return acc_No;
	}
	void setAcc_No(int acc_No) {
		this.acc_No = acc_No;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	double getBalance() {
		return balance;
	}
	void setBalance(double balance) {
		this.balance = balance;
	}
	double getiRate() {
		return iRate;
	}
	static void setiRate(double ir) {
		iRate = ir;
	}
	BankAccount(){
		this.acc_No=00000;
		this.name="Not mentioned";
		this.balance=0;
		
	}
	BankAccount(int a,String n,double b){
		this.acc_No=a;
		this.name=n;
		this.balance=b;
		
	}
	void display() {
		System.out.println();
		
		System.out.println("Account Number="+this.acc_No);
		System.out.println("Name="+this.name);
		System.out.println("Balance="+this.balance);
		System.out.println("Intrest Rate="+iRate);
	}
}

class Test3 {

	public static void main(String[] args) {
		
		BankAccount b1=new BankAccount(101,"Abhi",20000);
		b1.display();

		BankAccount b2=new BankAccount(102,"shraddha",5000);
		b2.display();
		BankAccount b3=new BankAccount(7,"Vinayak",1);
		b3.display();
		
		BankAccount.setiRate(8.2);
		b1.display();
		b2.display();
		b3.display();
		
		
		
		
	}

}
