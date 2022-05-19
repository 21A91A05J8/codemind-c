#include<stdio.h>
int main()
{
    int n,i,sq;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        sq=i*i;
        if(sq==n)
        {
            break;
        }
    }
    if(sq==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}