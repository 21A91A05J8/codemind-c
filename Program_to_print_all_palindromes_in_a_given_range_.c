#include<stdio.h>
int main()
{
    int m,n,i,temp,r,rev=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        temp=i;
        rev=0;
        while(temp!=0)
        {
            r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }
        if(i==rev)
        {
            printf("%d ",rev);
        }
    }
    return 0;
}
