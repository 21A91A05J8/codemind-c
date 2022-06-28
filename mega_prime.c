#include<stdio.h>
int main()
{
    int n,i,fc=0,t,dc=0,c=0,r;
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
        if(n%i==0)
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
            if(r==1)
            {
                n=n/10;
                continue;
            }
            for(i=1;i<=r;i++)
            {
                if(r%i==0)
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
        if(c==dc)
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