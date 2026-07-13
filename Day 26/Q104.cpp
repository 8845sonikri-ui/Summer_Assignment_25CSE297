#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("----- QUIZ GAME -----\n");

    printf("1. C language was developed by?\n");
    printf("1. Dennis Ritchie\n");
    printf("2. James Gosling\n");
    printf("3. Bjarne Stroustrup\n");

    printf("Enter answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\n2. Which symbol is used for comments in C?\n");
    printf("1. //\n");
    printf("2. #\n");
    printf("3. &\n");

    printf("Enter answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nYour Score = %d/2", score);

    return 0;
}