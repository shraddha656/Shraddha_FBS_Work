#include<stdio.h>
char* mystrchr(char*,char);
void main()
{
	char str[]="Firstbitsolutions";
	char* result=mystrchr(str,'S');
	if(result!=NULL)
		printf("Character found at %d position",result - str);
	else
		printf("Character not found!!");
}
char* mystrchr(char* str,char x)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==x)
			return &str[i];
		i++;
	}
}