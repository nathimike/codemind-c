#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d%d%d", &n, &a, &b);
    for(a;a<=b;a++)
    {
       printf("%d x %d = %d
", n,a,(a*n));
    }
}