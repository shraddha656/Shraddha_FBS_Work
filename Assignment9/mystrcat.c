#include<stdio.h>
char* mystrcat(char*,char*);
void main()
{
	char str1[100]="Shraddha";
	char str2[]="Patange";
	mystrcat(str1,str2);
	printf("%s",str1);
	
}
char* mystrcat(char* str1,char* str2)
{
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	return str1;
}