#include<stdio.h>
int main()
{
    int n,i,sq,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sq=i*i;
        if(sq==n)
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}