#include<stdio.h>
int main()
{
    int n,m,x=0;
    scanf("%d%d", &n, &m);
    for(int i = 1;i<=n;i++)
    {
        if(n%i==0 and m%i==0)
        {
                x=i;
        }
    }
    printf("%d", x);
}