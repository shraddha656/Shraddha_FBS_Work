#include<stdio.h>
int* mystrlen(char*);
void main()
{
	char str[]="Shraddha Patange";
	mystrlen(str);
	printf("Length of Given String is %d",count);	
}
int* mystrlen(char* str)
{
	int count=0;
	for(int i=0;str[i]!='\0';i++)
	{
		count++;
	}
	return count;
} 