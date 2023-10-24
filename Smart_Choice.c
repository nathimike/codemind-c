#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d%d", &x, &y);
    if((500-(2*x)) + (1000-(4*(y+x))) > ((500-(2*(x+y))) + (1000-(4*y))))
    {
        printf("%d", (500-(2*x)) + (1000-(4*(y+x))));
    }
    else
    {
        printf("%d", (500-(2*(x+y))) + (1000-(4*y)));
    }
}