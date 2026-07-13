#include <stdio.h>

int main()
{
    int book_id;
    char book_name[30];
    char author[30];
    int choice;

    printf("Enter Book ID: ");
    scanf("%d",&book_id);

    printf("Enter Book Name: ");
    scanf("%s",book_name);

    printf("Enter Author Name: ");
    scanf("%s",author);

    printf("\n1. Display Book Details");
    printf("\nEnter choice: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("\n--- Book Details ---\n");
        printf("Book ID: %d\n",book_id);
        printf("Book Name: %s\n",book_name);
        printf("Author: %s\n",author);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}