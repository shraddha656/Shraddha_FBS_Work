#include<stdio.h>
void sum(int,int);
void main()
{
	int num1,num2;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	sum(num1,num2);
}
void sum(int x,int y)
{
	int res=x+y;
	printf("Addition:%d\n",res);
}