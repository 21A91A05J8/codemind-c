#include<stdio.h>
int main()
{
    int arr[20],n,i,a,b,s,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        s=arr[i];
        if(s<a||s>b)
        {
            sum=sum+s;
        }
    }
    printf("%d",sum);
    return 0;
}