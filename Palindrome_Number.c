#include<stdio.h>
int main()
{
    int arr[20],n,i,r,rev=0,s,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        rev=0;
        s=arr[i];
        temp=s;
        while(s!=0)
        {
            r=s%10;
            rev=rev*10+r;
            s=s/10;
        }
        if(rev==temp)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}