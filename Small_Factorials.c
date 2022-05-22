#include<stdio.h>
int main()
{
    int arr[20],n,i,f=1,j,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        f=1;
        s=arr[i];
        for(j=1;j<=s;j++)
        {
            f=f*j;
        }
        printf("%d
",f);
    }
    return 0;
}