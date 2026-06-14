#include<stdio.h>
int main()
{
    int n,t,r,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        sum=sum+(r*r*r);
        t=t/10;
    }
    if(sum==n)
    printf("Armstrong number");
    else
    printf("not a armstrong number");
}