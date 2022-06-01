#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,rev=0,r,j,d1,d2,s,min,max;
    scanf("%d",&n);
    for(i=n-1;i<n;i--)
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
            min=i;
            break;
        }
    }
    for(j=n+1;j>n;j++)
    {
        s=j;
        rev=0;
        while(s!=0)
        {
            r=s%10;
            rev=rev*10+r;
            s=s/10;
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