#include<stdio.h>
int areaofCircle(float);
void main()
{
	int rad;
	printf("Enter the Radius of a Circle:");
	scanf("%d",&rad);
	int area=areaofCircle(rad);
	printf("Area of a Circle:%d",area);
} 
int areaofCircle(float rad)
{
	int area=3.14*rad*rad;
	return area;
}