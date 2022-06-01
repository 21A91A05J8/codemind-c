#include<stdio.h>
int main()
{
    int m,n,i,s,dc=0,c=0,r,re;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
       s=i;
       dc=0;
       c=0;
       while(s!=0)
       {
           r=s%10;
           dc++;
           s=s/10;
       }
       s=i;
       while(s!=0)
       {
           r=s%10;
           if(r==0)
           {
                s=s/10;
                continue;
           }
           re=i%r;
           if(re==0)
           {
               c++;
           }
           s=s/10;
       }
       if(c==dc)
       {
           printf("%d ",i);
       }
    }
    return 0;
}