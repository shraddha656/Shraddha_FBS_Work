#include<stdio.h>
void square(int);
void cube(int);
void main()
{
	int num;
	printf("Enter the Number:");
	scanf("%d",&num);
	cube(num);
	square(num);
	
}
void square(int x)
{
	int square=x*x;
	printf("Square of a Number:%d\n",square);
}
void cube(int y)
{
	int cube=y*y*y;
	printf("Cube of a Number:%d\n",cube);
}