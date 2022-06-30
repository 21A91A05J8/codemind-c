#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=65;i<(n+65);i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}