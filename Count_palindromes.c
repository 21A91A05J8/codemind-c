#include<stdio.h>
int main()
{
    int arr[30],n,i,c=0,s,r,rev=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=arr[i];
        rev=0;
        while(s!=0)
        {
            r=s%10;
            rev=rev*10+r;
            s=s/10;
        }
        if(rev==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}