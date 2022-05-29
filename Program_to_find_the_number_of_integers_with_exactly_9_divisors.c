#include<stdio.h>
int main()
{
    int n,i,r,f=0,c=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=0;
        for(j=1;j<=i;j++)
        {
            r=i%j;
            if(r==0)
            {
                f++;
            }
        }
        if(f==9)
        {
            printf("%d ",i);
            c++;
        }
    }
    printf("
Total=%d",c);
    return 0;
}