#include<stdio.h>
int main()
{
    int n,i,s,r,rev=0,j,fc=0;
    scanf("%d",&n);
    for(i=n+1;i>n;i++)
    {
        s=i;
        rev=0;
        while(s!=0)
        {
            r=s%10;
            rev=rev*10+r;
            s=s/10;
        }
        if(rev==i)
        {
            fc=0;
            for(j=1;j<=rev;j++)
            {
                r=rev%j;
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