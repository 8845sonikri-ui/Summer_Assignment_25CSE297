#include <stdio.h>

void display(int roll[], char name[][20], int marks[], int n)
{
    int i;

    printf("\n--- Student Details ---\n");

    for(i=0;i<n;i++)
    {
        printf("\nRoll No: %d",roll[i]);
        printf("\nName: %s",name[i]);
        printf("\nMarks: %d\n",marks[i]);
    }
}

int main()
{
    int roll[50], marks[50];
    char name[50][20];

    int n,i;

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

    display(roll,name,marks,n);

    return 0;
}