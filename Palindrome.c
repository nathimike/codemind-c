#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,x=0;
    scanf("%d", &n);
    m=n;
    while(m)
    {
        x+=(m%10);
        x*=10;
        m/=10;
    }
    if(x/10==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}