#include<stdio.h>
void areaOfTriangle(float,float);
void main()
{
	int height,base;
	printf("Enter the Height of Triangle:");
	scanf("%d",&height);
	printf("Enter the Base of Triangle:");
	scanf("%d",&base);
	areaOfTriangle(height,base);
}
void areaOfTriangle(float height,float base)
{
	int area=0.5*base*height;
	printf("Area of a circle :%d",area);
}