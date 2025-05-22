#include<stdio.h>
char* mystrlwr(char*);
void main()
{
	char str[]="SHRADDHA";
	mystrlwr(str);
	printf("Lowercase String:%s",str);
}
char* mystrlwr(char* str){
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z')
			str[i]=str[i]+32;
		i++;
    }
	return str;
}