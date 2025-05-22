#include<stdio.h>
int evenOdd();
void main()
{
	//evenOdd();
	if(evenOdd())
		printf("Even");
	else
		printf("Odd");
}
int evenOdd()
{
	int num;
	printf("Enter the Number:");
	scanf("%d",&num);
	if(num%2==0)
	{
		return 1;
	}
	return 0;
}