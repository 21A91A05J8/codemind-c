#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100],n,i,e=0,o=0,s,dif;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=arr[i];
        if(s%2==0)
        {
            e=e+s;
        }
        else
        {
            o=o+s;
        }
    }
    dif=abs(e-o);
    printf("%d",dif);
    return 0;
}