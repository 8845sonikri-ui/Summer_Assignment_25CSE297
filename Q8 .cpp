#include<stdio.h>
int main()
{
    int num, originalnum,reversednum=0,remainder;
    printf(" enter a number:");
    scanf("%d",&num);
    originalnum=num;
    while (num!=0)
    {
        remainder=num%10;
        reversednum=reversednum*10+remainder;
        num=num/10;
    }
    if(originalnum==reversednum)
    printf("%d is a palindrome number:",originalnum);

}

