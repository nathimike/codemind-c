#include<stdio.h>
int main()
{
    int n,x,y=0;
    scanf("%d",&n);
    x=n*n;
    while(x)
    {
        y+=(x%10);
        x/=10; 
    }
    if(n==y)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}