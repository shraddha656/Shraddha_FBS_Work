#include<stdio.h>
void main()
{
	int arr[10];
	for(int i=0;i<5;i++)
	{
		printf("Enter the %d elements: ",i+1);
		scanf("%d",&arr[i]);
	}
	int num,flag=0;
	printf("Enter the Number:");
	scanf("%d",&num);
	for(int i=0;i<5;i++)
	{
		if(arr[i]==num)
		{
			printf("Element found at %d position",i);
			flag=1;
			break;
		}
		
    }
    if(flag=0)
			printf("Element not found");
		
}