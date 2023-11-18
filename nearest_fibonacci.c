#include<stdio.h>
int main()
{
    int n,x,a=0,b=1,c=0,min1=100,min2=100;
    int fib1=0,fib2=0;
    scanf("%d",&n);
    x=n;
    while(x)
    {
        c=a+b;
        a=b;
        b=c;
        if(c<n)
        {
           if((n-c)<=min1)
           {
               min1 = n-c;
               fib1=c;
           }
        }
        else
        {
           if((c-n)<=min2)
           {
               min2 = c-n;
               fib2=c;
           }
        }
        x--;
    }
    if(min1>min2)
    {
        printf("%d",fib2);
    }
    else if(min2>min1)
    {
        printf("%d",fib1);
    }
    else if(min2==min1)
    {
        printf("%d %d",fib1, fib2);
    }
}