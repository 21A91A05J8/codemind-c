#include<stdio.h>
int main()
{
    int n,i,fc=0,rev=0,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            fc++;
        }
    }
    if(fc==2)
    {
        fc=0;
        while(n!=0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        for(i=1;i<=rev;i++)
        {
            if(rev%i==0)
            {
                fc++;
            }
        }
        if(fc==2)
        {
            printf("circular prime");
        }
        else
        {
            printf("prime but not a circular prime");
        }
    }
    else
    {
        printf("not prime");
    }
        return 0;
}