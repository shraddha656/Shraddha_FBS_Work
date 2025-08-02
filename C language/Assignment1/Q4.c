#include<stdio.h>
void main()
{
	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	if(age>=18){
		printf("Person is Eligible for Votting");
	}
	else{
		printf("Person is not Eligible for Votting");
	}
}