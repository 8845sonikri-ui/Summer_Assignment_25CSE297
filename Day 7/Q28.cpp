#include <stdio.h>

int reverse = 0;

int rev(int n)
{
    if(n == 0)
        return 0;

    reverse = reverse * 10 + n % 10;
    rev(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    rev(n);

    printf("Reverse = %d", reverse);

    return 0;
}