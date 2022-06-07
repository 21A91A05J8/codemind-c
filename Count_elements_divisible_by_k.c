#include<stdio.h>
int main()
{
    int arr[20],n,i,k,s,c=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=arr[i];
        if(s%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}