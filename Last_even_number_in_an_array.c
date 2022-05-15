#include<stdio.h>
int main()
{
    int arr[10],n,i,s,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=arr[i];
        if(s%2==0)
        {
            l=s;
        }
    }
    printf("%d",l);
    return 0;
    
}