#include<stdio.h>
int main()
{
    int l,r,i,s=0,j,c=0;
    scanf("%d%d",&l,&r);
    for(i=l;i<=r;i++)
    {
        if(i%2==1)
        {
            c++;
        }
        for(j=i+1;j<=r;j++)
        {
            if((i+j)%2==1)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}