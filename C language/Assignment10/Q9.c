#include<stdio.h>
void main()
{
	char str1[]="firstbit";
	char str2[]="solutionsghjhghj";
	int str1Count=0;
	int str2Count=0;
	int i=0;
	while(str1[i]!='\0')
	{ 
		str1Count++;
	    i++;
	}
	int j=0;
	while(str2[j]!='\0')
	{
		str2Count++;
	    j++;
	}
	
	if(str1Count>str2Count)
		printf("String 1 is greater");
	else if(str1Count<str2Count)
		printf("String 2 is greater");
	else
		printf("String 1 and string 2 is equal.");
}