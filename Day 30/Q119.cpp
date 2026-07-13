#include <stdio.h>

int main()
{
    int id, salary;
    char name[30];

    printf("Enter Employee ID: ");
    scanf("%d",&id);

    printf("Enter Employee Name: ");
    scanf("%s",name);

    printf("Enter Salary: ");
    scanf("%d",&salary);

    printf("\n--- Employee Details ---\n");

    printf("ID: %d\n",id);
    printf("Name: %s\n",name);
    printf("Salary: %d\n",salary);

    return 0;
}