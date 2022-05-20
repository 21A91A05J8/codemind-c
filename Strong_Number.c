#include<stdio.h>
int main()
{
    int n,temp,r,i,f=1,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        f=1;
        r=n%10;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
    return 0;
}