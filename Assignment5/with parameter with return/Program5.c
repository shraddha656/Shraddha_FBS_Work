#include<stdio.h>
int areaOfTriangle(float,float);
void main()
{
	int height,base;
	printf("Enter the Height of Triangle:");
	scanf("%d",&height);
	printf("Enter the Base of Triangle:");
	scanf("%d",&base);
	int area=areaOfTriangle(height,base);
	printf("Area of a circle :%d",area);
}
int areaOfTriangle(float height,float base)
{
	int area=0.5*base*height;
	return area;
}