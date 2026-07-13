#include <stdio.h>

int main()
{
    int roll;
    char name[20];
    float m1, m2, m3, total, percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Marks of 3 Subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("\n--- Marksheet ---\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", roll);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if(percentage >= 40)
        printf("Result: PASS");
    else
        printf("Result: FAIL");

    return 0;
}