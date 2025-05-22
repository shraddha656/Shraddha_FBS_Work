#include<stdio.h>
void main()
{
	int num,fact=1,i=1;
	printf("Enter the number:");
	scanf("%d",&num);
	while(i<=num){
		fact=fact*i;
		i++;
	}
	printf("%d",fact);
}