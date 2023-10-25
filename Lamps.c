#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d%d%d%d",&a, &b, &x, &y);
    if(x>y)
    {
        printf("%d", ((a-b)*y) + (b*x));
    }
    else
    {
        printf("%d", ((a-b)*x) + (b*x));
    }
}