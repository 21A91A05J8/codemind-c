#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0,dc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            dc++;
            printf("%d ",arr[i]);
        }
    }
    if(dc==0)
    {
        printf("-1");
    }
    return 0;
}