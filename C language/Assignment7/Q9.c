#include<stdio.h>
void storeArray();
void display();
void replace();
void main()
{
	int arr[10];
	storeArray(arr,10);
	display(arr,10);
	replace(arr,10,5,7);
	display(arr,10);
}
void storeArray(int* ptr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter the Elements of arr:",i+1);
		scanf("%d",&ptr[i]);	
	}	
}
void display(int* ptr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",ptr[i]);
			
	}
}
void replace(int* ptr,int n,int x,int y)
{
	for(int i=0;i<n;i++)
	{
		if(ptr[i]==x)
		{
			printf("\n");
			ptr[i]=y;
			
		}
		
    }
}