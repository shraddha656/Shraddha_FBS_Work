#include<stdio.h>
int calsum(int*,int,int*);
void main()
{
	int arr[10]={2,2,3,4,5,6,7,8,9,10};
	int sum=0;
	calsum(arr,10,&sum);
	printf("Sum=%d",sum);
}
int calsum(int* arr,int size,int* sum)
{
	for(int i=0;i<size;i++)
	{
		*sum=*sum+arr[i];
		
	}
	return sum;
	
}