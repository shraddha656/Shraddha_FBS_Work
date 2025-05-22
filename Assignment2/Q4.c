#include<stdio.h>
void main(){
	int num;
	printf("Enter the Number:");
	scanf("%d",&num);
	if(num%3==0){
		if(num%5==0){
			printf("Number is Divisible by Both");
		}
		else{
			printf("Number is Divisible by 3 but not by 5");
		}
	}
	else{
		if(num%5==0){
			printf("Number is Divisible by 5 ");
		}
		else{
			printf("Divisible by none");
		}
	}
}