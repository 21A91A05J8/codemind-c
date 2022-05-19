#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,r,pro=0,dc=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        dc++;
        n=n/10;
    }
    n=temp;
    while(n!=0&&dc!=0)
    {
        r=n%10;
        pro=pro+pow(r,dc);
        dc--;
        n=n/10;
    }
    if(pro==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}