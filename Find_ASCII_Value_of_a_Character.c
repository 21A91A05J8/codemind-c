#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,n;
    scanf("%[^
]s",&str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        printf("%d",str[i]);
    }
}