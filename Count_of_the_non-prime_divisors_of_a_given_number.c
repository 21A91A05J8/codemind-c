#include<stdio.h>
int main()
{
    int n,i,r,j,f=0,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=n%i;
        if(r==0)
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
            if(f==1||f>2)
            {
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}