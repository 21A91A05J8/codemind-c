#include<stdio.h>
int main()
{
    int n,s[100],k=0,c=0,i,j,d;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        s[k]=d;
        k++;
        n=n/10;
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(s[i]==s[j]&&i!=j)
            {
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
    return 0;
}