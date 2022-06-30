#include<stdio.h>
int main()
{
    int n,k,i,j,c=0,s=0,a[100];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0+i;j<n;j++)
        {
            s=s+a[j];
            if(s==k)
            {
                c++;
                s=0;
                break;
            }
        }
    }
    printf("%d",c);
}