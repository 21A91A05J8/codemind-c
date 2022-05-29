#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,t,rev=0,d1,d2,max,min,j,r;
    scanf("%d",&n);
    for(i=n-1;i<n;i--)
    {
        t=i;
        rev=0;
        while(t!=0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        if(rev==i)
        {
            min=i;
            break;
        }
    }
    for(j=n+1;j>n;j++)
    {
        t=j;
        rev=0;
        while(t!=0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        if(rev==j)
        {
            max=j;
            break;
        }
    }
    d1=abs(n-min);
    d2=abs(n-max);
    if(d1<d2)
    {
        printf("%d",min);
    }
    else if(d2<d1)
    {
        printf("%d",max);
    }
    else
    {
        printf("%d %d",min,max);
    }
    return 0;
}