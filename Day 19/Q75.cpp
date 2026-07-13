#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10];
    int r, col, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &col);

    printf("Enter matrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
            transpose[j][i] = a[i][j];
    }

    printf("Transpose Matrix:\n");

    for(i = 0; i < col; i++)
    {
        for(j = 0; j < r; j++)
            printf("%d ", transpose[i][j]);

        printf("\n");
    }

    return 0;
}