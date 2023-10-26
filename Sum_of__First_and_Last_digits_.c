#include<stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    x=n;
    while(x>10)
    {
        x/=10;
    }
    printf("%d", x + n%10);
}