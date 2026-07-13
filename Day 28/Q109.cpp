#include <stdio.h>

int main()
{
    int book_id;
    char book_name[30];
    char author[30];

    printf("Enter Book ID: ");
    scanf("%d", &book_id);

    printf("Enter Book Name: ");
    scanf("%s", book_name);

    printf("Enter Author Name: ");
    scanf("%s", author);

    printf("\n--- Library Details ---\n");
    printf("Book ID: %d\n", book_id);
    printf("Book Name: %s\n", book_name);
    printf("Author: %s\n", author);

    return 0;
}