#include<stdio.h>
int main()
{
    int arr[20],n,i,s,dc=0,r,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        s=arr[i];
        while(s!=0)
        {
            r=s%10;
            dc++;
            s=s/10;
        }
        if(dc%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}