#include<stdio.h>
struct Book{
	int id;
	char name[10];
	char author[50];
	int price;
};
struct Book storebook(struct Book );
void display(struct Book);
void main()
{
	struct Book b1;
	printf("Enter the Details of Book\n ");
	b1=storebook(b1);
	display(b1);
}
struct Book storebook(struct Book b)
{
	struct Book temp;
	printf("Enter the id:");
	scanf("%d",&temp.id);
	printf("Enter the Name:");
	scanf("%s",temp.name);
	printf("Enter the Author:");
	scanf("%s",temp.author);
	printf("Enter the price:");
	scanf("%d",&temp.price);
	b=temp;
	return b;
}
void display(struct Book e)
{
	printf("\nId :%d",e.id);	
	printf("\nName :%s",e.name);	
	printf("\nAuthor :%s",e.author);	
	printf("\nPrice :%d",e.price);	
}