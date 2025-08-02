#include<stdio.h>
#include<string.h>
#define MAX 5
typedef struct Book{
	int id;
	char name[50];
	char author[50];
	char category[50];
	float price;
	float rating;
}Book;
void addBooks(Book*);
void displayBooks(Book*);
void searchBook(Book*);
void authorsBook(Book*);
void categoriesBook(Book*);
void removeBook(Book*);
void updateBook(Book*);
void displayTop(Book*);
void main()
{
	Book book[MAX];
	while(1){
		int choice;
		printf("\n--- Book Management System ---\n");
        printf("1. Add Book\n2. Display All Books\n3. Remove Book\n4. Search Book\n");
        printf("5.Show Books by Author\n6. Show Books by Category\n");
        printf("7. Update Book Data\n8. Display Top 3 Books\n9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
        	case 1: addBooks(book);
			break;
			case 2: displayBooks(book);
			break;
			case 3: removeBook(book);
			break;
			case 4: searchBook(book);
			break;
			case 5: authorsBook(book);
			break;
			case 6: categoriesBook(book);
			break;
			case 7: updateBook(book);
			break;
			case 8: displayTop(book);
			break;
			default:
                printf("Invalid choice!\n");
		}
        
	}
	
}
void addBooks(Book* b)
{
	for(int i=0;i<MAX;i++)
	{
		printf("Book %d\n",i+1);
		printf("Enter the Book id:");
		scanf("%d",&b[i].id);
		getchar();
		printf("Enter the book name:");
		fgets(b[i].name,50,stdin);
		printf("Enter the book Author name:");
		fgets(b[i].author,50,stdin);
		printf("Enter the Category:");
		fgets(b[i].category,50,stdin);
		printf("Enter the Price:");
		scanf("%f",&b[i].price);
		getchar();
		printf("Enter the rating:");
		scanf("%f",&b[i].rating);
		getchar();
	}
}
void displayBooks(Book* d)
{
	printf("\n!!------All Books--------!!\n\n");
	for(int i=0;i<MAX;i++)
	{
		printf("......Book %d......\n",i+1);
		printf("Id :%d\n",d[i].id);
		printf("Name : %s",d[i].name);
		printf("Author Name : %s",d[i].author);
		printf("Category : %s",d[i].category);
		printf("Price :%f\n",d[i].price);
		printf("Rating :%f\n",d[i].rating);
	}	
} 
void searchBook(Book* s)
{
	int choice;
	printf("Search by:\n 1.Book Id\n 2.Book Name\nEnter your Choice:");
	scanf("%d",&choice);
	if(choice==1)
	{
		int searchId;
		printf("Enter Book id:");
		scanf("%d",&searchId);
		for(int i=0;i<MAX;i++)
		{
			if(s[i].id==searchId)
			{
				printf("Book Found !!!\n Id :%d, Name: %s\n",s[i].id,s[i].name);
				break;
			}
			else
			{
				printf("Book not found!!!");
			}
		}
	}
	else if(choice==2)
	{
		char searchName[50];
		printf("Enter Book name:");
		fgets(searchName,50,stdin);
		for(int i=0;i<MAX;i++)
		{
			if(strcmp(s[i].name,searchName)==0)
			{
				printf("Book Found !!!\n Id :%d, Name: %s\n",s[i].id,s[i].name);
				break;
			}
			else
			{
				printf("Book not found!!!");
			}
		}
	}
	else
	{
		printf("Invalid Choice!!!");
	}
}
void authorsBook(Book* a)
{
	char auth[50];
	printf("Enter the Author Name:");
	fgets(auth,50,stdin);
	printf("Books Written by %s:\n",auth);
	for(int i=1;i<MAX;i++)
	{
		if(strcmp(a[i].author,auth)==0)
		{
			printf("%s\n",a[i].name);
		}
	}
}
void categoriesBook(Book* a)
{
	char cat[50];
	printf("Enter the Category:");
	fgets(cat,50,stdin);
	printf("Books Written by %s:\n",cat);
	for(int i=1;i<MAX;i++)
	{
		if(strcmp(a[i].category,cat)==0)
		{
			printf("%s\n",a[i].name);
		}
	}
}
void removeBook(Book* r)
{
	int remove;
	printf("Enter the Book id:");
	scanf("%d",&remove);
	int found=0;
	for (int i=0;i<MAX;i++)
	{
		if(r[i].id==remove)
		{
			for(int j=i;j<MAX-1;j++)
			{
				r[j]=r[j+1];
			}
			printf("Book removed successfully!!");
			found=1;
			break;
		}
		
	}
	if (!found)
    {
        printf("Book with ID %d not found.\n", remove);
    }
}
void updateBook(Book* u)
{
	int update;
	printf("Enter the id of book which you want to update:");
	scanf("%d",&update);
	for(int i=0;i<MAX;i++)
	{
		if(u[i].id==update)
		{
			printf("Enter the new price of the Book:");
			scanf("%f",&u[i].price);
			printf("Enter the new rating of the Book:");
			scanf("%f",&u[i].rating);
			printf("Book Updated successfully!!!");
		}
	}
}
void displayTop(Book* t)
{
	for(int i=0;i<MAX;i++)
	{
		for(int j=0;j<MAX-i-1;j++)
		{
			if(t[j].price<t[j+1].price)
			{
				Book temp;
				temp=t[j];
				t[j]=t[j+1];
				t[j+1]=temp;
			}
		}
	}
	printf("\nTop 3 Books by Price:\n");
	for(int i=0;i<3&&i<MAX;i++)
	{
		printf("%s - %f\n",t[i].name,t[i].price);
	}
	
	for(int i=0;i<MAX;i++)
	{
		for(int j=0;j<MAX-i-1;j++)
		{
			if(t[j].rating<t[j+1].rating)
			{
				Book temp;
				temp=t[j];
				t[j]=t[j+1];
				t[j+1]=temp;
			}
		}
	}
	printf("\nTop 3 Books by Rating:\n");
	for(int i=0;i<3&&i<MAX;i++)
	{
		printf("%s - %f\n",t[i].name,t[i].rating);
	}
}

					                   











