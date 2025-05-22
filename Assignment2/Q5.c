#include<stdio.h>
void main()
{
	int age;
	printf("Enter the Age:");
	scanf("%d",&age);
	if(age<12){
		printf("Child");
	}
	else if(age<=19&&age>=12){
		printf("Teenager");
	}
	else if(age<=59&&age>=20){
		printf("Adult");
	}
	else if(age>=60){
		printf("senior");
	}
}