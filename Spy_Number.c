#include<stdio.h>
int main()
{
    int n,x=0,y=1;
    scanf("%d",&n);
    while(n)
    {
        x+=(n%10);
        y*=(n%10);
        n/=10; 
    }
    if(x==y)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}