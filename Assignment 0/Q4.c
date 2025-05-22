#include<stdio.h>
void main()
{
	int x,y,z;
	x=20;
	y=30;
	printf("Before Swaping x=%d,y=%d",x,y);	
	z=x;
	x=y;
	y=z;
	printf("\nAfter Swaping x=%d,y=%d",x,y);
}