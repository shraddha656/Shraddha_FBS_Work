#include<stdio.h>
void areaofCircle(float);
void main()
{
	int rad;
	printf("Enter the Radius of a Circle:");
	scanf("%d",&rad);
	areaofCircle(rad);
} 
void areaofCircle(float rad)
{
	int area=3.14*rad*rad;
	printf("Area of a Circle:%d",area);
}