#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n>=3 &&n<=100)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<i+1;j++)
            {
                printf("*");
            }
            printf("
");
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                printf("*");
            }
            printf("
");
        }
    }
    else
    {
        printf("The pattern is not possible");
    }
}