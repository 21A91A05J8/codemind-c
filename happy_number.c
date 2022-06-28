#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        while(n!=0)
        {
            r=n%10;
            sum=sum+pow(r,2);
            n=n/10;
        }
        if(sum<10)
        {
            if(sum==1||sum==7)
            {
                printf("True");
            }
            else
            {
                printf("False");
            }
        }
        else
        {
            n=sum;
            sum=0;
            continue;
        }
    }
    return 0;
}