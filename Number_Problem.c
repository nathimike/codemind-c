#include<stdio.h>
int main()
{
    int a,b,x;
    int count = 0;
    scanf("%d%d",&a, &b);
    if(a>=b)
    {
        x=a-b;
    }
    else
    {
        x=b-a;
    }
    while(x>0)
    {
        count++;
        x-=10;
    }
    printf("%d", count);
}