#include<stdio.h>
int main()
{
    int n,pd=1,ps=0,last;
    scanf("%d",&n);
    while(n)
    {
        last=(n%10);
        pd*=last;
        ps+=last;
        n/=10;
    }
    printf("%d",pd-ps);
}