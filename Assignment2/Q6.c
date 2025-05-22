#include<stdio.h>
void main(){
	int price; 
	char response;
	printf("If you are Student then enter 'Y' or not then enter 'N' :");
	scanf(" %c",&response);
	printf("Enter the Price:");
	scanf("%d",&price);
	if(response=='Y'){
		if(price>=500){
			printf("You got 20% discount");
		}
		else{
			printf("You got 10% discount");
		}
	}
	else{
		if(price>=600){
			printf("You got 15% discount");
		}
		else{
			printf("No Discount");
		}
	}
}