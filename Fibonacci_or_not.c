#include<stdio.h>
int main()
{
    int n,i,x=0,y=1,c;
    scanf("%d",&n);
    i=0;
    while(i>=0)
    {
        c=x;
        x=x+y;
        y=c;
        if(n==x)
        {
            printf("True");
            break;
        }
        if(n<x)
        {
            printf("False");
            break;
        }
        i++;
     }
}