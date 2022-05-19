#include<stdio.h>
int main()
{
    int n,i,fc=0,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=n%i;
        if(r==0)
        {
            fc++;
        }
    }
    if(fc==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
    return 0;
}