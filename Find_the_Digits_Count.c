#include<stdio.h>
int main()
{
    int n, x=0;
    scanf("%d", &n);
    while(n)
    {
        n/=10;
        x++;
    }
    printf("%d", x);
}