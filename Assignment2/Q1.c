#include<stdio.h>
void main()
{
	int add,sub,mul,div,mod,num1,num2;
	char choice;
	printf("Enter your Choice:");
	scanf("%c",&choice);
	printf("Enter First Number:");
	scanf("%d",&num1);
	printf("Enter second Number:");
	scanf("%d",&num2);
	if(choice=='+'){
		add=num1+num2;
		printf("Addition=%d",add);
	}
	else if(choice=='-'){
		sub=num1-num2;
		printf("substraction=%d",sub);
	}
	else if(choice=='*'){
		mul=num1*num2;
		printf("Multiplication=%d",mul);
	}
	else if(choice=='/'){
		div=num1/num2;
		printf("Division=%d",div);
	}
	else if(choice=='%'){
		mod=num1%num2;
		printf("Modulus=%d",mod);
	}
	
}