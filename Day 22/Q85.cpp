#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int i, j, length;

    printf("Enter string: ");
    gets(str);

    length = strlen(str);

    j = 0;

    for(i = length - 1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }

    rev[j] = '\0';

    if(strcmp(str, rev) == 0)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}