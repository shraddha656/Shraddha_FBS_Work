#include<stdio.h>
void main()
{
	int arr[10]={1,2,33,78,25,66,87,18,9,100};
	int min=arr[0];
	int max=arr[0];
	for(int i=0;i<10;i++)
	{
		if(arr[i]<min)
		min=arr[i];
		
		if(arr[i]>max)
		max=arr[i];
	}
	printf("Minimum : %d\n",min);
	printf("Maximum : %d",max);
}