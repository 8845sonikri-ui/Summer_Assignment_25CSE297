#include <stdio.h>

int main()
{
    int emp_id;
    float basic, hra, da, total;

    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("Enter HRA: ");
    scanf("%f", &hra);

    printf("Enter DA: ");
    scanf("%f", &da);

    total = basic + hra + da;

    printf("\n--- Salary Details ---\n");
    printf("Employee ID: %d\n", emp_id);
    printf("Basic Salary: %.2f\n", basic);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Total Salary: %.2f\n", total);

    return 0;
}