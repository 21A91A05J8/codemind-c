#include<stdio.h>
int main()
{
    int a[3],b[3],al=0,bb=0,i;
    for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            al++;
        }
        else if(b[i]>a[i])
        {
            bb++;
        }
    }
    printf("%d %d",al,bb);
}