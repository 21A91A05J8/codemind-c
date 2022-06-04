#include<stdio.h>
int main()
{
    int arr[20],n,i,z,s,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        s=arr[i];
        if(s==z)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}