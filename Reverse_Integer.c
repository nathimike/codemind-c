#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    while(n)
    {
        x+=(n%10);
        x*=10;
        n/=10;
    }
    printf("%d",x/10);
}