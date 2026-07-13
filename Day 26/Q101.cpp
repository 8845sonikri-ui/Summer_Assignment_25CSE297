#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess;

    srand(time(0));

    number = rand() % 100 + 1;

    printf("Guess a number between 1 to 100: ");
    scanf("%d", &guess);

    while(guess != number)
    {
        if(guess > number)
            printf("Too High!\n");
        else
            printf("Too Low!\n");

        printf("Enter again: ");
        scanf("%d", &guess);
    }

    printf("Correct Guess!");

    return 0;
}