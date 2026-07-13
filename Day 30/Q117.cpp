#include <stdio.h>

int main()
{
    int roll[100], marks[100], n, i;
    char name[100][20];

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Student %d Details\n",i+1);

        printf("Roll No: ");
        scanf("%d",&roll[i]);

        printf("Name: ");
        scanf("%s",name[i]);

        printf("Marks: ");
        scanf("%d",&marks[i]);
    }

    printf("\n--- Student Records ---\n");

    for(i=0;i<n;i++)
    {
        printf("\nRoll No: %d",roll[i]);
        printf("\nName: %s",name[i]);
        printf("\nMarks: %d\n",marks[i]);
    }

    return 0;
}