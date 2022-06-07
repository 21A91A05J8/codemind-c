#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100],n,i,sum1=0,sum2=0,dif;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum1=sum1+arr[i];
        }
        else
        {
            sum2=sum2+arr[i];
        }
    }
    dif=abs(sum1-sum2);
    printf("%d",dif);
    return 0;
}