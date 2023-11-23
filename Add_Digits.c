#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    label:
    x=0;
    while(n)
    {
        x=x+(n%10);
        n/=10;
    }
    if(x>10)
    {
        n=x;
        goto label;
    }
    else
    {
        printf("%d",x);
    }
}