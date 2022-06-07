#include<stdio.h>
int main()
{
    int arr[100],a,b,hcf,co,min,k,c=0;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        min=b;
    }
    else
    {
        min=a;
    }
    for(k=min;k>=1;k--)
    {
        if(a%k==0&&b%k==0)
        {
            hcf=k;
            break;
        }
    }
    printf("%d",hcf);
}