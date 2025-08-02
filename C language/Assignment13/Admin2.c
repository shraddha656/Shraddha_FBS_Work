#include<stdio.h>
struct Admin{
	int id;
	char name[20];
	double salary;
	double allowance;
};
struct Admin storeinfo(struct Admin*);
void display(struct Admin*);
void main(){
	struct Admin a1;
	printf("Enter the Details of Admin 1:\n");
	storeinfo(&a1);
	display(&a1);
	
}
struct Admin storeinfo(struct Admin* a1)
{
	
	printf("Enter id : ");
	scanf("%d",&a1->id);
	printf("Enter Name : ");
	scanf("%s",a1->name);
	printf("Enter salary : ");
	scanf("%lf",&a1->salary);
	printf("Enter Allowance : ");
	scanf("%lf",&a1->allowance);
}
void display(struct Admin* a1){
	printf("ID=%d\n",a1->id);
	printf("Name=%s\n",a1->name);
	printf("Salary=%lf\n",a1->salary);
	printf("Allowance=%lf",a1->allowance);
}

