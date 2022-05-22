#include<stdio.h>
int main()
{
    int n,m=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r>m)
        {
            m=r;
        }
        n=n/10;
    }
    printf("%d",m);
    return 0;
}