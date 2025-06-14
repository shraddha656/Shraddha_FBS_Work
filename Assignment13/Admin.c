#include<stdio.h>
struct Admin{
	int id;
	char name[20];
	double salary;
	double allowance;
};
struct Admin storeinfo(struct Admin);
void display(struct Admin);
void main(){
	struct Admin a1;
	printf("Enter the Details of Admin 1:\n");
	a1=storeinfo(a1);
	display(a1);
	
}
struct Admin storeinfo(struct Admin x)
{
	struct Admin temp;
	printf("Enter id : ");
	scanf("%d",&temp.id);
	printf("Enter Name : ");
	scanf("%s",temp.name);
	printf("Enter salary : ");
	scanf("%lf",&temp.salary);
	printf("Enter Allowance : ");
	scanf("%lf",&temp.allowance);
	x=temp;
	return x;
}
void display(struct Admin a){
	printf("ID=%d\n",a.id);
	printf("Name=%s\n",a.name);
	printf("Salary=%lf",a.salary);
	printf("Allowance=%lf",a.allowance);
}

