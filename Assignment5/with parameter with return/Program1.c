#include<stdio.h>
int sum(int,int);
void main()
{
	int num1,num2;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	int z=sum(num1,num2);
	printf("Addition:%d",z);
	
}
int sum(int x,int y)
{
	int z= x+y;
	return z;
	
	//printf("Addition:%d\n",res);
}