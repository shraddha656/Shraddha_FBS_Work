#include<stdio.h>
int square(int);
int cube(int);
void main()
{
	int num;
	printf("Enter the Number:");
	scanf("%d",&num);
	int cu=cube(num);
	printf("Cube of a Number:%d\n",cu);
	int sq=square(num);
	printf("Square of a Number:%d\n",sq);
	
}
int square(int x)
{
	int sq=x*x;
	return sq;
}
int cube(int y)
{
	int cu=y*y*y;
	return cu;
}