#include<stdio.h>
int main()
{
    int arr[10],n,i,avg=0,sum=0,c=0,s;
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
        if(s<=avg)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}