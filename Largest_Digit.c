#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d", &n);
    while(n)
    {
        if(n%10>x)
        {
            x=n%10;
        }
        n/=10;
    }
    printf("%d", x);
}