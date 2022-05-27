#include<stdio.h>
int main()
{
    int arr[10],n,i,s,j,sq;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=arr[i];
        for(j=1;j<=s/2;j++)
        {
            sq=j*j;
            if(sq==s)
            {
                printf("True
");
                break;
            }
        }
        if(s!=sq)
        {
            printf("False
");
        }
    }
    return 0;
}