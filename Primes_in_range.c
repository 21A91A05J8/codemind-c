#include<stdio.h>
#include<math.h>
int fac(int i)
{
    int j,fc=2,sq;
    sq=sqrt(i);
    if(i==1)
    {
        return 1;
        
    }
    for(j=2;j<=sq;j++)
    {
        if(i%j==0)
        {
            fc+=2;
        }
        
    }
    if(sq*sq==i)
    {
        fc=1;
    }
    return fc;
}
#include<stdio.h>
int main()
{
    int m,n,i,fc,p=0;
    scanf("%d",&m);
    scanf("%d",&n);
    
    for(i=m;i<=n;i++)
    {
       fc=fac(i);
       if(fc==2)
           {
               p++;
           }
    }
    
    
    printf("%d",p);
    return 0;
}