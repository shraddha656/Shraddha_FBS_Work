#include<stdio.h>
int areaOfRect(int,int);
int periOfRect(int,int);
void main()
{
	int length,breadth;
	printf("Enter length of rectangle:");
	scanf("%d",&length);
	printf("Enter breadth of rectangle:");
	scanf("%d",&breadth);
	int area=areaOfRect(length,breadth);
	printf("Area of Rectangle:%d\n",area);
	int peri=periOfRect(length,breadth);
	printf("Perimeter of Rectangle:%d",peri);
}
int areaOfRect(int len,int bre)
{
	int area=len*bre;
	return area;
}
int periOfRect(int len,int bre)
{
	int peri=2*(len+bre);
	return peri;
	
}