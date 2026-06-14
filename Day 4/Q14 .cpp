#include<stdio.h>
int main()
{
    int n,i,first=0,second=1,next;
    printf("enter the value of n:");
    scanf("%d",&n);
    if(n==1)
    printf("nth fibonacci term=%d",first);
    else 
    if(n==2)
    printf("nth fibonacciterm=%d",second);
    else
    {
        for(i=3;i<=n;i++)
        {
            next=first+second;
            first=second;
            second=next;
        }
        printf("nth fibonacci term=%d",second);
    }
}