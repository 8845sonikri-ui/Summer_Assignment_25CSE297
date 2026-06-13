#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {sum+=i;
    }
    printf("sum of the first %d natural number is:%d\n",n,sum);
    return 0;
}
