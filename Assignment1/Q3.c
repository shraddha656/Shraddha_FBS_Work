#include<stdio.h>
void main()
{
	int year;
	printf("Enter a Year:");
	scanf("%d",&year);
	if(year%400==0){
		printf("Year is Leap");
	}
	else if(year%100==0){
		printf("Year is not Leap");
	}
	else if(year%4==0){
		printf("Year is Leap");
	}
	else{
		printf("Year is Leap");
	}
	
}