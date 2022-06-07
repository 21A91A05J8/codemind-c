#include<stdio.h>
int main()
{
    int n,i,d[100],k;
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
        d[i]=n%10;
        n=n/10;
        i++;
    }
    for(k=i-1;k>=0;k--)
    {
        if(d[k]==6)
        {
            d[k]=9;
            break;
        }
    }
    for(k=i-1;k>=0;k--)
    {
        printf("%d",d[k]);
    }
    return 0;
}