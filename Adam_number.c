#include<stdio.h>
int main()
{
    int n,sq,r,re=0,sqr,rev=0;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0)
    {
        r=n%10;
        re=re*10+r;
        n=n/10;
    }
    sqr=re*re;
    while(sqr!=0)
    {
        r=sqr%10;
        rev=rev*10+r;
        sqr=sqr/10;
    }
    if(rev==sq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}