#include<stdio.h>
void findAlt(int*,int,int*,int*);
void main()
{
	int arr[10]={91,12,83,74,55,86,67,98,59,10};
	int alt[10], altCount=0;
	findAlt(arr,10,alt,&altCount);
	printf("Alternate Numbers are: ");
	for(int i=0;i<altCount;i++)
	{
		printf("%d ",alt[i]);
	}
}
void findAlt(int* arr,int size,int* alt,int* altCount)
{
	for(int i=0;i<10;i=i+2)
	{
		alt[*altCount]=arr[i];
		(*altCount)++;
	}
}