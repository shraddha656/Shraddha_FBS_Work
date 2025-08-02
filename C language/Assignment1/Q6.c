#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the character :");
	scanf(" %c",&ch);
	if(ch>='a'&&ch<='z'){
		printf("Chracter is Lowercase");
	}
	else if(ch>='A'&&ch<='Z'){
		printf("Chracter is Uppercase");
	}
	else{
		printf("Enter the Valid character");
	}
}