#include<stdio.h>
void average(int,int,int,int,int);
void main()
{
	int n1,n2,n3,n4,n5;
	printf("Enter 5 numbers:");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	average(n1,n2,n3,n4,n5);
}
void average(int n1,int n2,int n3,int n4,int n5)
{
	int avg=(n1+n2+n3+n4+n5)/5;
	printf("Average=%d",avg);
}