#include<stdio.h>
int main()
{
    int n,sq,temp,r,dc,re=0,rev=0;
    scanf("%d",&n);
    sq=n*n;
    temp=n;
    while(n!=0)
    {
        r=n%10;
        dc++;
        n=n/10;
    }
   n=temp;
   while(dc!=0)
   {
       r=sq%10;
       re=re*10+r;
       dc--;
       sq=sq/10;
    }
    while(re!=0)
    {
        r=re%10;
        rev=rev*10+r;
        re=re/10;
    }
    if(rev==n)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
    return 0;
}