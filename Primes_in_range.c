#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,i,j,f=0,c=0;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{f=0;
	if(i==1)
	{
		f=1;
	}
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				f=1;
			    break;
			}
		}	
		if(f==0)
		{
			
			c++;
		}
	}
	printf("%d",c);
}