#include<stdio.h>
int main()
{
    int n,a[100],d,f=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        while(a[i]>0)
        {
            d=a[i]%10;
            f+=d;
            a[i]=a[i]/10;
        }
    }
    printf("%d",f);
}