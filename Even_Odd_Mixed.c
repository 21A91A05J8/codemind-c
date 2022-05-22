#include<stdio.h>
int main()
{
    int n,temp,r,even=0,odd=0,dc=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        dc++;
        n=n/10;
    }
    n=temp;
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        n=n/10;
    }
    if(dc==even)
    {
        printf("Even");
    }
    else if(dc==odd)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
    return 0;
}