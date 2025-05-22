//#include<stdio.h>
//void findevenOdd(int*,int);
//void main()
//{
//	int arr[10]={19,24,34,49,58,60,79,80,97,100};
//	findevenOdd(arr,5);
//}
//void findevenOdd(int* arr,int size)
//{
//	printf("Even Numbers=" );
//	for(int i=0;i<size;i++)
//	{
//		if(arr[i]%2==0)
//		{
//			printf("%d, ",arr[i]);
//		}
//		
//	}
//	printf("\nOdd Numbers=" );
//	for(int i=0;i<size;i++)
//	{
//		if(arr[i]%2!=0)
//		{
//			printf("%d, ",arr[i]);
//		}
//		
//	}
//}

#include<stdio.h>
void findevenOdd(int*,int,int*,int*,int*,int*);
void main()
{
	int arr[10]={1,2,42,556,77,32,12,45,78,53};
	int oddArr[10],evenArr[10];
	int evenCount=0,oddCount=0;
	findevenOdd(arr,10,evenArr,&evenCount,oddArr,&oddCount);
	
	printf("Even Numbers: ");
	for(int i=0;i<evenCount;i++)
	{
		printf("%d ",evenArr[i]);
	}
	printf("\nOdd Numbers: ");
	for(int i=0;i<oddCount;i++)
	{
		printf("%d ",oddArr[i]);
	}
}
void findevenOdd(int* arr,int size,int* evenArr,int* evenCount,int* oddArr,int* oddCount)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			evenArr[*evenCount]=arr[i];
			(*evenCount)++;
		}
		else{
			oddArr[*oddCount]=arr[i];
			(*oddCount)++;
		}
	}
}













