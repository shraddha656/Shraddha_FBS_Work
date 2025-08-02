#include<stdio.h>
struct Product{
	int id;
	char name[20];
	double quantity;
	double price;
};
struct Product storeinfo(struct Product);
void display(struct Product);
void main(){
	struct Product p1,p2;
	printf("Enter the Details of Product 1\n");
	p1=storeinfo(p1);
	printf("Enter the Details of Product 2\n");
	p2=storeinfo(p2);
	display(p1);
	display(p2);
	
}
struct Product storeinfo(struct Product x)
{
	struct Product temp;
	printf("Enter id : ");
	scanf("%d",&temp.id);
	printf("Enter Name : ");
	scanf("%s",temp.name);
	printf("Enter quantity : ");
	scanf("%lf",&temp.quantity);
	printf("Enter price : ");
	scanf("%lf",&temp.price);
	x=temp;
	return x;
}
void display(struct Product a){
	printf("ID=%d\n",a.id);
	printf("Name=%s\n",a.name);
	printf("Quantity=%lf\n",a.quantity);
	printf("Price=%lf\n",a.price);
}

