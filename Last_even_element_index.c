#include<stdio.h>
int main()
{
    int arr[10],n,i,s,ind;
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
            ind=i;
        }
    }
    printf("%d",ind);
    return 0;
}