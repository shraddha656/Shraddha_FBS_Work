#include<stdio.h>
void main(){
	int num,rem,reversed=0,original;
	printf("Enter the Number:");
	scanf("%d",&num);
	original=num;
	while(num!=0){
		rem=num%10;
		reversed=reversed*10+rem;
		num=num/10;
	}
	if(original==reversed){
		printf("Number is Palindrom");
	}
	else{
		printf("Number is not Palindrom");
	}
	
}