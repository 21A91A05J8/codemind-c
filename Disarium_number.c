#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,r,dc=0,sum=0;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        dc++;
        t=t/10;
    }
    t=n;
    while(dc!=0)
    {
        r=t%10;
        sum=sum+pow(r,dc);
        dc--;
        t=t/10;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}