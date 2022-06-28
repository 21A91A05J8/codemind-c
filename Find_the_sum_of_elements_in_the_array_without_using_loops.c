#include<stdio.h>
int fun(int n,int *a)
{
    static int s=0,i=0;
    if(i==n)
    {
        return s;
    }
    s=s+(*(a+i));
    i++;
    return fun(n,a);
}
int main()
{
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",fun(n,a));
}