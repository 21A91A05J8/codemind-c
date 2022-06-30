#include<stdio.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(i*(i+1)==n)
            {
                printf("YES");
                f=1;
                break;
            }
        }
    }
    if(f==0)
    {
        printf("NO");
    }
}