#include<stdio.h>
int main()
{
    int x,t,rev=0,r;
    scanf("%d",&x);
    while(1)
    {
        t=x;
        rev=0;
        while(t!=0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        x=x+rev;
        t=x;
        rev=0;
        while(t!=0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        if(rev==x)
        {
            printf("%d",x);
            break;
        }
    }
    return 0;
}