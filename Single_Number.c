#include<stdio.h>
int main()
{
    int i,n,o=0,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        o=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                o++;
            }
        }
        if(o==0)
        {
            printf("%d",a[i]);
            break;
        }
    }
}