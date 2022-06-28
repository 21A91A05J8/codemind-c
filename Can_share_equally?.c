#include<stdio.h>
int main()
{
    unsigned int x,y;
    scanf("%d%d",&x,&y);
    if(x%2==0&&y%2&&x!=0)
    printf("YES");
    else if(x%2==0&&y%2==0)
    printf("YES");
    else
    {
        printf("NO");
    }
}