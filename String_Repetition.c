#include<stdio.h>
#include<string.h>
int main()
{
    char str[2000];
    scanf("%[^
]s",str);
    long long int n,x,i,len=strlen(str),c=0;
    scanf("%lld",&n);
    for(i=0;i<len;i++)
    {
        if(str[i]=='a')
        {
            c++;
        }
    }
    x=(c*(n/len));
    for(i=0;i<n%len;i++)
    {
        if(str[i]=='a')
        {
            x++;
        }
    }
    printf("%lld",x);
}