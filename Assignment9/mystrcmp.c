#include<stdio.h>
int mystrcmp();
void main()
{
	char str1[]="Ram";
	char str2[]="Ra";
	int result=mystrcmp(str1,str2);
	if(result==1)
		printf("Strings are equal");
	else if(result<0)
		printf("String 1 is less than 2");
	else
		printf("String 1 is greater than 2");
	
}
int mystrcmp(char* str1,char*str2)
{
	int i=0;
	while(str1[i]!='\0'&&str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
			return str1[i]-str2[i];
		i++;
	}
	return str1[i]-str2[i]; 
}