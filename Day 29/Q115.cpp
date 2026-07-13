#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice, length;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\n1. Find Length");
    printf("\n2. Reverse String");

    printf("\nEnter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            length = strlen(str);
            printf("Length = %d", length);
            break;

        case 2:
            strrev(str);
            printf("Reverse String = %s", str);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}