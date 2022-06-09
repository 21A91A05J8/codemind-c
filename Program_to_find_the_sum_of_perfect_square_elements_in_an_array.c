#include<stdio.h>
int main()
{
    int arr[20],n,i,s,j,r,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=arr[i];
        for(j=1;j<=n;j++)
        {
           r=j*j;
           if(r==s)
           {
             sum=sum+r;
             break;
           }
        }
    }
    printf("%d",sum);
    return 0;
}