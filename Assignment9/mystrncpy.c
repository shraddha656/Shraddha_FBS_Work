#include<stdio.h>
char* mystrncpy(char*,char*,int);
void main()
{
	char arr[]="I love my country.";
	char brr[20];
	mystrncpy(arr,brr,5);
	printf("Copied String:%s",brr);
}
char* mystrncpy(char* arr,char* brr,int n)
{
	int i=0;
	while(i<n&&arr[i]!='\0')
	{
		brr[i]=arr[i];
		i++;
	}
	brr[i] = '\0';
	return brr; 
}