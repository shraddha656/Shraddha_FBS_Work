#include<stdio.h>
search(int*,int,int*);
void main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		printf("Enter the %d elements: ",i+1);
		scanf("%d",&arr[i]);
	}
	int num,flag=0;
	printf("Enter the Number:");
	scanf("%d",&num);
	int i=search(arr,5,&num);
		printf("Element found at %d position",i);
	
		
}
search(int* arr,int size,int* num)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==*num)
		{
			
			return i;
			break;
		}
		
    }
    
	
}