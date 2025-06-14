#include<stdio.h>
struct employee{
	int id;
	char name[20];
	double salary;
};
struct employee storeinfo(struct employee);
void display(struct employee);
void main(){
	struct employee e1,e2;
	printf("Enter the Details of Employee 1:\n");
	e1=storeinfo(e1);
	printf("\nEnter the Details of Employee 2:\n");
	e2=storeinfo(e2);
	display(e1);
	display(e2);
	
}
struct employee storeinfo(struct employee x)
{
	struct employee temp;
	printf("Enter id : ");
	scanf("%d",&temp.id);
	printf("Enter Name : ");
	scanf("%s",temp.name);
	printf("Enter salary : ");
	scanf("%lf",&temp.salary);
	x=temp;
	return x;
}
void display(struct employee e){
	printf("ID=%d\n",e.id);
	printf("Name=%s\n",e.name);
	printf("Salary=%lf",e.salary);
}

