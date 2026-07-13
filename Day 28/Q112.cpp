#include <stdio.h>

int main()
{
    char name[20];
    char phone[15];

    printf("Enter Contact Name: ");
    scanf("%s", name);

    printf("Enter Phone Number: ");
    scanf("%s", phone);

    printf("\n--- Contact Details ---\n");
    printf("Name: %s\n", name);
    printf("Phone Number: %s\n", phone);

    return 0;
}