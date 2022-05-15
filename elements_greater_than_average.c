#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0,avg=0,c=0,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=arr[i];
        sum=sum+s;
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        s=arr[i];
        if(s>=avg)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}