#include<stdio.h>
int mystrncmp(char*,char*,int);
void main()
{
	char str1[]="shraddha";
	char str2[]="shrad";
	int result=mystrncmp(str1,str2,5);
	if(result==0)
		printf("Strings are equal");
	else if(result<0)
		printf("String 1 is less than 2");
	else
		printf("String 1 is greater than 2");
	
}
int mystrncmp(char* str1,char*str2,int n)
{
	int i=0;
	while(i<n&&str1[i]!='\0'&&str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
			return str1[i]-str2[i];
		i++;
	}
	if(i<n)
		return str1[i]-str2[i]; 
		
	return 0;
}