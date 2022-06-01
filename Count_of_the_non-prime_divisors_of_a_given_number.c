#include<stdio.h>
int main()
{
    int n,i,r,j,fc=0,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=n%i;
        if(r==0)
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
            if(fc!=2)
            {
               c++; 
            }
        }
    }
    printf("%d",c);
    return 0;
}