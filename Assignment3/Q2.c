#include<stdio.h>
void main(){
	int num,result;
	int i=1;
	printf("Enter the Number:");
	scanf("%d",&num);
	while(i<=10){
		result=num*i;
		printf("%d\n",result);
		i++;
	}
}
