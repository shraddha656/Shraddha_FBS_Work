#include<stdio.h>
void findminmax(int*,int,int*,int*);
void main()
{
	int arr[10]={1,2,33,78,25,66,87,18,9,100};
	int min,max;
	findminmax(arr,10,&min,&max);
	printf("Minimum : %d\n",min);
	printf("Maximum : %d",max);

}
void findminmax(int* arr,int size,int* min, int* max)
{
	*min=arr[0];
	*max=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]<*min)
		*min=arr[i];
		
		if(arr[i]>*max)
		*max=arr[i];
	}
	
}

