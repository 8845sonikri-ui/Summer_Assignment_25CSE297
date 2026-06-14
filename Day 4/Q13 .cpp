#include<stdio.h>
int main()
{
    int n,i,first=0,second=1,next;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("fibonacci series:");
    for(i=1;i<=n;i++)
    {
        printf("%d",first);
        next=first+second;
        first=second;
        second=next;
    }

}