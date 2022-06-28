#include<stdio.h>
int main()
{
    int n,i,x=0,y=1,c;
    scanf("%d",&n);
    printf("0 ");
    i=0;
    while(i<n-1)
    {
        c=x;
        x=x+y;
        y=c;
        printf("%d ",x);
        i++;
    }
    
}