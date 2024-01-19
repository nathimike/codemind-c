#include<stdio.h>
int main()
{
    char x[110],y[110],str[100000];
    scanf("%s%s",x,y);
    long long int sum1=0,sum2=0,res;
    for(int i=0;x[i]!=NULL;i++)
    {
        sum1=sum1*10+x[i]-48;
    }
    for(int i=0;y[i]!=NULL;i++)
    {
        sum2=sum2*10+y[i]-48;
    }
    res=sum1*sum2;
    sprintf(str,"%lld",res);
    printf("%s",str);
    
}