#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
        while(n>0)
        {
        n=n/10;
        n++;
        }
        printf("total %d digits",n);

}