#include<stdio.h>
int main()
{
    int m,n,i,j,r,fc=0;
    scanf("%d%d",&m,&n);
    for(i=m+1;i<n;i++)
    {
        fc=0;
        for(j=1;j<=i;j++)
        {
            r=i%j;
            if(r==0)
            {
              fc++;   
            }
        }
        if(fc==2)
        {
            printf("%d
",i);
        }
    }
    return 0;
}