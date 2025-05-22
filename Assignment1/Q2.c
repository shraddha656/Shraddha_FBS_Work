#include<stdio.h>
void main()
{
	int num,first,second,third,reversed,original;
	printf("Enter the 3 digit number:");
	scanf("%d",&num);
	if(num>=100&&num<=999){
		original=num;
		first=num/100;
		num=num%100;
		second=num/10;
		third=num%10;
		
		reversed=third*100+second*10+first;
		
		if(original==reversed){
			printf("Number is Palindrom");
		}
		else{
			printf("Number is not Palindrom");
		}
    }
    else{
    	printf("Enter a valid Number");
	}
}