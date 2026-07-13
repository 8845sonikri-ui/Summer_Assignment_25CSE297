#include <stdio.h>

int main()
{
    int ticket_no, age;
    char name[20];
    float price;

    printf("Enter Ticket Number: ");
    scanf("%d", &ticket_no);

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Ticket Price: ");
    scanf("%f", &price);

    printf("\n--- Ticket Details ---\n");
    printf("Ticket No: %d\n", ticket_no);
    printf("Passenger Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Ticket Price: %.2f\n", price);

    return 0;
}