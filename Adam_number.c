#include<stdio.h>
int main()
{
    int n,sq,re=0,rsq=0,temp,r,sqr;
    scanf("%d",&n);
    temp=n;
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
        rsq=rsq*10+r;
        sqr=sqr/10;
    }
    if(rsq==sq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}