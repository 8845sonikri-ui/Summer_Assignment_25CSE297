#include<stdio.h>
int main()
{
    int start,end,i,j,flag;
    printf("enter starting number");
    scanf("%d",&start);
    printf("enter a ending number");
    scanf("%d",&end);
    printf("prime number between %d and %d are:\n",start,end);
    for(i=start;i<=end;i++)
    {
        if(i<=1)
        continue;
        flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        printf("%d",i);
    }
}