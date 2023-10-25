#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x/5>0 && x%5 == 0)
    {
        printf("%d", x/5);
    }
    else
    {
        printf("%d", 1 + x/5);
    }
}