#include<stdio.h>
void main()
{
	int a;
	printf("Enter value of a ");
	scanf("%d",&a);
	fflush(stdin);
	char ch[50];
	printf("Enter value of char ch ");
	gets(ch);
	printf("\na is %d and ch is %s",a,ch);
char ch2[50];
		printf("Enter value of char ch2 ");
	scanf("%s",ch2);
	printf("\na is %d and ch2 is %s",a,ch2);
}