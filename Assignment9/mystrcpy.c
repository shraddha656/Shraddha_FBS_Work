#include<stdio.h>
char* mystrcpy(char*,char*);
void main()
{
	char arr[]="I love my country.";
	char brr[20];
	mystrcpy(arr,brr);
	printf("Copied String:%s",brr);
}
char* mystrcpy(char* arr,char* brr)
{
	int i=0;
	while(arr[i]!='\0')
	{
		brr[i]=arr[i];
		i++;
	}
	brr[i] = '\0';
	return brr; 
}