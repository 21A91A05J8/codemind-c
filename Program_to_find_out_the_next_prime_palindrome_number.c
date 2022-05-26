#include<stdio.h>
int main()
{
    int n,i,t,r,re=0,j,fc=0;
    scanf("%d",&n);
    for(i=n+1;i>n;i++)
    {
        re=0;
        fc=0;
        t=i;
        while(t!=0)
        {
           r=t%10;
           re=re*10+r;
           t=t/10;
        }
        if(i==re)
        {
            for(j=1;j<=re;j++)
            {
                r=re%j;
                if(r==0)
                {
                    fc++;
                }
            }
            if(fc==2)
            {
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}