#include<stdio.h>
int main()
{
    int n,x=0,y=0;
    scanf("%d", &n);
    for(int i = 1;i<=n;i++)
    {
        x += i*i;
        y += i;
    }
    printf("%d", (y*y)-x);
}