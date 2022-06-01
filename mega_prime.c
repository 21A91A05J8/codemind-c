#include<stdio.h>
int main()
{
    int n,i,r,fc=0,j,re,t,dc=0,c=0;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        dc++;
        t=t/10;
    }
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
        while(n!=0)
        {
            fc=0;
            r=n%10;
            for(j=1;j<=r;j++)
            {
                re=r%j;
                if(re==0)
                {
                    fc++;
                }
            }
            if(fc==2)
            {
               c++; 
            }
            n=n/10;
        }
        if(dc==c)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
    return 0;
}